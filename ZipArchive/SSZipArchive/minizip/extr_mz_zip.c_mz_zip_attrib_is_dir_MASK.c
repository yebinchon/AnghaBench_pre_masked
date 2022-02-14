
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int ,int*) ;

int32_t FUNC_2(uint32_t VAR_3, int32_t VAR_4)
{
    uint32_t VAR_5 = 0;
    uint8_t VAR_6 = FUNC_0(VAR_4);
    int32_t VAR_7 = VAR_2;

    VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_1, &VAR_5);
    if (VAR_7 == VAR_2)
    {
        if ((VAR_5 & 0170000) == 0040000)
            return VAR_2;
    }

    return VAR_0;
}
