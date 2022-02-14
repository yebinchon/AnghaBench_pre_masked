
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_vfs_t ;
typedef int esp_vfs_id_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int const*,void*,int*) ;

esp_err_t FUNC_1(const esp_vfs_t *VAR_2, void *VAR_3, esp_vfs_id_t *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_4 = -1;
    return FUNC_0("", VAR_1, VAR_2, VAR_3, VAR_4);
}
