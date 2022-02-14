
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ spi_host_device_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(spi_host_device_t VAR_3)
{
    bool VAR_4 = FUNC_3(VAR_0, "ut-hspi");
    if (VAR_4) FUNC_0(VAR_1, "HSPI claimed.");

    bool VAR_5 = FUNC_3(VAR_2, "ut-vspi");
    if (VAR_5) FUNC_0(VAR_1, "VSPI claimed.");

    if (VAR_3 == VAR_0) {
        FUNC_2(VAR_4);
        FUNC_1(VAR_5);
    } else if (VAR_3 == VAR_2) {
        FUNC_2(VAR_5);
        FUNC_1(VAR_4);
    } else {
        FUNC_1(VAR_4);
        FUNC_1(VAR_5);
    }




}
