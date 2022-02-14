
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; scalar_t__ offset; int d; } ;
typedef TYPE_1__ vfs_spiffs_dir_t ;
struct TYPE_6__ {int fs; } ;
typedef TYPE_2__ esp_spiffs_t ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (int,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char const*,int ) ;

__attribute__((used)) static DIR* FUNC_8(void* VAR_3, const char* VAR_4)
{
    FUNC_3(VAR_4);
    esp_spiffs_t * VAR_5 = (esp_spiffs_t *)VAR_3;
    vfs_spiffs_dir_t * VAR_6 = FUNC_4(1, sizeof(vfs_spiffs_dir_t));
    if (!VAR_6) {
        VAR_2 = VAR_0;
        return ((void*)0);
    }
    if (!FUNC_2(VAR_5->fs, VAR_4, &VAR_6->d)) {
        FUNC_5(VAR_6);
        VAR_2 = FUNC_6(FUNC_1(VAR_5->fs));
        FUNC_0(VAR_5->fs);
        return ((void*)0);
    }
    VAR_6->offset = 0;
    FUNC_7(VAR_6->path, VAR_4, VAR_1);
    return (DIR*) VAR_6;
}
