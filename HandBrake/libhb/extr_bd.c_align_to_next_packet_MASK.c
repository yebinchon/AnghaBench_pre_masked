
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint64_t ;
typedef int buf ;
typedef int BLURAY ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*,int const*,int) ;

__attribute__((used)) static uint64_t FUNC_5(BLURAY *VAR_1, uint8_t *VAR_2)
{
    int VAR_3;
    uint8_t VAR_4[VAR_0];
    uint64_t VAR_5 = 0;
    uint64_t VAR_6 = FUNC_2(VAR_1);
    uint64_t VAR_7;
    uint64_t VAR_8 = 192;

    FUNC_4(VAR_4, VAR_2, 192);
    if ( VAR_6 >= 192 ) {
        VAR_6 -= 192;
    }
    VAR_7 = VAR_6;

    while (1)
    {
        VAR_3 = FUNC_0(VAR_1, VAR_4 + VAR_8, sizeof(VAR_4) - VAR_8);
        if (VAR_3 == sizeof(VAR_4) - VAR_8)
        {
            const uint8_t *VAR_9 = VAR_4;
            int VAR_10;

            for ( VAR_10 = sizeof(VAR_4) - 8 * 192; --VAR_10 >= 0; ++VAR_9 )
            {
                if ( FUNC_3( VAR_9, 192 ) )
                {
                    break;
                }
            }
            if ( VAR_10 >= 0 )
            {
                VAR_5 = ( VAR_9 - VAR_4 );
                break;
            }
            VAR_8 = 8 * 192;
            FUNC_4(VAR_4, VAR_4 + sizeof(VAR_4) - VAR_8, VAR_8);
            VAR_6 += sizeof(VAR_4) - VAR_8;
        }
        else if (VAR_3 < 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    VAR_8 = VAR_6 + VAR_5 - 4;



    FUNC_1(VAR_1, VAR_8);
    while (VAR_8 > FUNC_2(VAR_1))
    {
        VAR_3 = FUNC_0(VAR_1, VAR_4, 192);
        if (VAR_3 < 0)
        {
            return -1;
        }
        else if (VAR_3 != 192)
        {
            return 0;
        }
    }
    return VAR_6 - VAR_7 + VAR_5;
}
