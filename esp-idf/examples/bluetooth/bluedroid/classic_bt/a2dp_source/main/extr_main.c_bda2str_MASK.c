
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int* esp_bd_addr_t ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static char *FUNC_1(esp_bd_addr_t VAR_0, char *VAR_1, size_t VAR_2)
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 < 18) {
        return ((void*)0);
    }

    uint8_t *VAR_3 = VAR_0;
    FUNC_0(VAR_1, "%02x:%02x:%02x:%02x:%02x:%02x",
            VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5]);
    return VAR_1;
}
