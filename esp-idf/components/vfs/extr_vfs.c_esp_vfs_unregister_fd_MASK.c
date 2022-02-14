
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int permanent; scalar_t__ vfs_index; int local_fd; } ;
typedef TYPE_1__ fd_table_t ;
typedef scalar_t__ esp_vfs_id_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int,...) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

esp_err_t FUNC_4(esp_vfs_id_t VAR_8, int VAR_9)
{
    esp_err_t VAR_10 = VAR_0;

    if (VAR_8 < 0 || VAR_8 >= VAR_7 || VAR_9 < 0 || VAR_9 >= VAR_3) {
        FUNC_0(VAR_4, "Invalid arguments for esp_vfs_unregister_fd(%d, %d)", VAR_8, VAR_9);
        return VAR_10;
    }

    FUNC_1(&VAR_6);
    fd_table_t *VAR_11 = VAR_5 + VAR_9;
    if (VAR_11->permanent == 1 && VAR_11->vfs_index == VAR_8 && VAR_11->local_fd == VAR_9) {
        *VAR_11 = VAR_2;
        VAR_10 = VAR_1;
    }
    FUNC_2(&VAR_6);

    FUNC_0(VAR_4, "esp_vfs_unregister_fd(%d, %d) finished with %s", VAR_8, VAR_9, FUNC_3(VAR_10));

    return VAR_10;
}
