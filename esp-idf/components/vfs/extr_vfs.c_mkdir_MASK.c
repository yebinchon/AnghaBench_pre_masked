
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int mode_t ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int (*) (char const*,int ),char const*,int ) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int * FUNC_2 (char const*) ;
 char* FUNC_3 (int const*,char const*) ;

int FUNC_4(const char* VAR_1, mode_t VAR_2)
{
    const vfs_entry_t* VAR_3 = FUNC_2(VAR_1);
    struct _reent* VAR_4 = FUNC_1();
    if (VAR_3 == ((void*)0)) {
        __errno_r(VAR_5) = VAR_0;
        return -1;
    }
    const char* VAR_6 = FUNC_3(VAR_3, VAR_1);
    int VAR_7;
    FUNC_0(VAR_7, VAR_4, VAR_3, FUNC_4, VAR_6, VAR_2);
    return VAR_7;
}
