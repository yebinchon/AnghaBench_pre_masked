
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_ota_select_entry_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int const*,int*,int) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(const esp_ota_select_entry_t *VAR_1)
{

    bool VAR_2[2];
    VAR_2[0] = FUNC_2(&VAR_1[0]);
    VAR_2[1] = FUNC_2(&VAR_1[1]);
    int VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
    FUNC_0(VAR_0, "Invalid otadata[%d]", VAR_3);
    return VAR_3;
}
