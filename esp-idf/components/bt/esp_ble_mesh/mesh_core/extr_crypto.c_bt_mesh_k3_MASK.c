
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8_t ;
typedef int id64 ;


 int FUNC_0 (char*,char const*,int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(const u8_t VAR_0[16], u8_t VAR_1[8])
{
    u8_t VAR_2[] = { 'i', 'd', '6', '4', 0x01 };
    u8_t VAR_3[16];
    u8_t VAR_4[16];
    int VAR_5;

    VAR_5 = FUNC_1("smk3", VAR_3);
    if (VAR_5) {
        return VAR_5;
    }

    VAR_5 = FUNC_0(VAR_3, VAR_0, 16, VAR_4);
    if (VAR_5) {
        return VAR_5;
    }

    VAR_5 = FUNC_0(VAR_4, VAR_2, sizeof(VAR_2), VAR_3);
    if (VAR_5) {
        return VAR_5;
    }

    FUNC_2(VAR_1, VAR_3 + 8, 8);

    return 0;
}
