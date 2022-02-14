
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int called; } ;
typedef TYPE_1__ dummy_vfs_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(void* VAR_2, int VAR_3)
{
    dummy_vfs_t* VAR_4 = (dummy_vfs_t*) VAR_2;
    VAR_4->called = 1;
    if (VAR_3 == 1) {
        return 0;
    }
    VAR_1 = VAR_0;
    return -1;
}
