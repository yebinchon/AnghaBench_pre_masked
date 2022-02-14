
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static esp_err_t FUNC_8(void)
{
    esp_err_t VAR_10 = 0;

    FUNC_7(VAR_8);
    FUNC_6(VAR_7);
    FUNC_5(VAR_6);

    VAR_10 = FUNC_3(&VAR_9, &VAR_5);
    if (VAR_10) {
        FUNC_0(VAR_4, "Initializing mesh failed (err %d)", VAR_10);
        return VAR_10;
    }

    FUNC_4(VAR_0 | VAR_1);

    FUNC_1(VAR_4, "BLE Mesh Node initialized");

    FUNC_2(VAR_2, VAR_3);

    return VAR_10;
}
