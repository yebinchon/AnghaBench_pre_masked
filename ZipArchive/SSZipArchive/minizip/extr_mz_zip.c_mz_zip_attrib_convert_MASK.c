
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*) ;

int32_t FUNC_2(uint8_t VAR_8, uint32_t VAR_9, uint8_t VAR_10, uint32_t *VAR_11)
{
    if (VAR_11 == ((void*)0))
        return VAR_6;

    *VAR_11 = 0;

    if ((VAR_8 == VAR_0) || (VAR_8 == VAR_4))
    {
        if ((VAR_10 == VAR_0) || (VAR_10 == VAR_4))
        {
            *VAR_11 = VAR_9;
            return VAR_5;
        }
        if ((VAR_10 == VAR_3) || (VAR_10 == VAR_1) || (VAR_10 == VAR_2))
            return FUNC_1(VAR_9, VAR_11);
    }
    else if ((VAR_8 == VAR_3) || (VAR_8 == VAR_1) || (VAR_8 == VAR_2))
    {
        if ((VAR_10 == VAR_3) || (VAR_10 == VAR_1) || (VAR_10 == VAR_2))
        {

            if ((VAR_9 >> 16) != 0)
                VAR_9 >>= 16;

            *VAR_11 = VAR_9;
            return VAR_5;
        }
        if ((VAR_10 == VAR_0) || (VAR_10 == VAR_4))
            return FUNC_0(VAR_9, VAR_11);
    }

    return VAR_7;
}
