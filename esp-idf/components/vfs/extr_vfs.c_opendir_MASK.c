
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int offset; } ;
typedef TYPE_1__ vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int __errno_r ;
struct TYPE_10__ {int dd_vfs_idx; } ;
typedef TYPE_2__ DIR ;


 int FUNC_0 (TYPE_2__*,struct _reent*,TYPE_1__ const*,TYPE_2__* (*) (char const*),char const*) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 TYPE_1__* FUNC_2 (char const*) ;
 char* FUNC_3 (TYPE_1__ const*,char const*) ;

DIR* FUNC_4(const char* VAR_1)
{
    const vfs_entry_t* VAR_2 = FUNC_2(VAR_1);
    struct _reent* VAR_3 = FUNC_1();
    if (VAR_2 == ((void*)0)) {
        __errno_r(VAR_4) = VAR_0;
        return ((void*)0);
    }
    const char* VAR_5 = FUNC_3(VAR_2, VAR_1);
    DIR* VAR_6;
    FUNC_0(VAR_6, VAR_3, VAR_2, FUNC_4, VAR_5);
    if (VAR_6 != ((void*)0)) {
        VAR_6->dd_vfs_idx = VAR_2->offset;
    }
    return VAR_6;
}
