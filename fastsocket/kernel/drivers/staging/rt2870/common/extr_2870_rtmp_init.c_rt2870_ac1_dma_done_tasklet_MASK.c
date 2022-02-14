
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,size_t,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_8)
{
 PRTMP_ADAPTER VAR_9;
 PHT_TX_CONTEXT VAR_10;
 UCHAR VAR_11 = 1;
 purbb_t VAR_12;


 VAR_12 = (purbb_t)VAR_8;
 VAR_10 = (PHT_TX_CONTEXT)VAR_12->context;
 VAR_9 = VAR_10->pAd;

 FUNC_5((unsigned long)VAR_12);

 if ((FUNC_1(VAR_9, (VAR_6 |
        VAR_4 |
        VAR_5))))
 {

 }
 else
 {
  if (FUNC_1(VAR_9, VAR_3))
  {
   FUNC_2(VAR_9, VAR_0, ((void*)0), 0);
  }
  else
  { VAR_10 = &VAR_9->TxContext[VAR_11];
   if ((VAR_9->TxSwQueue[VAR_11].Number > 0) &&

    (VAR_9->DeQueueRunning[VAR_11] == VAR_1) &&
    (VAR_10->bCurWriting == VAR_1))
   {
    FUNC_0(VAR_9, VAR_1, VAR_11, VAR_2);
   }

   FUNC_4(VAR_9, VAR_7<<1);
   FUNC_3(VAR_9);
  }
 }


 return;
}
