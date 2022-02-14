
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fileStat_s ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*,int,int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(int VAR_2, const char *VAR_3, fileStat_s* VAR_4)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3 || !VAR_4)
        return -1;

    const int VAR_5 = 2;

    int VAR_6 = sizeof(uint32_t) * VAR_5 + FUNC_5(VAR_3) + 1;

    uint32_t *VAR_7 = (uint32_t*)FUNC_2(0x20, VAR_6);
    if(!VAR_7)
        return -2;

    VAR_7[0] = VAR_2;
    VAR_7[1] = sizeof(uint32_t) * VAR_5;
    FUNC_4(((char*)VAR_7) + VAR_7[1], VAR_3);

    int VAR_8 = 4 + sizeof(fileStat_s);
    uint32_t *VAR_9 = (uint32_t*)FUNC_2(0x20, VAR_8);
    if(!VAR_9)
    {
        FUNC_1(VAR_7);
        return -2;
    }

    int VAR_10 = FUNC_0(VAR_1, VAR_0, VAR_7, VAR_6, VAR_9, VAR_8);
    if(VAR_10 < 0)
    {
        FUNC_1(VAR_7);
        FUNC_1(VAR_9);
        return VAR_10;
    }

    int VAR_11 = VAR_9[0];
    FUNC_3(VAR_4, VAR_9 + 1, sizeof(fileStat_s));

    FUNC_1(VAR_7);
    FUNC_1(VAR_9);
    return VAR_11;
}
