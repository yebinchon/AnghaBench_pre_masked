
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_dirent; } ;
typedef TYPE_1__ vfs_fat_dir_t ;
struct dirent {int dummy; } ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int *,struct dirent**) ;

__attribute__((used)) static struct dirent* FUNC_1(void* VAR_1, DIR* VAR_2)
{
    vfs_fat_dir_t* VAR_3 = (vfs_fat_dir_t*) VAR_2;
    struct dirent* VAR_4;
    int VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_3->cur_dirent, &VAR_4);
    if (VAR_5 != 0) {
        VAR_0 = VAR_5;
        return ((void*)0);
    }
    return VAR_4;
}
