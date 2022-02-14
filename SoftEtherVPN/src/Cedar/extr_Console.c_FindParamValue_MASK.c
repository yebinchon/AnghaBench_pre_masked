
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int t ;
struct TYPE_6__ {char* Name; } ;
typedef TYPE_1__ PARAM_VALUE ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

PARAM_VALUE *FUNC_2(LIST *VAR_0, char *VAR_1)
{
 PARAM_VALUE VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = "";
 }

 FUNC_1(&VAR_2, sizeof(VAR_2));
 VAR_2.Name = VAR_1;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);

 return VAR_3;
}
