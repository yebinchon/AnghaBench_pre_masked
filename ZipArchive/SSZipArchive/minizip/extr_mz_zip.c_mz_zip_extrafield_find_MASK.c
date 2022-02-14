
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,scalar_t__*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__,int ) ;

int32_t FUNC_2(void *VAR_3, uint16_t VAR_4, uint16_t *VAR_5)
{
    int32_t VAR_6 = VAR_1;
    uint16_t VAR_7 = 0;
    uint16_t VAR_8 = 0;

    do
    {
        VAR_6 = FUNC_0(VAR_3, &VAR_7);
        if (VAR_6 == VAR_1)
            VAR_6 = FUNC_0(VAR_3, &VAR_8);
        if (VAR_6 != VAR_1)
            break;

        if (VAR_4 == VAR_7)
        {
            if (VAR_5 != ((void*)0))
                *VAR_5 = VAR_8;
            return VAR_1;
        }

        VAR_6 = FUNC_1(VAR_3, VAR_8, VAR_2);
    }
    while (VAR_6 == VAR_1);

    return VAR_0;
}
