
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ s32_t ;
struct TYPE_5__ {int format_if_mount_failed; char const* partition_label; int max_files; } ;
typedef TYPE_1__ esp_vfs_spiffs_conf_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {int fs; int cache_sz; int cache; int fds_sz; int fds; int work; int cfg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 TYPE_3__** VAR_4 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*,int*) ;
 int FUNC_9 (TYPE_3__**) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int VAR_5 ;

esp_err_t FUNC_11(const char* VAR_6)
{
    bool VAR_7 = 0;
    int VAR_8;




    esp_err_t VAR_9 = FUNC_8(VAR_6, &VAR_8);
    if (VAR_9 != VAR_1) {
        esp_vfs_spiffs_conf_t VAR_10 = {
                .format_if_mount_failed = 1,
                .partition_label = VAR_6,
                .max_files = 1
        };
        VAR_9 = FUNC_10(&VAR_10);
        if (VAR_9 != VAR_1) {
            return VAR_9;
        }
        VAR_9 = FUNC_8(VAR_6, &VAR_8);
        FUNC_7(VAR_9 == VAR_1 && "failed to get index of the partition just mounted");
    } else if (FUNC_5(VAR_4[VAR_8]->fs)) {
        VAR_7 = 1;
    }

    FUNC_6(VAR_4[VAR_8]->fs);

    s32_t VAR_11 = FUNC_3(VAR_4[VAR_8]->fs);
    if (VAR_11 != VAR_2) {
        FUNC_0(VAR_3, "format failed, %i", FUNC_2(VAR_4[VAR_8]->fs));
        FUNC_1(VAR_4[VAR_8]->fs);




        if (!VAR_7) {
            FUNC_9(&VAR_4[VAR_8]);
        }
        return VAR_0;
    }

    if (VAR_7) {
        VAR_11 = FUNC_4(VAR_4[VAR_8]->fs, &VAR_4[VAR_8]->cfg, VAR_4[VAR_8]->work,
                            VAR_4[VAR_8]->fds, VAR_4[VAR_8]->fds_sz, VAR_4[VAR_8]->cache,
                            VAR_4[VAR_8]->cache_sz, VAR_5);
        if (VAR_11 != VAR_2) {
            FUNC_0(VAR_3, "mount failed, %i", FUNC_2(VAR_4[VAR_8]->fs));
            FUNC_1(VAR_4[VAR_8]->fs);
            return VAR_0;
        }
    } else {
        FUNC_9(&VAR_4[VAR_8]);
    }
    return VAR_1;
}
