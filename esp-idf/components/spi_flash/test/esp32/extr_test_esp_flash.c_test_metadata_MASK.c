
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_flash_t ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(esp_flash_t *VAR_1)
{
    FUNC_0(VAR_0, "Testing chip %p...", VAR_1);
    uint32_t VAR_2, VAR_3;
    FUNC_1(FUNC_3(VAR_1, &VAR_2));
    FUNC_1(FUNC_2(VAR_1, &VAR_3));
    FUNC_4("Flash ID %08x detected size %d bytes\n", VAR_2, VAR_3);
}
