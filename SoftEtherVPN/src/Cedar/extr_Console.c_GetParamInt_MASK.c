
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int IntValue; } ;
typedef TYPE_1__ PARAM_VALUE ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (int *,char*) ;

UINT FUNC_1(LIST *VAR_0, char *VAR_1)
{
 PARAM_VALUE *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 else
 {
  return VAR_2->IntValue;
 }
}
