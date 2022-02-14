
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_11__ {scalar_t__ mydest; int (* rShutdown ) (TYPE_3__*) ;int (* rStartup ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_10__ {int es_lastoid; scalar_t__ es_processed; } ;
struct TYPE_9__ {int tupDesc; TYPE_3__* dest; TYPE_2__* estate; } ;
typedef int ScanDirection ;
typedef TYPE_1__ QueryDesc ;
typedef TYPE_2__ EState ;
typedef TYPE_3__ DestReceiver ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;

void
FUNC_4(QueryDesc *VAR_4,
     ScanDirection VAR_5, uint64 VAR_6, bool VAR_7)
{
 DestReceiver *VAR_8 = VAR_4->dest;
 int VAR_9 = VAR_2;

 if (VAR_8->mydest == VAR_1)
 {





  VAR_2++;
 }
 if (FUNC_0(VAR_4))
 {
  EState *VAR_10 = VAR_4->estate;

  VAR_10->es_processed = 0;

  VAR_10->es_lastoid = VAR_3;



  VAR_8->rStartup(VAR_4->dest, VAR_0, VAR_4->tupDesc);
  VAR_8->rShutdown(VAR_8);
 }
 else
 {
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 }

 if (VAR_8->mydest == VAR_1)
 {





  VAR_2 = VAR_9;
 }
}
