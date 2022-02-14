
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_entry_t ;
struct TYPE_2__ {int local_fd; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(const vfs_entry_t *VAR_1, int VAR_2)
{
    int VAR_3 = -1;

    if (VAR_1 && FUNC_0(VAR_2)) {
        VAR_3 = VAR_0[VAR_2].local_fd;
    }

    return VAR_3;
}
