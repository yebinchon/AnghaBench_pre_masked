
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,int ) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_2, uint8_t VAR_3, uint32_t VAR_4, int64_t VAR_5, int64_t VAR_6)
{
    int32_t VAR_7 = VAR_0;

    VAR_7 = FUNC_1(VAR_2, VAR_1);
    if (VAR_7 == VAR_0)
        VAR_7 = FUNC_1(VAR_2, VAR_4);


    if (VAR_7 == VAR_0)
    {

        if (!VAR_3)
            VAR_7 = FUNC_1(VAR_2, (uint32_t)VAR_5);
        else
            VAR_7 = FUNC_0(VAR_2, VAR_5);
    }
    if (VAR_7 == VAR_0)
    {
        if (!VAR_3)
            VAR_7 = FUNC_1(VAR_2, (uint32_t)VAR_6);
        else
            VAR_7 = FUNC_0(VAR_2, VAR_6);
    }

    return VAR_7;
}
