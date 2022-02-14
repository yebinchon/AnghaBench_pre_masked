
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long offset; } ;
typedef TYPE_1__ vfs_spiffs_dir_t ;
typedef int DIR ;


 int FUNC_0 (int *) ;

__attribute__((used)) static long FUNC_1(void* VAR_0, DIR* VAR_1)
{
    FUNC_0(VAR_1);
    vfs_spiffs_dir_t * VAR_2 = (vfs_spiffs_dir_t *)VAR_1;
    return VAR_2->offset;
}
