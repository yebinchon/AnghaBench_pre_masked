
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_entry_t ;


 int const** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline const vfs_entry_t *FUNC_0(int VAR_2)
{
    if (VAR_2 < 0 || VAR_2 >= VAR_1) {
        return ((void*)0);
    } else {
        return VAR_0[VAR_2];
    }
}
