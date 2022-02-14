
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int (*) (int),int const) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int FUNC_2 (int const*,int) ;
 int * FUNC_3 (int) ;

int FUNC_4(int VAR_1)
{
    const vfs_entry_t* VAR_2 = FUNC_3(VAR_1);
    const int VAR_3 = FUNC_2(VAR_2, VAR_1);
    struct _reent* VAR_4 = FUNC_1();
    if (VAR_2 == ((void*)0) || VAR_3 < 0) {
        __errno_r(VAR_5) = VAR_0;
        return -1;
    }
    int VAR_6;
    FUNC_0(VAR_6, VAR_4, VAR_2, FUNC_4, VAR_3);
    return VAR_6;
}
