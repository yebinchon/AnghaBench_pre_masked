
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
typedef int caddr_t ;
struct TYPE_3__ {int mnt_iterref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;

void
FUNC_3(mount_t VAR_2)
{
 FUNC_0();
 while (VAR_2->mnt_iterref)
  FUNC_2((caddr_t)&VAR_2->mnt_iterref, VAR_1, VAR_0, "mount_iterdrain", ((void*)0));

 VAR_2->mnt_iterref = -1;
 FUNC_1();
}
