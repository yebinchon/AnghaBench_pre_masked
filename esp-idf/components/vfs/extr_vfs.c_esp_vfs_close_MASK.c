
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int __errno_r ;
struct TYPE_3__ {int permanent; } ;


 int FUNC_0 (int,struct _reent*,int const*,int ,int const) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int const*,int) ;
 int * FUNC_4 (int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

int FUNC_5(struct _reent *VAR_5, int VAR_6)
{
    const vfs_entry_t* VAR_7 = FUNC_4(VAR_6);
    const int VAR_8 = FUNC_3(VAR_7, VAR_6);
    if (VAR_7 == ((void*)0) || VAR_8 < 0) {
        __errno_r(VAR_9) = VAR_0;
        return -1;
    }
    int VAR_10;
    FUNC_0(VAR_10, VAR_5, VAR_7, VAR_2, VAR_8);

    FUNC_1(&VAR_4);
    if (!VAR_3[VAR_6].permanent) {
        VAR_3[VAR_6] = VAR_1;
    }
    FUNC_2(&VAR_4);
    return VAR_10;
}
