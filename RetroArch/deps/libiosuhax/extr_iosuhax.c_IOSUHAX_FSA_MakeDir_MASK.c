
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int result ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*,int,int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(int VAR_2, const char* VAR_3, uint32_t VAR_4)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3)
        return -1;

    const int VAR_5 = 3;

    int VAR_6 = sizeof(uint32_t) * VAR_5 + FUNC_4(VAR_3) + 1;

    uint32_t *VAR_7 = (uint32_t*)FUNC_2(0x20, VAR_6);
    if(!VAR_7)
        return -2;

    VAR_7[0] = VAR_2;
    VAR_7[1] = sizeof(uint32_t) * VAR_5;
    VAR_7[2] = VAR_4;
    FUNC_3(((char*)VAR_7) + VAR_7[1], VAR_3);

    int VAR_8;
    int VAR_9 = FUNC_0(VAR_1, VAR_0, VAR_7, VAR_6, &VAR_8, sizeof(VAR_8));
    if(VAR_9 < 0)
    {
        FUNC_1(VAR_7);
        return VAR_9;
    }

    FUNC_1(VAR_7);
    return VAR_8;
}
