
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t path_prefix_len; size_t offset; void* ctx; int vfs; int path_prefix; } ;
typedef TYPE_1__ vfs_entry_t ;
typedef int esp_vfs_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;
 TYPE_1__** VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static esp_err_t FUNC_5(const char* VAR_8, size_t VAR_9, const esp_vfs_t* VAR_10, void* VAR_11, int *VAR_12)
{
    if (VAR_9 != VAR_4) {
        if ((VAR_9 != 0 && VAR_9 < 2) || (VAR_9 > VAR_3)) {
            return VAR_0;
        }
        if ((VAR_9 > 0 && VAR_8[0] != '/') || VAR_8[VAR_9 - 1] == '/') {
            return VAR_0;
        }
    }
    vfs_entry_t *VAR_13 = (vfs_entry_t*) FUNC_2(sizeof(vfs_entry_t));
    if (VAR_13 == ((void*)0)) {
        return VAR_1;
    }
    size_t VAR_14;
    for (VAR_14 = 0; VAR_14 < VAR_7; ++VAR_14) {
        if (VAR_6[VAR_14] == ((void*)0)) {
            break;
        }
    }
    if (VAR_14 == VAR_7) {
        if (VAR_7 >= VAR_5) {
            FUNC_1(VAR_13);
            return VAR_1;
        }
        ++VAR_7;
    }
    VAR_6[VAR_14] = VAR_13;
    if (VAR_9 != VAR_4) {
        FUNC_4(VAR_13->path_prefix, VAR_8);
    } else {
        FUNC_0(VAR_13->path_prefix, sizeof(VAR_13->path_prefix));
    }
    FUNC_3(&VAR_13->vfs, VAR_10, sizeof(esp_vfs_t));
    VAR_13->path_prefix_len = VAR_9;
    VAR_13->ctx = VAR_11;
    VAR_13->offset = VAR_14;

    if (VAR_12) {
        *VAR_12 = VAR_14;
    }

    return VAR_2;
}
