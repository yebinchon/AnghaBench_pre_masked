
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int out_buf ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*,int,int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(int VAR_2, const char* VAR_3, int VAR_4, uint32_t* VAR_5)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3 || !VAR_5)
        return -1;

    const int VAR_6 = 3;

    int VAR_7 = sizeof(uint32_t) * VAR_6 + FUNC_5(VAR_3) + 1;

    uint32_t *VAR_8 = (uint32_t*)FUNC_2(0x20, VAR_7);
    if(!VAR_8)
        return -2;

    VAR_8[0] = VAR_2;
    VAR_8[1] = sizeof(uint32_t) * VAR_6;
    VAR_8[2] = VAR_4;
    FUNC_4(((char*)VAR_8) + VAR_8[1], VAR_3);

    uint32_t VAR_9[1 + 0x64 / 4];

    int VAR_10 = FUNC_0(VAR_1, VAR_0, VAR_8, VAR_7, VAR_9, sizeof(VAR_9));
    if(VAR_10 < 0)
    {
        FUNC_1(VAR_8);
        return VAR_10;
    }

    FUNC_3(VAR_5, VAR_9 + 1, 0x64);
    FUNC_1(VAR_8);
    return VAR_9[0];
}
