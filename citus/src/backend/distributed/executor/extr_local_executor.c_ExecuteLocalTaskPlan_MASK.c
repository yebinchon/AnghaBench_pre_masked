
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_21__ {int tuplestorestate; } ;
struct TYPE_20__ {int es_param_list_info; } ;
struct TYPE_19__ {scalar_t__ commandType; } ;
struct TYPE_18__ {TYPE_1__* estate; } ;
struct TYPE_17__ {int es_processed; } ;
typedef int ScanDirection ;
typedef int QueryEnvironment ;
typedef TYPE_2__ QueryDesc ;
typedef TYPE_3__ PlannedStmt ;
typedef int ParamListInfo ;
typedef TYPE_4__ EState ;
typedef int DestReceiver ;
typedef TYPE_5__ CitusScanState ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,char*,int ,int ,int *,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,long,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int VAR_4 ;
 TYPE_4__* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *,int ,int ,int) ;
 int * FUNC_10 () ;

__attribute__((used)) static uint64
FUNC_11(CitusScanState *VAR_5, PlannedStmt *VAR_6, char *VAR_7)
{
 EState *VAR_8 = FUNC_8(VAR_5);
 ParamListInfo VAR_9 = VAR_8->es_param_list_info;
 DestReceiver *VAR_10 = FUNC_0(VAR_2);
 ScanDirection VAR_11 = VAR_3;
 QueryEnvironment *VAR_12 = FUNC_10();
 QueryDesc *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 uint64 VAR_15 = 0;





 FUNC_9(VAR_10,
         VAR_5->tuplestorestate,
         VAR_1, 0);


 VAR_13 = FUNC_1(VAR_6, VAR_7,
        FUNC_7(), VAR_4,
        VAR_10, VAR_9,
        VAR_12, 0);

 FUNC_5(VAR_13, VAR_14);
 FUNC_4(VAR_13, VAR_11, 0L, 1);





 if (VAR_6->commandType != VAR_0)
 {
  VAR_15 = VAR_13->estate->es_processed;
 }

 FUNC_3(VAR_13);
 FUNC_2(VAR_13);

 FUNC_6(VAR_13);

 return VAR_15;
}
