
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int* uint32_t ;
typedef int mac ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int*,int ,int) ;

__attribute__((used)) static void FUNC_13(void)
{
    FUNC_10();
    FUNC_9();

    uint8_t VAR_4[6];

    FUNC_0(VAR_3, "1. Read MAC address");
    FUNC_12(VAR_4, 0, sizeof(VAR_4));
    FUNC_5(FUNC_8(VAR_0, &VAR_4, sizeof(VAR_4) * 8));
    FUNC_2(sizeof(VAR_4) * 8, FUNC_7(VAR_0));
    FUNC_0(VAR_3, "MAC: %02x:%02x:%02x:%02x:%02x:%02x", VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5]);
    FUNC_0(VAR_3, "3. Test check args");
    uint32_t VAR_5;
    FUNC_4(VAR_2, FUNC_8(VAR_0, ((void*)0), 1));
    FUNC_4(VAR_2, FUNC_8(VAR_0, &VAR_5, 0));

    uint8_t VAR_6;
    FUNC_5(FUNC_8(VAR_0, &VAR_6, 4));
    FUNC_1(VAR_4[0]&0x0F, VAR_6);

    uint8_t VAR_7[7] = {0x59};
    FUNC_5(FUNC_8(VAR_0, &VAR_7, sizeof(VAR_7) * 8));
    FUNC_3(FUNC_11(VAR_4, VAR_7, sizeof(VAR_4)) == 0, "Operation read blob is not success");
    FUNC_1(0, VAR_7[6]);
}
