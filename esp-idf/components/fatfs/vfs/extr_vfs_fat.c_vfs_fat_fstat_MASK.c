
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * files; } ;
typedef TYPE_1__ vfs_fat_ctx_t ;
struct stat {int st_mode; scalar_t__ st_ctime; scalar_t__ st_atime; scalar_t__ st_mtime; int st_size; } ;
typedef int FIL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void* VAR_4, int VAR_5, struct stat * VAR_6)
{
    vfs_fat_ctx_t* VAR_7 = (vfs_fat_ctx_t*) VAR_4;
    FIL* VAR_8 = &VAR_7->files[VAR_5];
    VAR_6->st_size = FUNC_0(VAR_8);
    VAR_6->st_mode = VAR_3 | VAR_1 | VAR_2 | VAR_0;
    VAR_6->st_mtime = 0;
    VAR_6->st_atime = 0;
    VAR_6->st_ctime = 0;
    return 0;
}
