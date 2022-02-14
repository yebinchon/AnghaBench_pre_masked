
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
struct TYPE_5__ {int dd_vfs_idx; } ;
typedef TYPE_1__ DIR ;


 int FUNC_0 (int,struct _reent*,int const*,int (*) (TYPE_1__*),TYPE_1__*) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;

int FUNC_3(DIR* VAR_2)
{
    const vfs_entry_t* VAR_3 = FUNC_2(VAR_2->dd_vfs_idx);
    struct _reent* VAR_4 = FUNC_1();
    if (VAR_3 == ((void*)0)) {
        VAR_1 = VAR_0;
        return -1;
    }
    int VAR_5;
    FUNC_0(VAR_5, VAR_4, VAR_3, FUNC_3, VAR_2);
    return VAR_5;
}
