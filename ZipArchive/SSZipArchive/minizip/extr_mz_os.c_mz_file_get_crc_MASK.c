
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (void*,char const*,int ) ;
 scalar_t__ FUNC_5 (void*,int *,int) ;

int32_t FUNC_6(const char *VAR_2, uint32_t *VAR_3)
{
    void *VAR_4 = ((void*)0);
    uint32_t VAR_5 = 0;
    int32_t VAR_6 = 0;
    int32_t VAR_7 = VAR_0;
    uint8_t VAR_8[16384];

    FUNC_2(&VAR_4);

    VAR_7 = FUNC_4(VAR_4, VAR_2, VAR_1);

    if (VAR_7 == VAR_0)
    {
        do
        {
            VAR_6 = FUNC_5(VAR_4, VAR_8, sizeof(VAR_8));

            if (VAR_6 < 0)
            {
                VAR_7 = VAR_6;
                break;
            }

            VAR_5 = FUNC_0(VAR_5, VAR_8, VAR_6);
        }
        while ((VAR_7 == VAR_0) && (VAR_6 > 0));

        FUNC_1(VAR_4);
    }

    *VAR_3 = VAR_5;

    FUNC_3(&VAR_4);

    return VAR_7;
}
