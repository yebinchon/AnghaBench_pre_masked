
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;
struct _reent {int dummy; } ;
typedef int ssize_t ;
typedef int __errno_r ;


 int FUNC_0 (int,struct _reent*,int const*,int ,int const,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int const*,int) ;
 int * FUNC_2 (int) ;
 int VAR_1 ;

ssize_t FUNC_3(struct _reent *VAR_2, int VAR_3, const void * VAR_4, size_t VAR_5)
{
    const vfs_entry_t* VAR_6 = FUNC_2(VAR_3);
    const int VAR_7 = FUNC_1(VAR_6, VAR_3);
    if (VAR_6 == ((void*)0) || VAR_7 < 0) {
        __errno_r(VAR_8) = VAR_0;
        return -1;
    }
    ssize_t VAR_9;
    FUNC_0(VAR_9, VAR_2, VAR_6, VAR_1, VAR_7, VAR_4, VAR_5);
    return VAR_9;
}
