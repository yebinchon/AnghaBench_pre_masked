
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int z1; int z2; } ;
typedef TYPE_4__ z_type ;
typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {int* last_bfifo_cnt; scalar_t__ fifos; int bswapped; } ;
struct TYPE_11__ {TYPE_2__ hfcpci; } ;
struct IsdnCardState {int debug; int HW_Flags; TYPE_3__ hw; } ;
struct BCState {scalar_t__ mode; int rqueue; scalar_t__ channel; struct IsdnCardState* cs; } ;
struct TYPE_14__ {int f1; int f2; TYPE_4__* za; } ;
struct TYPE_9__ {int * rxdat_b1; TYPE_6__ rxbz_b1; int * rxdat_b2; TYPE_6__ rxbz_b2; } ;
struct TYPE_13__ {TYPE_1__ b_chans; } ;
typedef TYPE_5__ fifo_area ;
typedef TYPE_6__ bzfifo_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct IsdnCardState*,char*,scalar_t__,...) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 struct sk_buff* FUNC_2 (struct BCState*,TYPE_6__*,int *,int) ;
 int FUNC_3 (struct BCState*,TYPE_6__*,int *) ;
 int FUNC_4 (struct BCState*,int ) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct BCState *VAR_6)
{
 struct IsdnCardState *VAR_7 = VAR_6->cs;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11 = 5;
 struct sk_buff *VAR_12;
 bzfifo_type *VAR_13;
 u_char *VAR_14;
 z_type *VAR_15;


 if ((VAR_6->channel) && (!VAR_7->hw.hfcpci.bswapped)) {
  VAR_13 = &((fifo_area *) (VAR_7->hw.hfcpci.fifos))->b_chans.rxbz_b2;
  VAR_14 = ((fifo_area *) (VAR_7->hw.hfcpci.fifos))->b_chans.rxdat_b2;
  VAR_9 = 1;
 } else {
  VAR_13 = &((fifo_area *) (VAR_7->hw.hfcpci.fifos))->b_chans.rxbz_b1;
  VAR_14 = ((fifo_area *) (VAR_7->hw.hfcpci.fifos))->b_chans.rxdat_b1;
  VAR_9 = 0;
 }
      Begin:
 VAR_11--;
 if (FUNC_7(VAR_2, &VAR_7->HW_Flags)) {
  FUNC_0(VAR_7, "rec_data %d blocked", VAR_6->channel);
  return;
 }
 if (VAR_13->f1 != VAR_13->f2) {
  if (VAR_7->debug & VAR_3)
   FUNC_0(VAR_7, "hfcpci rec %d f1(%d) f2(%d)",
    VAR_6->channel, VAR_13->f1, VAR_13->f2);
  VAR_15 = &VAR_13->za[VAR_13->f2];

  VAR_8 = VAR_15->z1 - VAR_15->z2;
  if (VAR_8 < 0)
   VAR_8 += VAR_0;
  VAR_8++;
  if (VAR_7->debug & VAR_3)
   FUNC_0(VAR_7, "hfcpci rec %d z1(%x) z2(%x) cnt(%d)",
    VAR_6->channel, VAR_15->z1, VAR_15->z2, VAR_8);
  if ((VAR_12 = FUNC_2(VAR_6, VAR_13, VAR_14, VAR_8))) {
   FUNC_5(&VAR_6->rqueue, VAR_12);
   FUNC_4(VAR_6, VAR_1);
  }
  VAR_8 = VAR_13->f1 - VAR_13->f2;
  if (VAR_8 < 0)
   VAR_8 += VAR_5 + 1;
  if (VAR_7->hw.hfcpci.last_bfifo_cnt[VAR_9] > VAR_8 + 1) {
          VAR_8 = 0;
   FUNC_1(VAR_7, VAR_9);
  }
  VAR_7->hw.hfcpci.last_bfifo_cnt[VAR_9] = VAR_8;
  if (VAR_8 > 1)
   VAR_10 = 1;
  else
   VAR_10 = 0;
 } else if (VAR_6->mode == VAR_4)
  VAR_10 = FUNC_3(VAR_6, VAR_13, VAR_14);
 else
  VAR_10 = 0;
 FUNC_6(VAR_2, &VAR_7->HW_Flags);
 if (VAR_11 && VAR_10)
  goto Begin;
}
