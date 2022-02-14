
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Value; int Name; } ;
typedef TYPE_1__ ADMIN_OPTION ;


 int FUNC_0 (int ,int,char*) ;
 TYPE_1__* FUNC_1 (int) ;

ADMIN_OPTION *FUNC_2(char *VAR_0, UINT VAR_1)
{
 ADMIN_OPTION *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1(sizeof(ADMIN_OPTION));
 FUNC_0(VAR_2->Name, sizeof(VAR_2->Name), VAR_0);
 VAR_2->Value = VAR_1;

 return VAR_2;
}
