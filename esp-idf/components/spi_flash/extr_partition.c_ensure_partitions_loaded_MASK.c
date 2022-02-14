
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_6(void)
{
    esp_err_t VAR_4 = VAR_0;
    if (FUNC_2(&VAR_2)) {

        FUNC_3(&VAR_3);
        if (FUNC_2(&VAR_2)) {
            FUNC_0(VAR_1, "Loading the partition table");
            VAR_4 = FUNC_5();
            if (VAR_4 != VAR_0) {
                FUNC_1(VAR_1, "load_partitions returned 0x%x", VAR_4);
            }
        }
        FUNC_4(&VAR_3);
    }
    return VAR_4;
}
