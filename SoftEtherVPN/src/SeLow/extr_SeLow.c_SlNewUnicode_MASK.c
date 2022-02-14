
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int String; } ;
typedef TYPE_1__ SL_UNICODE ;


 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int) ;

SL_UNICODE *FUNC_2(char *VAR_0)
{
 SL_UNICODE *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_1 = FUNC_1(sizeof(SL_UNICODE));
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_0(&VAR_1->String, VAR_0);

 return VAR_1;
}
