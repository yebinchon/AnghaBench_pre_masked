
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int result ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*,int,int*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*,int*,int) ;

int FUNC_2(uint32_t VAR_2, uint32_t * VAR_3, uint32_t VAR_4)
{
    if(VAR_1 < 0)
        return VAR_1;

    uint32_t VAR_5[9];
    VAR_5[0] = VAR_2;

    if(VAR_3 && VAR_4)
    {
        if(VAR_4 > 8)
            VAR_4 = 8;

        FUNC_1(VAR_5 + 1, VAR_3, VAR_4 * 4);
    }

    int VAR_6;
    int VAR_7 = FUNC_0(VAR_1, VAR_0, VAR_5, (1 + VAR_4) * 4, &VAR_6, sizeof(VAR_6));
    if(VAR_7 < 0)
        return VAR_7;

    return VAR_6;
}
