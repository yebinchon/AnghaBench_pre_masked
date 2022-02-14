
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_5__ {scalar_t__ mnt_count; int mnt_lflag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*) ;

void
FUNC_3(mount_t VAR_1, int VAR_2)
{
        if ( !VAR_2)
         FUNC_0(VAR_1);

 VAR_1->mnt_count--;

 if (VAR_1->mnt_count == 0 && (VAR_1->mnt_lflag & VAR_0))
         FUNC_2(&VAR_1->mnt_lflag);

        if ( !VAR_2)
         FUNC_1(VAR_1);
}
