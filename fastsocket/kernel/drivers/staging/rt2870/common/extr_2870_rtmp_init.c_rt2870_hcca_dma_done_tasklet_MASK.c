
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* purbb_t ;
typedef size_t UCHAR ;
struct TYPE_13__ {scalar_t__ bCurWriting; TYPE_3__* pAd; } ;
struct TYPE_12__ {scalar_t__* DeQueueRunning; TYPE_1__* TxSwQueue; TYPE_4__* TxContext; } ;
struct TYPE_11__ {scalar_t__ context; } ;
struct TYPE_10__ {scalar_t__ Number; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;
typedef TYPE_4__* PHT_TX_CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,size_t,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_9)
{
 PRTMP_ADAPTER VAR_10;
 PHT_TX_CONTEXT VAR_11;
 UCHAR VAR_12 = 4;
 purbb_t VAR_13;

 FUNC_0(VAR_3, ("--->hcca_dma_done_tasklet\n"));

 VAR_13 = (purbb_t)VAR_9;
 VAR_11 = (PHT_TX_CONTEXT)VAR_13->context;
 VAR_10 = VAR_11->pAd;

 FUNC_6((unsigned long)VAR_13);

 if ((FUNC_2(VAR_10, (VAR_7 |
        VAR_5 |
        VAR_6))))
 {

 }
 else
 {
  if (FUNC_2(VAR_10, VAR_4))
  {
   FUNC_3(VAR_10, VAR_0, ((void*)0), 0);
  }
  else
  { VAR_11 = &VAR_10->TxContext[VAR_12];
   if ((VAR_10->TxSwQueue[VAR_12].Number > 0) &&

    (VAR_10->DeQueueRunning[VAR_12] == VAR_1) &&
    (VAR_11->bCurWriting == VAR_1))
   {
    FUNC_1(VAR_10, VAR_1, VAR_12, VAR_2);
   }

   FUNC_5(VAR_10, VAR_8<<4);
   FUNC_4(VAR_10);
  }
 }

 FUNC_0(VAR_3, ("<---hcca_dma_done_tasklet\n"));
}
