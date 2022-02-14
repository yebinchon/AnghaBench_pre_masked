
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int uint32_t ;
typedef int spiffs_fd ;
typedef int spiffs_cache_page ;
typedef int spiffs_cache ;
typedef int spiffs ;
typedef scalar_t__ s32_t ;
struct TYPE_19__ {int max_files; scalar_t__ format_if_mount_failed; int * partition_label; } ;
typedef TYPE_1__ esp_vfs_spiffs_conf_t ;
struct TYPE_18__ {int log_page_size; int phys_size; int phys_erase_block; scalar_t__ phys_addr; int log_block_size; int hal_write_f; int hal_read_f; int hal_erase_f; } ;
struct TYPE_20__ {int fds_sz; int cache_sz; struct TYPE_20__* fs; struct TYPE_20__* cache; struct TYPE_20__* fds; struct TYPE_20__* work; TYPE_11__ cfg; TYPE_3__ const* partition; void* user_data; int * lock; int by_label; } ;
typedef TYPE_2__ esp_spiffs_t ;
struct TYPE_21__ {int size; scalar_t__ encrypted; } ;
typedef TYPE_3__ esp_partition_t ;
typedef int esp_partition_subtype_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_22__ {int page_size; int sector_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_11__*,TYPE_2__*,TYPE_2__*,int,TYPE_2__*,int,int ) ;
 int VAR_11 ;
 TYPE_2__** VAR_12 ;
 TYPE_3__* FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 int FUNC_8 (TYPE_2__**) ;
 scalar_t__ FUNC_9 (int*) ;
 TYPE_5__ VAR_13 ;
 void* FUNC_10 (int const) ;
 int FUNC_11 (TYPE_2__*,int ,int const) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * FUNC_12 () ;

__attribute__((used)) static esp_err_t FUNC_13(const esp_vfs_spiffs_conf_t* VAR_18)
{
    int VAR_19;

    if (FUNC_7(VAR_18->partition_label, &VAR_19) == VAR_6) {
        return VAR_2;
    }

    if (FUNC_9(&VAR_19) != VAR_6) {
        FUNC_0(VAR_11, "max mounted partitions reached");
        return VAR_2;
    }

    uint32_t VAR_20 = VAR_13.page_size;
    uint32_t VAR_21 = VAR_0;
    if (VAR_21 % VAR_20 != 0) {
        FUNC_0(VAR_11, "SPIFFS_PAGE_SIZE is not multiple of flash chip page size (%d)",
                VAR_20);
        return VAR_1;
    }

    esp_partition_subtype_t VAR_22 = VAR_18->partition_label ?
            VAR_7 : VAR_8;
    const esp_partition_t* VAR_23 = FUNC_6(VAR_9,
                                      VAR_22, VAR_18->partition_label);
    if (!VAR_23) {
        FUNC_0(VAR_11, "spiffs partition could not be found");
        return VAR_3;
    }

    if (VAR_23->encrypted) {
        FUNC_0(VAR_11, "spiffs can not run on encrypted partition");
        return VAR_2;
    }

    esp_spiffs_t * VAR_24 = FUNC_10(sizeof(esp_spiffs_t));
    if (VAR_24 == ((void*)0)) {
        FUNC_0(VAR_11, "esp_spiffs could not be malloced");
        return VAR_4;
    }
    FUNC_11(VAR_24, 0, sizeof(esp_spiffs_t));

    VAR_24->cfg.hal_erase_f = VAR_15;
    VAR_24->cfg.hal_read_f = VAR_16;
    VAR_24->cfg.hal_write_f = VAR_17;
    VAR_24->cfg.log_block_size = VAR_13.sector_size;
    VAR_24->cfg.log_page_size = VAR_21;
    VAR_24->cfg.phys_addr = 0;
    VAR_24->cfg.phys_erase_block = VAR_13.sector_size;
    VAR_24->cfg.phys_size = VAR_23->size;

    VAR_24->by_label = VAR_18->partition_label != ((void*)0);

    VAR_24->lock = FUNC_12();
    if (VAR_24->lock == ((void*)0)) {
        FUNC_0(VAR_11, "mutex lock could not be created");
        FUNC_8(&VAR_24);
        return VAR_4;
    }

    VAR_24->fds_sz = VAR_18->max_files * sizeof(spiffs_fd);
    VAR_24->fds = FUNC_10(VAR_24->fds_sz);
    if (VAR_24->fds == ((void*)0)) {
        FUNC_0(VAR_11, "fd buffer could not be malloced");
        FUNC_8(&VAR_24);
        return VAR_4;
    }
    FUNC_11(VAR_24->fds, 0, VAR_24->fds_sz);
    const uint32_t VAR_25 = VAR_24->cfg.log_page_size * 2;
    VAR_24->work = FUNC_10(VAR_25);
    if (VAR_24->work == ((void*)0)) {
        FUNC_0(VAR_11, "work buffer could not be malloced");
        FUNC_8(&VAR_24);
        return VAR_4;
    }
    FUNC_11(VAR_24->work, 0, VAR_25);

    VAR_24->fs = FUNC_10(sizeof(spiffs));
    if (VAR_24->fs == ((void*)0)) {
        FUNC_0(VAR_11, "spiffs could not be malloced");
        FUNC_8(&VAR_24);
        return VAR_4;
    }
    FUNC_11(VAR_24->fs, 0, sizeof(spiffs));

    VAR_24->fs->user_data = (void *)VAR_24;
    VAR_24->partition = VAR_23;

    s32_t VAR_26 = FUNC_5(VAR_24->fs, &VAR_24->cfg, VAR_24->work, VAR_24->fds, VAR_24->fds_sz,
                            VAR_24->cache, VAR_24->cache_sz, VAR_14);

    if (VAR_18->format_if_mount_failed && VAR_26 != VAR_10) {
        FUNC_1(VAR_11, "mount failed, %i. formatting...", FUNC_3(VAR_24->fs));
        FUNC_2(VAR_24->fs);
        VAR_26 = FUNC_4(VAR_24->fs);
        if (VAR_26 != VAR_10) {
            FUNC_0(VAR_11, "format failed, %i", FUNC_3(VAR_24->fs));
            FUNC_2(VAR_24->fs);
            FUNC_8(&VAR_24);
            return VAR_5;
        }
        VAR_26 = FUNC_5(VAR_24->fs, &VAR_24->cfg, VAR_24->work, VAR_24->fds, VAR_24->fds_sz,
                            VAR_24->cache, VAR_24->cache_sz, VAR_14);
    }
    if (VAR_26 != VAR_10) {
        FUNC_0(VAR_11, "mount failed, %i", FUNC_3(VAR_24->fs));
        FUNC_2(VAR_24->fs);
        FUNC_8(&VAR_24);
        return VAR_5;
    }
    VAR_12[VAR_19] = VAR_24;
    return VAR_6;
}
