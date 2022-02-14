
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int filter_param_t ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static void FUNC_2(filter_param_t *VAR_0,
                               uint8_t *VAR_1,
                               uint8_t *VAR_2,
                               int VAR_3,
                               int VAR_4,
                               int VAR_5,
                               int VAR_6)
{
    int VAR_7 = VAR_3;
    int VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    if (VAR_6 > 1 && VAR_6 < (VAR_4 - 2))
    {
        VAR_9 = -1 * VAR_5;
        VAR_10 = -2 * VAR_5;
        VAR_11 = 1 * VAR_5;
        VAR_12 = 2 * VAR_5;
    }
    else if (VAR_6 == 0)
    {

        VAR_9 = VAR_10 = 0;
        VAR_11 = 1 * VAR_5;
        VAR_12 = 2 * VAR_5;
    }
    else if (VAR_6 == 1)
    {

        VAR_9 = VAR_10 = -1 * VAR_5;
        VAR_11 = 1 * VAR_5;
        VAR_12 = 2 * VAR_5;
    }
    else if (VAR_6 == (VAR_4 - 2))
    {

        VAR_9 = -1 * VAR_5;
        VAR_10 = -2 * VAR_5;
        VAR_11 = VAR_12 = 1 * VAR_5;
    }
    else if (VAR_6 == (VAR_4 -1))
    {

        VAR_9 = -1 * VAR_5;
        VAR_10 = -2 * VAR_5;
        VAR_11 = VAR_12 = 0;
    }
    else
    {
        FUNC_1("Invalid value y %d height %d", VAR_6, VAR_4);
        return;
    }

    for( VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    {

        VAR_1[0] = FUNC_0(VAR_0, VAR_2[VAR_10], VAR_2[VAR_9], VAR_2[0],
                                    VAR_2[VAR_11], VAR_2[VAR_12] );
        VAR_1++;
        VAR_2++;
    }
}
