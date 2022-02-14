
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_vfs_t ;
typedef scalar_t__ esp_err_t ;
typedef int dummy_vfs_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,char*) ;
 scalar_t__ FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (char const*) ;

void FUNC_5(const char* VAR_2, bool VAR_3, int VAR_4)
{
    dummy_vfs_t VAR_5;
    esp_vfs_t VAR_6 = FUNC_0();
    esp_err_t VAR_7 = FUNC_3(VAR_2, &VAR_6, &VAR_5);
    if (VAR_3) {
        FUNC_2(VAR_1, VAR_7, VAR_4, "esp_vfs_register should succeed");
    } else {
        FUNC_2(VAR_0,
                VAR_7, VAR_4, "esp_vfs_register should fail");
    }
    if (VAR_7 == VAR_1) {
        FUNC_1( FUNC_4(VAR_2) );
    }
}
