
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nvs_handle_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,char const*,int*) ;
 int FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(void)
{
    const char* VAR_5 = "plusecnt";
    const char* VAR_6 = "count";

    FUNC_0( FUNC_4() );
    nvs_handle_t VAR_7;
    FUNC_0( FUNC_6(VAR_5, VAR_2, &VAR_7));
    uint32_t VAR_8 = 0;
    esp_err_t VAR_9 = FUNC_5(VAR_7, VAR_6, &VAR_8);
    FUNC_1(VAR_9 == VAR_1 || VAR_9 == VAR_0);
    FUNC_8("Read pulse count from NVS: %5d\n", VAR_8);


    uint32_t VAR_10 = (VAR_4 & VAR_3) / 2;

    VAR_4 = VAR_4 % 2;
    FUNC_8("Pulse count from ULP: %5d\n", VAR_10);


    VAR_8 += VAR_10;
    FUNC_0(FUNC_7(VAR_7, VAR_6, VAR_8));
    FUNC_0(FUNC_3(VAR_7));
    FUNC_2(VAR_7);
    FUNC_8("Wrote updated pulse count to NVS: %5d\n", VAR_8);
}
