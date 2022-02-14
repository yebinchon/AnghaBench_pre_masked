
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Value; } ;
typedef int CAPSLIST ;
typedef TYPE_1__ CAPS ;


 TYPE_1__* FUNC_0 (int *,char*) ;

bool FUNC_1(CAPSLIST *VAR_0, char *VAR_1)
{
 CAPS *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 return VAR_2->Value == 0 ? 0 : 1;
}
