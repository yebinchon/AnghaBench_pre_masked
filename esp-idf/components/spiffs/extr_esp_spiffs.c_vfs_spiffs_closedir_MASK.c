
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d; } ;
typedef TYPE_1__ vfs_spiffs_dir_t ;
struct TYPE_5__ {int fs; } ;
typedef TYPE_2__ esp_spiffs_t ;
typedef int DIR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void* VAR_1, DIR* VAR_2)
{
    FUNC_3(VAR_2);
    esp_spiffs_t * VAR_3 = (esp_spiffs_t *)VAR_1;
    vfs_spiffs_dir_t * VAR_4 = (vfs_spiffs_dir_t *)VAR_2;
    int VAR_5 = FUNC_1(&VAR_4->d);
    FUNC_4(VAR_4);
    if (VAR_5 < 0) {
        VAR_0 = FUNC_5(FUNC_2(VAR_3->fs));
        FUNC_0(VAR_3->fs);
        return -1;
    }
    return VAR_5;
}
