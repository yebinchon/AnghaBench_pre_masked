
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct net_device {TYPE_1__* ml_priv; } ;
struct TYPE_16__ {int word; } ;
struct TYPE_15__ {int ac0_dma_done_task; int ac1_dma_done_task; int ac2_dma_done_task; int ac3_dma_done_task; int hcca_dma_done_task; int rx_done_task; int mgmt_dma_done_task; int fifo_statistic_full_task; } ;
struct TYPE_14__ {int int_disable_mask; int int_pending; int bPCIclkOff; scalar_t__ OS_Cookie; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;
typedef TYPE_2__* POS_COOKIE ;
typedef int IRQ_HANDLE_TYPE ;
typedef TYPE_3__ INT_SOURCE_CSR_STRUC ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
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
 int FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int *) ;

IRQ_HANDLE_TYPE
FUNC_13(int VAR_20, void *VAR_21)
{
 struct net_device *VAR_22 = (struct net_device *) VAR_21;
 PRTMP_ADAPTER VAR_23 = VAR_22->ml_priv;
 INT_SOURCE_CSR_STRUC VAR_24;
 POS_COOKIE VAR_25;
 BOOLEAN VAR_26;

 VAR_25 = (POS_COOKIE) VAR_23->OS_Cookie;
 VAR_24.word = 0x00000000L;
 VAR_26 = VAR_23->bPCIclkOff;
 VAR_23->bPCIclkOff = VAR_1;
 {
  FUNC_6(VAR_23, VAR_10, &VAR_24.word);
  FUNC_7(VAR_23, VAR_10, VAR_24.word);
 }
 VAR_23->bPCIclkOff = VAR_26;


 if (FUNC_9(VAR_23, VAR_19) ||
  FUNC_9(VAR_23, VAR_17))
 {
  return VAR_11;
 }
 if (VAR_24.word == 0xffffffff)
 {
  FUNC_8(VAR_23, VAR_18 | VAR_17);
  FUNC_10("snowpin - IntSource.word == 0xffffffff\n");
  return VAR_11;
 }

 if (VAR_24.word & VAR_16)
 {
  FUNC_0(VAR_13, (">>>TxCoherent<<<\n"));
  FUNC_3(VAR_23);
 }

 if (VAR_24.word & VAR_14)
 {
  FUNC_0(VAR_13, (">>>RxCoherent<<<\n"));
  FUNC_3(VAR_23);
 }

 if (VAR_24.word & VAR_2)
 {

  if ((VAR_23->int_disable_mask & VAR_2) == 0)
  {

   FUNC_11(VAR_23, VAR_2);
   FUNC_12(&VAR_25->fifo_statistic_full_task);
  }
  VAR_23->int_pending |= VAR_2;



 }

 if (VAR_24.word & VAR_8)
 {
  if ((VAR_23->int_disable_mask & VAR_8) ==0 )
  {
   FUNC_11(VAR_23, VAR_8);
   FUNC_12(&VAR_25->mgmt_dma_done_task);
  }
  VAR_23->int_pending |= VAR_8 ;
 }

 if (VAR_24.word & VAR_9)
 {
  if ((VAR_23->int_disable_mask & VAR_9) == 0)
  {

   FUNC_11(VAR_23, VAR_9);
   FUNC_12(&VAR_25->rx_done_task);
  }
  VAR_23->int_pending |= VAR_9;
 }

 if (VAR_24.word & VAR_7)
 {

  if ((VAR_23->int_disable_mask & VAR_7) == 0)
  {

   FUNC_11(VAR_23, VAR_7);
   FUNC_12(&VAR_25->hcca_dma_done_task);
  }
  VAR_23->int_pending |= VAR_7;
 }

 if (VAR_24.word & VAR_6)
 {

  if ((VAR_23->int_disable_mask & VAR_6) == 0)
  {

   FUNC_11(VAR_23, VAR_6);
   FUNC_12(&VAR_25->ac3_dma_done_task);
  }
  VAR_23->int_pending |= VAR_6;
 }

 if (VAR_24.word & VAR_5)
 {

  if ((VAR_23->int_disable_mask & VAR_5) == 0)
  {

   FUNC_11(VAR_23, VAR_5);
   FUNC_12(&VAR_25->ac2_dma_done_task);
  }
  VAR_23->int_pending |= VAR_5;
 }

 if (VAR_24.word & VAR_4)
 {

  VAR_23->int_pending |= VAR_4;

  if ((VAR_23->int_disable_mask & VAR_4) == 0)
  {

   FUNC_11(VAR_23, VAR_4);
   FUNC_12(&VAR_25->ac1_dma_done_task);
  }

 }

 if (VAR_24.word & VAR_3)
 {
  VAR_23->int_pending |= VAR_3;

  if ((VAR_23->int_disable_mask & VAR_3) == 0)
  {

   FUNC_11(VAR_23, VAR_3);
   FUNC_12(&VAR_25->ac0_dma_done_task);
  }

 }

    if (VAR_24.word & VAR_12)
 {
  FUNC_2(VAR_23);
 }

 if (VAR_24.word & VAR_15)
 {
  FUNC_4(VAR_23);
 }

 if (VAR_24.word & VAR_0)
  FUNC_5(VAR_23);

    return VAR_11;
}
