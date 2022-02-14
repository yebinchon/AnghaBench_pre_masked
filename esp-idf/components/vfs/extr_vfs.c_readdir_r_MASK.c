
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vfs_entry_t ;
struct dirent {int dummy; } ;
struct _reent {int dummy; } ;
struct TYPE_5__ {int dd_vfs_idx; } ;
typedef TYPE_1__ DIR ;


 int FUNC_0 (int,struct _reent*,int const*,int (*) (TYPE_1__*,struct dirent*,struct dirent**),TYPE_1__*,struct dirent*,struct dirent**) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;

int FUNC_3(DIR* VAR_2, struct dirent* VAR_3, struct dirent** VAR_4)
{
    const vfs_entry_t* VAR_5 = FUNC_2(VAR_2->dd_vfs_idx);
    struct _reent* VAR_6 = FUNC_1();
    if (VAR_5 == ((void*)0)) {
        VAR_1 = VAR_0;
        return -1;
    }
    int VAR_7;
    FUNC_0(VAR_7, VAR_6, VAR_5, FUNC_3, VAR_2, VAR_3, VAR_4);
    return VAR_7;
}
