
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int * const,int const,int,int,int,int,int const,int const,int const*) ;
 int FUNC_1 (int,int const,int const,int const,int*,int*) ;

__attribute__((used)) static void
FUNC_2(uint16_t* const VAR_0,
               int const VAR_1,
               int const VAR_2,
               int const VAR_3,
               uint16_t const VAR_4,
               int const VAR_5)
{
    const uint16_t VAR_6[4] = { VAR_4, VAR_4, VAR_4, VAR_4 };
    int VAR_7;
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;

    for (VAR_7 = 360; VAR_7 <= 830; VAR_7++) {
        int VAR_12, VAR_13;

        FUNC_1(VAR_7, VAR_2, VAR_3, VAR_5,
                                  &VAR_12, &VAR_13);

        if (VAR_7 > 360)
            FUNC_0(VAR_0, VAR_1, VAR_8, VAR_9, VAR_12, VAR_13, VAR_2, VAR_3, VAR_6);
        else {
            VAR_10 = VAR_12;
            VAR_11 = VAR_13;
        }
        VAR_8 = VAR_12;
        VAR_9 = VAR_13;
    }
    FUNC_0(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10, VAR_11, VAR_2, VAR_3, VAR_6);
}
