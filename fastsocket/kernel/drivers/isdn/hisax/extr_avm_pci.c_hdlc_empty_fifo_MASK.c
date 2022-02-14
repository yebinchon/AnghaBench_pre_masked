
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {scalar_t__ isac; scalar_t__ cfg_reg; } ;
struct TYPE_8__ {TYPE_3__ avm; } ;
struct IsdnCardState {int debug; scalar_t__ subtyp; TYPE_4__ hw; } ;
struct TYPE_5__ {scalar_t__ rcvidx; int * rcvbuf; } ;
struct TYPE_6__ {TYPE_1__ hdlc; } ;
struct BCState {char* blog; scalar_t__ channel; TYPE_2__ hw; struct IsdnCardState* cs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int *,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct IsdnCardState*,char*,...) ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,char*,char,int) ;

__attribute__((used)) static inline void
FUNC_8(struct BCState *VAR_9, int VAR_10)
{
 register u_int *VAR_11;
 u_char *VAR_12;
 u_char VAR_13 = VAR_9->channel ? VAR_3 : VAR_2;
 int VAR_14=0;
 struct IsdnCardState *VAR_15 = VAR_9->cs;

 if ((VAR_15->debug & VAR_5) && !(VAR_15->debug & VAR_6))
  FUNC_1(VAR_15, "hdlc_empty_fifo %d", VAR_10);
 if (VAR_9->hw.hdlc.rcvidx + VAR_10 > VAR_4) {
  if (VAR_15->debug & VAR_7)
   FUNC_1(VAR_15, "hdlc_empty_fifo: incoming packet too large");
  return;
 }
 VAR_12 = VAR_9->hw.hdlc.rcvbuf + VAR_9->hw.hdlc.rcvidx;
 VAR_11 = (u_int *)VAR_12;
 VAR_9->hw.hdlc.rcvidx += VAR_10;
 if (VAR_15->subtyp == VAR_0) {
  FUNC_6(VAR_13, VAR_15->hw.avm.cfg_reg + 4);
  while (VAR_14 < VAR_10) {



   *VAR_11++ = FUNC_4(VAR_15->hw.avm.isac);

   VAR_14 += 4;
  }
 } else {
  FUNC_5(VAR_13, VAR_15->hw.avm.cfg_reg + 4);
  while (VAR_14 < VAR_10) {
   *VAR_12++ = FUNC_3(VAR_15->hw.avm.isac);
   VAR_14++;
  }
 }
 if (VAR_15->debug & VAR_6) {
  char *VAR_16 = VAR_9->blog;

  if (VAR_15->subtyp == VAR_1)
   VAR_12 = (u_char *) VAR_11;
  VAR_16 += FUNC_7(VAR_16, "hdlc_empty_fifo %c cnt %d",
        VAR_9->channel ? 'B' : 'A', VAR_10);
  FUNC_0(VAR_16, VAR_12, VAR_10);
  FUNC_1(VAR_15, VAR_9->blog);
 }
}
