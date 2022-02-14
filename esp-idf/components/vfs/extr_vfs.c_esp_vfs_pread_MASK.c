
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int ssize_t ;
typedef int off_t ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int ,int const,void*,size_t,int ) ;
 int VAR_0 ;
 struct _reent* FUNC_1 () ;
 int FUNC_2 (int const*,int) ;
 int * FUNC_3 (int) ;
 int VAR_1 ;

ssize_t FUNC_4(int VAR_2, void *VAR_3, size_t VAR_4, off_t VAR_5)
{
    struct _reent *VAR_6 = FUNC_1();
    const vfs_entry_t* VAR_7 = FUNC_3(VAR_2);
    const int VAR_8 = FUNC_2(VAR_7, VAR_2);
    if (VAR_7 == ((void*)0) || VAR_8 < 0) {
        __errno_r(VAR_9) = VAR_0;
        return -1;
    }
    ssize_t VAR_10;
    FUNC_0(VAR_10, VAR_6, VAR_7, VAR_1, VAR_8, VAR_3, VAR_4, VAR_5);
    return VAR_10;
}
