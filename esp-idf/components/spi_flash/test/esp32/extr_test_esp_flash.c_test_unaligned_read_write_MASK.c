
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int esp_flash_t ;
typedef int buf ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,scalar_t__,int) ;
 int FUNC_6 (int *,char const*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char const*) ;

void FUNC_10(esp_flash_t *VAR_2)
{
    FUNC_0(VAR_1, "Testing chip %p...", VAR_2);
    uint32_t VAR_3 = FUNC_4(VAR_2, 2);

    const char *VAR_4 = "i am a message";
    FUNC_1(FUNC_9(VAR_4) + 1 % 4 != 0);
    FUNC_2(VAR_0, FUNC_6(VAR_2, VAR_4, VAR_3 + 1, FUNC_9(VAR_4) + 1) );

    char VAR_5[FUNC_9(VAR_4) + 1];

    FUNC_8(VAR_5, 0xEE, sizeof(VAR_5));

    FUNC_2(VAR_0, FUNC_5(VAR_2, VAR_5, VAR_3 + 1, FUNC_9(VAR_4) + 1) );
    FUNC_3(VAR_4, VAR_5, FUNC_9(VAR_4));
    FUNC_1(FUNC_7(VAR_5, VAR_4, FUNC_9(VAR_4) + 1) == 0);
}
