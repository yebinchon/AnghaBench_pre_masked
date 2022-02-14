
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * es_param_list_info; } ;
typedef int * ParamListInfo ;
typedef TYPE_1__ EState ;
typedef int CustomScanState ;
typedef int CitusScanState ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(CustomScanState *VAR_2)
{
 CitusScanState *VAR_3 = (CitusScanState *) VAR_2;
 EState *VAR_4 = FUNC_0(VAR_3);
 ParamListInfo VAR_5 = VAR_4->es_param_list_info;

 if (VAR_5 != ((void*)0))
 {
  FUNC_1(VAR_1, (FUNC_2(VAR_0),
      FUNC_3("Cursors for queries on distributed tables with "
          "parameters are currently unsupported")));
 }
}
