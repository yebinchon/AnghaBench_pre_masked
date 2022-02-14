
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* mount_t ;
struct TYPE_5__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(mount_t VAR_2, uint64_t VAR_3)
{
 uint32_t VAR_4 = (uint32_t)(VAR_3 & (VAR_0 | VAR_1));

 FUNC_0(VAR_2);
 VAR_2->mnt_flag |= VAR_4;
 FUNC_1(VAR_2);
}
