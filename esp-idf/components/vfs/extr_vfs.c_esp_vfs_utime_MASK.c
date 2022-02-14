
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct utimbuf {int dummy; } ;
struct _reent {int dummy; } ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int ,char const*,struct utimbuf const*) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int * FUNC_2 (char const*) ;
 char* FUNC_3 (int const*,char const*) ;
 int VAR_1 ;

int FUNC_4(const char *VAR_2, const struct utimbuf *VAR_3)
{
    int VAR_4;
    const vfs_entry_t* VAR_5 = FUNC_2(VAR_2);
    struct _reent* VAR_6 = FUNC_1();
    if (VAR_5 == ((void*)0)) {
        __errno_r(VAR_7) = VAR_0;
        return -1;
    }
    const char* VAR_8 = FUNC_3(VAR_5, VAR_2);
    FUNC_0(VAR_4, VAR_6, VAR_5, VAR_1, VAR_8, VAR_3);
    return VAR_4;
}
