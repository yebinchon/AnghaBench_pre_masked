
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t max_files; TYPE_2__* files; } ;
typedef TYPE_3__ vfs_fat_ctx_t ;
struct TYPE_5__ {int * fs; } ;
struct TYPE_6__ {TYPE_1__ obj; } ;



__attribute__((used)) static int FUNC_0(vfs_fat_ctx_t* VAR_0)
{
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->max_files; ++VAR_1) {
        if (VAR_0->files[VAR_1].obj.fs == ((void*)0)) {
            return (int) VAR_1;
        }
    }
    return -1;
}
