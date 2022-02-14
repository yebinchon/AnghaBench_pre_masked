
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Name; } ;
typedef TYPE_1__ PARAM_VALUE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(void *VAR_0, void *VAR_1)
{
 PARAM_VALUE *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(PARAM_VALUE **)VAR_0;
 VAR_3 = *(PARAM_VALUE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_2->Name) && FUNC_0(VAR_3->Name))
 {
  return 0;
 }
 return FUNC_1(VAR_2->Name, VAR_3->Name);
}
