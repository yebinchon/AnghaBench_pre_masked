
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int ,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (char const*) ;
 int VAR_2 ;
 char* FUNC_2 (int const*,char const*) ;

int FUNC_3(struct _reent *VAR_3, const char *VAR_4, const char *VAR_5)
{
    const vfs_entry_t* VAR_6 = FUNC_1(VAR_4);
    if (VAR_6 == ((void*)0)) {
        __errno_r(VAR_7) = VAR_0;
        return -1;
    }
    const vfs_entry_t* VAR_8 = FUNC_1(VAR_5);
    if (VAR_6 != VAR_8) {
        __errno_r(VAR_9) = VAR_1;
        return -1;
    }
    const char* VAR_10 = FUNC_2(VAR_6, VAR_4);
    const char* VAR_11 = FUNC_2(VAR_6, VAR_5);
    int VAR_12;
    FUNC_0(VAR_12, VAR_3, VAR_6, VAR_2, VAR_10, VAR_11);
    return VAR_12;
}
