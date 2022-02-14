
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NumFiles; } ;
typedef TYPE_1__ DIRLIST ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;

bool FUNC_2()
{
 bool VAR_0 = 0;
 DIRLIST *VAR_1 = FUNC_0("/etc/sysconfig/networking/devices/");

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->NumFiles >= 1)
 {
  VAR_0 = 1;
 }

 FUNC_1(VAR_1);

 return VAR_0;
}
