
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_vfs_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_3__ {int vfs_index; int permanent; int local_fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int ,int const*,void*,int*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int ** VAR_8 ;

esp_err_t FUNC_5(const esp_vfs_t *VAR_9, void *VAR_10, int VAR_11, int VAR_12)
{
    if (VAR_11 < 0 || VAR_12 < 0 || VAR_11 > VAR_4 || VAR_12 > VAR_4 || VAR_11 > VAR_12) {
        FUNC_0(VAR_5, "Invalid arguments: esp_vfs_register_fd_range(0x%x, 0x%x, %d, %d)", (int) VAR_9, (int) VAR_10, VAR_11, VAR_12);
        return VAR_0;
    }

    int VAR_13 = -1;
    esp_err_t VAR_14 = FUNC_3("", VAR_3, VAR_9, VAR_10, &VAR_13);

    if (VAR_14 == VAR_1) {
        FUNC_1(&VAR_7);
        for (int VAR_15 = VAR_11; VAR_15 < VAR_12; ++VAR_15) {
            if (VAR_6[VAR_15].vfs_index != -1) {
                FUNC_4(VAR_8[VAR_15]);
                VAR_8[VAR_15] = ((void*)0);
                for (int VAR_16 = VAR_11; VAR_16 < VAR_15; ++VAR_16) {
                    if (VAR_6[VAR_16].vfs_index == VAR_13) {
                        VAR_6[VAR_16] = VAR_2;
                    }
                }
                FUNC_2(&VAR_7);
                FUNC_0(VAR_5, "esp_vfs_register_fd_range cannot set fd %d (used by other VFS)", VAR_15);
                return VAR_0;
            }
            VAR_6[VAR_15].permanent = 1;
            VAR_6[VAR_15].vfs_index = VAR_13;
            VAR_6[VAR_15].local_fd = VAR_15;
        }
        FUNC_2(&VAR_7);
    }

    FUNC_0(VAR_5, "esp_vfs_register_fd_range is successful for range <%d; %d) and VFS ID %d", VAR_11, VAR_12, VAR_13);

    return VAR_14;
}
