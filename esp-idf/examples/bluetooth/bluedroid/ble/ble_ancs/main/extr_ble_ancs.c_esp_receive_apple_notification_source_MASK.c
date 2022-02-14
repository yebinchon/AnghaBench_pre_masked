
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int,char*,int,int) ;
 char* FUNC_2 (int) ;

void FUNC_3(uint8_t *VAR_1, uint16_t VAR_2)
{
    if (!VAR_1 || VAR_2 < 5) {
        return;
    }

    uint8_t VAR_3 = VAR_1[0];
    char *VAR_4 = FUNC_2(VAR_3);
    uint8_t VAR_5 = VAR_1[1];
    uint8_t VAR_6 = VAR_1[2];
    char *VAR_7 = FUNC_0(VAR_6);
    uint8_t VAR_8 = VAR_1[3];
    uint32_t VAR_9 = (VAR_1[4]) | (VAR_1[5]<< 8) | (VAR_1[6]<< 16) | (VAR_1[7] << 24);
    FUNC_1(VAR_0, "EventID:%s EventFlags:0x%x CategoryID:%s CategoryCount:%d NotificationUID:%d", VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);
}
