
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * utime_p; int * rmdir_p; int * mkdir_p; int * telldir_p; int * seekdir_p; int * readdir_r_p; int * readdir_p; int * closedir_p; int * opendir_p; int * rename_p; int * unlink_p; int * link_p; int * stat_p; int * fstat_p; int * close_p; int * open_p; int * read_p; int * lseek_p; int * write_p; int flags; } ;
typedef TYPE_1__ esp_vfs_t ;
struct TYPE_10__ {int base_path; int partition_label; } ;
typedef TYPE_2__ esp_vfs_spiffs_conf_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_11__ {int base_path; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__** VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (TYPE_5__**) ;
 scalar_t__ FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__ const*,TYPE_5__*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

esp_err_t FUNC_6(const esp_vfs_spiffs_conf_t * VAR_24)
{
    FUNC_0(VAR_24->base_path);
    const esp_vfs_t VAR_25 = {
        .flags = VAR_2,
        .write_p = &VAR_23,
        .lseek_p = &VAR_9,
        .read_p = &VAR_13,
        .open_p = &VAR_11,
        .close_p = &VAR_5,
        .fstat_p = &VAR_7,
        .stat_p = &VAR_19,
        .link_p = &VAR_8,
        .unlink_p = &VAR_21,
        .rename_p = &VAR_16,
        .opendir_p = &VAR_12,
        .closedir_p = &VAR_6,
        .readdir_p = &VAR_14,
        .readdir_r_p = &VAR_15,
        .seekdir_p = &VAR_18,
        .telldir_p = &VAR_20,
        .mkdir_p = &VAR_10,
        .rmdir_p = &VAR_17,



        .utime_p = ((void*)0),

    };

    esp_err_t VAR_26 = FUNC_3(VAR_24);
    if (VAR_26 != VAR_1) {
        return VAR_26;
    }

    int VAR_27;
    if (FUNC_1(VAR_24->partition_label, &VAR_27) != VAR_1) {
        return VAR_0;
    }

    FUNC_5(VAR_4[VAR_27]->base_path, VAR_24->base_path, VAR_3 + 1);
    VAR_26 = FUNC_4(VAR_24->base_path, &VAR_25, VAR_4[VAR_27]);
    if (VAR_26 != VAR_1) {
        FUNC_2(&VAR_4[VAR_27]);
        return VAR_26;
    }

    return VAR_1;
}
