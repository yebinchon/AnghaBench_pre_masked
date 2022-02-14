
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct stat {int dummy; } ;
struct _reent {int dummy; } ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int ,int const,struct stat*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,int) ;
 int * FUNC_2 (int) ;

int FUNC_3(struct _reent *VAR_2, int VAR_3, struct stat * VAR_4)
{
    const vfs_entry_t* VAR_5 = FUNC_2(VAR_3);
    const int VAR_6 = FUNC_1(VAR_5, VAR_3);
    if (VAR_5 == ((void*)0) || VAR_6 < 0) {
        __errno_r(VAR_7) = VAR_0;
        return -1;
    }
    int VAR_8;
    FUNC_0(VAR_8, VAR_2, VAR_5, VAR_1, VAR_6, VAR_4);
    return VAR_8;
}
