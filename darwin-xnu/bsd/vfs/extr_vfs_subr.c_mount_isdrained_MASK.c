
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {scalar_t__ mnt_iterref; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(mount_t VAR_0, int VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  FUNC_0();
 if (VAR_0->mnt_iterref < 0)
  VAR_2 = 1;
 else
  VAR_2 = 0;
 if (!VAR_1)
  FUNC_1();
 return(VAR_2);
}
