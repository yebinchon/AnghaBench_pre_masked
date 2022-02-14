
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mac ;
typedef int device_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (int ,int **,int) ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(device_desc_t *VAR_3)
{
    FUNC_1(VAR_2, "read efuse fields");

    uint8_t VAR_4[6];
    FUNC_0(FUNC_2(VAR_0, &VAR_4, sizeof(VAR_4) * 8));
    FUNC_1(VAR_2, "1. read MAC address: %02x:%02x:%02x:%02x:%02x:%02x", VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5]);

    size_t VAR_5 = 0;
    FUNC_0(FUNC_3(VAR_1, &VAR_5));
    FUNC_1(VAR_2, "2. read secure_version: %d", VAR_5);

    FUNC_1(VAR_2, "3. read custom fields");
    FUNC_4(VAR_3);
}
