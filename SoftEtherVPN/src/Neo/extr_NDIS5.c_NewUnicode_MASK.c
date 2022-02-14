
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int String; } ;
typedef TYPE_1__ UNICODE ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;

UNICODE *FUNC_2(char *VAR_0)
{
 UNICODE *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_1 = FUNC_0(sizeof(UNICODE));
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_1(&VAR_1->String, VAR_0);

 return VAR_1;
}
