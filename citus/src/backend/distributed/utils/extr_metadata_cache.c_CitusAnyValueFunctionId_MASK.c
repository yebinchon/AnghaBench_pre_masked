
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ anyValueFunctionId; } ;
typedef scalar_t__ Oid ;


 scalar_t__ FUNC_0 (char*,char*,int const) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

Oid
FUNC_1(void)
{
 if (VAR_1.anyValueFunctionId == VAR_0)
 {
  const int VAR_2 = 1;
  VAR_1.anyValueFunctionId =
   FUNC_0("pg_catalog", "any_value", VAR_2);
 }

 return VAR_1.anyValueFunctionId;
}
