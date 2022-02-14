
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* flinfo; scalar_t__ isnull; } ;
struct TYPE_5__ {int fn_oid; } ;
typedef TYPE_2__* FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(FunctionCallInfo VAR_1)
{
 Datum VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->isnull)
 {
  FUNC_2(VAR_0, "function %u returned NULL", VAR_1->flinfo->fn_oid);
 }

 return FUNC_0(VAR_2);
}
