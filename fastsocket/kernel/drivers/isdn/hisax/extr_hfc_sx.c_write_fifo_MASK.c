
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int* data; } ;
struct hfcsx_extra {unsigned short* marker; } ;
struct TYPE_3__ {int b_fifo_size; scalar_t__ base; scalar_t__ extra; } ;
struct TYPE_4__ {TYPE_1__ hfcsx; } ;
struct IsdnCardState {int debug; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct IsdnCardState*,int ) ;
 int FUNC_1 (struct IsdnCardState*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct IsdnCardState*,char*,int,...) ;
 int FUNC_4 (struct IsdnCardState*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct IsdnCardState *VAR_12, struct sk_buff *VAR_13, u_char VAR_14, int VAR_15)
{
       unsigned short *VAR_16;
        int VAR_17, VAR_18, VAR_19, VAR_20;
 u_char VAR_21, VAR_22, VAR_23, *VAR_24;

 if (VAR_13->len <= 0) return(0);
        if (VAR_14 & 1) return(0);

 FUNC_4(VAR_12, VAR_14);
 if (VAR_14 & 4) {
   VAR_17 = VAR_0;
   VAR_21 = VAR_11;
   if (VAR_15) return(0);
 }
 else {
   VAR_17 = VAR_12->hw.hfcsx.b_fifo_size;
   VAR_21 = VAR_10;
 }

        VAR_19 = FUNC_0(VAR_12, VAR_5);
 VAR_19 = ((VAR_19 << 8) | FUNC_0(VAR_12, VAR_6));


 if (VAR_15) {
   VAR_20 = FUNC_0(VAR_12, VAR_7);
   VAR_20 = ((VAR_20 << 8) | FUNC_0(VAR_12, VAR_8));
   VAR_18 = VAR_20 - VAR_19;
   if (VAR_18 <= 0)
     VAR_18 += VAR_17;
   if (VAR_18 < VAR_13->len+1) return(0);
   VAR_18 = VAR_17 - VAR_18;
   if (VAR_18 > 2 * VAR_15) return(0);
   VAR_18 = VAR_13->len;
   VAR_24 = VAR_13->data;
   while (VAR_18--)
     FUNC_1(VAR_12, VAR_1, *VAR_24++);
   return(1);
 }

        VAR_16 = ((struct hfcsx_extra *)(VAR_12->hw.hfcsx.extra))->marker;
 VAR_16 += (((VAR_14 >> 1) & 3) * (VAR_10+1));
 VAR_22 = FUNC_0(VAR_12, VAR_2) & VAR_21;
 VAR_23 = FUNC_0(VAR_12, VAR_3) & VAR_21;

 VAR_18 = VAR_22 - VAR_23;
 if (VAR_18 < 0)
  VAR_18 += (VAR_21 + 1);
 if (VAR_18 > VAR_21-1) {
   if (VAR_12->debug & VAR_9)
     FUNC_3(VAR_12, "hfcsx_write_fifo %d more as %d frames",VAR_14,VAR_21-1);
   return(0);
 }

 *(VAR_16 + VAR_22) = VAR_19;

 if (VAR_12->debug & VAR_9)
  FUNC_3(VAR_12, "hfcsx_write_fifo %d f1(%x) f2(%x) z1(f1)(%x)",
   VAR_14, VAR_22, VAR_23, VAR_19);

 VAR_18 = *(VAR_16 + VAR_23) - VAR_19;
 if (VAR_18 <= 0)
   VAR_18 += VAR_17;

 if (VAR_12->debug & VAR_9)
   FUNC_3(VAR_12, "hfcsx_write_fifo %d count(%ld/%d)",
    VAR_14, VAR_13->len, VAR_18);
 if (VAR_18 < VAR_13->len) {
   if (VAR_12->debug & VAR_9)
     FUNC_3(VAR_12, "hfcsx_write_fifo %d no fifo mem", VAR_14);
   return(0);
 }

 VAR_18 = VAR_13->len;
 VAR_24 = VAR_13->data;
 while (VAR_18--)
   FUNC_1(VAR_12, VAR_1, *VAR_24++);

 FUNC_0(VAR_12, VAR_4);
 FUNC_5(1);
 while (FUNC_2(VAR_12->hw.hfcsx.base+1) & 1);
 return(1);
}
