
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,unsigned int,unsigned int,unsigned int,char,unsigned int) ;

char *FUNC_2(char *VAR_1, uint32_t VAR_2, int VAR_3)
{
    unsigned VAR_4 = FUNC_0(VAR_2 & 0x3f);
    unsigned VAR_5 = FUNC_0(VAR_2>>8 & 0x7f);
    unsigned VAR_6 = FUNC_0(VAR_2>>16 & 0x7f);
    unsigned VAR_7 = FUNC_0(VAR_2>>24 & 0x3f);
    unsigned VAR_8 = VAR_2 & 1<<30 && !VAR_3;
    FUNC_1(VAR_1, VAR_0, "%02u:%02u:%02u%c%02u",
             VAR_4, VAR_5, VAR_6, VAR_8 ? ';' : ':', VAR_7);
    return VAR_1;
}
