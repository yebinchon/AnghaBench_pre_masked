
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int z1; int z2; } ;
typedef TYPE_4__ z_type ;
typedef size_t u_char ;
struct TYPE_8__ {scalar_t__ fifos; } ;
struct TYPE_9__ {TYPE_2__ hfcpci; } ;
struct IsdnCardState {int debug; size_t* dlog; int HW_Flags; TYPE_3__ hw; } ;
struct TYPE_12__ {int f1; int f2; TYPE_4__* za; } ;
struct TYPE_7__ {size_t* rxdat_b2; TYPE_6__ rxbz_b2; } ;
struct TYPE_11__ {TYPE_1__ b_chans; } ;
typedef TYPE_5__ fifo_area ;
typedef TYPE_6__ bzfifo_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (size_t*,size_t*,int) ;
 int FUNC_2 (struct IsdnCardState*,char*,...) ;
 int FUNC_3 (size_t*,size_t*,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct IsdnCardState *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11 = 5;
 bzfifo_type *VAR_12;
 u_char *VAR_13;
 z_type *VAR_14;
 u_char *VAR_15, *VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 u_char VAR_21[256];

 VAR_12 = &((fifo_area *) (VAR_8->hw.hfcpci.fifos))->b_chans.rxbz_b2;
 VAR_13 = ((fifo_area *) (VAR_8->hw.hfcpci.fifos))->b_chans.rxdat_b2;
      Begin:
 VAR_11--;
 if (FUNC_5(VAR_3, &VAR_8->HW_Flags)) {
  FUNC_2(VAR_8, "echo_rec_data blocked");
  return;
 }
 if (VAR_12->f1 != VAR_12->f2) {
  if (VAR_8->debug & VAR_4)
   FUNC_2(VAR_8, "hfcpci e_rec f1(%d) f2(%d)",
    VAR_12->f1, VAR_12->f2);
  VAR_14 = &VAR_12->za[VAR_12->f2];

  VAR_9 = VAR_14->z1 - VAR_14->z2;
  if (VAR_9 < 0)
   VAR_9 += VAR_0;
  VAR_9++;
  if (VAR_8->debug & VAR_4)
   FUNC_2(VAR_8, "hfcpci e_rec z1(%x) z2(%x) cnt(%d)",
    VAR_14->z1, VAR_14->z2, VAR_9);
  VAR_20 = VAR_14->z2 + VAR_9;
  if (VAR_20 >= (VAR_0 + VAR_1))
   VAR_20 -= VAR_0;
  VAR_17 = (VAR_12->f2 + 1) & VAR_6;
  if ((VAR_9 > 256 + 3) || (VAR_11 < 4) ||
      (*(VAR_13 + (VAR_14->z1 - VAR_1)))) {
   if (VAR_8->debug & VAR_5)
    FUNC_2(VAR_8, "hfcpci_empty_echan: incoming packet invalid length %d or crc", VAR_9);
   VAR_12->za[VAR_17].z2 = VAR_20;
   VAR_12->f2 = VAR_17;
  } else {
   VAR_18 = VAR_9;
   VAR_9 -= 3;
   VAR_15 = VAR_21;

   if (VAR_14->z2 <= VAR_0 + VAR_1)
    VAR_19 = VAR_9;
   else
    VAR_19 = VAR_0 + VAR_1 - VAR_14->z2;

   VAR_16 = VAR_13 + (VAR_14->z2 - VAR_1);
   FUNC_3(VAR_15, VAR_16, VAR_19);
   VAR_9 -= VAR_19;

   if (VAR_9) {
    VAR_15 += VAR_19;
    VAR_16 = VAR_13;
    FUNC_3(VAR_15, VAR_16, VAR_9);
   }
   VAR_12->za[VAR_17].z2 = VAR_20;
   VAR_12->f2 = VAR_17;
   if (VAR_8->debug & VAR_2) {
    VAR_15 = VAR_8->dlog;
    if ((VAR_18 - 3) < VAR_7 / 3 - 10) {
     *VAR_15++ = 'E';
     *VAR_15++ = 'C';
     *VAR_15++ = 'H';
     *VAR_15++ = 'O';
     *VAR_15++ = ':';
     VAR_15 += FUNC_1(VAR_15, VAR_21, VAR_18 - 3);
     VAR_15--;
     *VAR_15++ = '\n';
     *VAR_15 = 0;
     FUNC_0(VAR_8, ((void*)0), VAR_8->dlog);
    } else
     FUNC_0(VAR_8, "LogEcho: ", "warning Frame too big (%d)", VAR_18 - 3);
   }
  }

  VAR_9 = VAR_12->f1 - VAR_12->f2;
  if (VAR_9 < 0)
   VAR_9 += VAR_6 + 1;
  if (VAR_9 > 1)
   VAR_10 = 1;
  else
   VAR_10 = 0;
 } else
  VAR_10 = 0;
 FUNC_4(VAR_3, &VAR_8->HW_Flags);
 if (VAR_11 && VAR_10)
  goto Begin;
}
