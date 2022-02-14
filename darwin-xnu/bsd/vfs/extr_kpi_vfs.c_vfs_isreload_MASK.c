
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(mount_t VAR_2)
{
 return ((VAR_2->mnt_flag & VAR_1) && (VAR_2->mnt_flag & VAR_0));
}
