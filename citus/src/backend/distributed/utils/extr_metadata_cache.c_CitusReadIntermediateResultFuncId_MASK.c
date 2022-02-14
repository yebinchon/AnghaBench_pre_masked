
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ readIntermediateResultFuncId; } ;
typedef scalar_t__ Oid ;
typedef int List ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

Oid
FUNC_4(void)
{
 if (VAR_1.readIntermediateResultFuncId == VAR_0)
 {
  List *VAR_3 = FUNC_2(FUNC_3("pg_catalog"),
           FUNC_3("read_intermediate_result"));
  Oid VAR_4 = FUNC_0();
  Oid VAR_5[2] = { VAR_2, VAR_4 };
  bool VAR_6 = 0;

  VAR_1.readIntermediateResultFuncId =
   FUNC_1(VAR_3, 2, VAR_5, VAR_6);
 }

 return VAR_1.readIntermediateResultFuncId;
}
