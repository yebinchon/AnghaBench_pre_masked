
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vfs_entry_t ;
struct dirent {int dummy; } ;
struct _reent {int dummy; } ;
typedef int __errno_r ;
struct TYPE_5__ {int dd_vfs_idx; } ;
typedef TYPE_1__ DIR ;


 int FUNC_0 (struct dirent*,struct _reent*,int const*,struct dirent* (*) (TYPE_1__*),TYPE_1__*) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int * FUNC_2 (int ) ;

struct dirent* FUNC_3(DIR* VAR_1)
{
    const vfs_entry_t* VAR_2 = FUNC_2(VAR_1->dd_vfs_idx);
    struct _reent* VAR_3 = FUNC_1();
    if (VAR_2 == ((void*)0)) {
       __errno_r(VAR_4) = VAR_0;
        return ((void*)0);
    }
    struct dirent* VAR_5;
    FUNC_0(VAR_5, VAR_3, VAR_2, FUNC_3, VAR_1);
    return VAR_5;
}
