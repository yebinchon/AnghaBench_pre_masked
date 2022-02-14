
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* tmp_path_buf; char* fat_drive; char* tmp_path_buf2; } ;
typedef TYPE_1__ vfs_fat_ctx_t ;


 int FUNC_0 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static void FUNC_1(vfs_fat_ctx_t * VAR_0, const char ** VAR_1, const char ** VAR_2){
    FUNC_0(VAR_0->tmp_path_buf, sizeof(VAR_0->tmp_path_buf), "%s%s", VAR_0->fat_drive, *VAR_1);
    *VAR_1 = VAR_0->tmp_path_buf;
    if(VAR_2){
        FUNC_0(VAR_0->tmp_path_buf2, sizeof(VAR_0->tmp_path_buf2), "%s%s", ((vfs_fat_ctx_t*)VAR_0)->fat_drive, *VAR_2);
        *VAR_2 = VAR_0->tmp_path_buf2;
    }
}
