
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_efuse_block_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(esp_efuse_block_t VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1 + VAR_2;
    if (VAR_3 > 256) {
        return 0;
    } else {
        FUNC_0(VAR_0, VAR_3);
    }
    return 1;
}
