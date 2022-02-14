
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int ,char const*) ;
 int VAR_0 ;
 int * FUNC_1 (char const*) ;
 char* FUNC_2 (int const*,char const*) ;
 int VAR_1 ;

int FUNC_3(struct _reent *VAR_2, const char *VAR_3)
{
    const vfs_entry_t* VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
        __errno_r(VAR_5) = VAR_0;
        return -1;
    }
    const char* VAR_6 = FUNC_2(VAR_4, VAR_3);
    int VAR_7;
    FUNC_0(VAR_7, VAR_2, VAR_4, VAR_1, VAR_6);
    return VAR_7;
}
