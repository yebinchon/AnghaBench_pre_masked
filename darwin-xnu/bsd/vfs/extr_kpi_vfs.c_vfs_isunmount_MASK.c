
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_lflag; } ;


 int VAR_0 ;

int
FUNC_0(mount_t VAR_1)
{
 if ((VAR_1->mnt_lflag & VAR_0)) {
  return 1;
 } else {
  return 0;
 }
}
