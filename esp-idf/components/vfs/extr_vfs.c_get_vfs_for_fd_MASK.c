
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_entry_t ;
struct TYPE_2__ {int vfs_index; } ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int const) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const vfs_entry_t *FUNC_2(int VAR_1)
{
    const vfs_entry_t *VAR_2 = ((void*)0);
    if (FUNC_0(VAR_1)) {
        const int VAR_3 = VAR_0[VAR_1].vfs_index;
        VAR_2 = FUNC_1(VAR_3);
    }
    return VAR_2;
}
