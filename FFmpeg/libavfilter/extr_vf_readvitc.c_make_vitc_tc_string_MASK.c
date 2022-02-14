
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,char*,unsigned int,unsigned int,unsigned int,char,unsigned int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_1, uint8_t *VAR_2)
{
    unsigned VAR_3 = FUNC_0(VAR_2[7] & 0x03, VAR_2[6] & 0x0f);
    unsigned VAR_4 = FUNC_0(VAR_2[5] & 0x07, VAR_2[4] & 0x0f);
    unsigned VAR_5 = FUNC_0(VAR_2[3] & 0x07, VAR_2[2] & 0x0f);
    unsigned VAR_6 = FUNC_0(VAR_2[1] & 0x03, VAR_2[0] & 0x0f);
    unsigned VAR_7 = (VAR_2[1] & 0x04);
    FUNC_1(VAR_1, VAR_0, "%02u:%02u:%02u%c%02u",
             VAR_3, VAR_4, VAR_5, VAR_7 ? ';' : ':', VAR_6);
    return VAR_1;
}
