
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8_t ;
typedef int id6 ;


 char FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int,char*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(const u8_t VAR_0[16], u8_t VAR_1[1])
{
    u8_t VAR_2[] = { 'i', 'd', '6', 0x01 };
    u8_t VAR_3[16];
    u8_t VAR_4[16];
    int VAR_5;

    VAR_5 = FUNC_2("smk4", VAR_3);
    if (VAR_5) {
        return VAR_5;
    }

    VAR_5 = FUNC_1(VAR_3, VAR_0, 16, VAR_4);
    if (VAR_5) {
        return VAR_5;
    }

    VAR_5 = FUNC_1(VAR_4, VAR_2, sizeof(VAR_2), VAR_3);
    if (VAR_5) {
        return VAR_5;
    }

    VAR_1[0] = VAR_3[15] & FUNC_0(6);

    return 0;
}
