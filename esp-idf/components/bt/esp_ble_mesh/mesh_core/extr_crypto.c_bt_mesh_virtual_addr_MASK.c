
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;


 int FUNC_0 (int *,int const*,int,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(const u8_t VAR_0[16], u16_t *VAR_1)
{
    u8_t VAR_2[16];
    u8_t VAR_3[16];
    int VAR_4;

    VAR_4 = FUNC_1("vtad", VAR_2);
    if (VAR_4) {
        return VAR_4;
    }

    VAR_4 = FUNC_0(VAR_2, VAR_0, 16, VAR_3);
    if (VAR_4) {
        return VAR_4;
    }

    *VAR_1 = (FUNC_2(&VAR_3[14]) & 0x3fff) | 0x8000;

    return 0;
}
