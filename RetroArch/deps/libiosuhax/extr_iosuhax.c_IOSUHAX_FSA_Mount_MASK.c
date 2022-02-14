
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mountRes ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*,int,int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;

int FUNC_7(int VAR_2, const char* VAR_3, const char* VAR_4, uint32_t VAR_5, const char* VAR_6, int VAR_7)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3 || !VAR_4 || !VAR_6)
        return -1;

    const int VAR_8 = 6;

    int VAR_9 = (sizeof(uint32_t) * VAR_8) + FUNC_6(VAR_3) + FUNC_6(VAR_4) + VAR_7 + 3;

    uint32_t *VAR_10 = (uint32_t*)FUNC_2(0x20, VAR_9);
    if(!VAR_10)
        return -2;

    FUNC_4(VAR_10, 0, VAR_9);
    VAR_10[0] = VAR_2;
    VAR_10[1] = sizeof(uint32_t) * VAR_8;
    VAR_10[2] = VAR_10[1] + FUNC_6(VAR_3) + 1;
    VAR_10[3] = VAR_5;
    VAR_10[4] = VAR_7 ? ( VAR_10[2] + FUNC_6(VAR_4) + 1) : 0;
    VAR_10[5] = VAR_7;

    FUNC_5(((char*)VAR_10) + VAR_10[1], VAR_3);
    FUNC_5(((char*)VAR_10) + VAR_10[2], VAR_4);

    if(VAR_7)
        FUNC_3(((char*)VAR_10) + VAR_10[4], VAR_6, VAR_7);

    int VAR_11;

    int VAR_12 = FUNC_0(VAR_1, VAR_0, VAR_10, VAR_9, &VAR_11, sizeof(VAR_11));
    if(VAR_12 < 0)
    {
        FUNC_1(VAR_10);
        return VAR_12;
    }

    FUNC_1(VAR_10);
    return VAR_11;
}
