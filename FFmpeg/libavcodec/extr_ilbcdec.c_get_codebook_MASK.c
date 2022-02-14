
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 (int*,int*,int*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static void FUNC_5(int16_t * VAR_4,
                     int16_t * VAR_5,
                     int16_t VAR_6,
                     int16_t VAR_7,
                     int16_t VAR_8
)
{
    int16_t VAR_9, VAR_10;
    int16_t VAR_11;

    int16_t VAR_12[VAR_2 + 5];


    VAR_10 = VAR_7 - VAR_8 + 1;

    if (VAR_8 == VAR_2) {
        VAR_10 += VAR_8 / 2;
    }


    if (VAR_6 < VAR_7 - VAR_8 + 1) {


        VAR_9 = VAR_6 + VAR_8;

        FUNC_3(VAR_4, VAR_5 + VAR_7 - VAR_9, VAR_8 * 2);
    } else if (VAR_6 < VAR_10) {



        VAR_9 = (int16_t) FUNC_0(2, (VAR_6 - (VAR_7 - VAR_8 + 1))) + VAR_8;

        VAR_11 = VAR_9 / 2;

        FUNC_1(VAR_11, VAR_5 + VAR_7, VAR_4);
    } else {
        int16_t VAR_13;



        if (VAR_6 - VAR_10 < VAR_7 - VAR_8 + 1) {



            VAR_13 = VAR_7 - (VAR_6 - VAR_10 + VAR_8);

            FUNC_4(VAR_5 - VAR_1, 0, VAR_1 * 2);
            FUNC_4(VAR_5 + VAR_7, 0, VAR_1 * 2);



            FUNC_2(&VAR_5[VAR_13 + 4], VAR_4, (int16_t *) VAR_3, VAR_0, VAR_8);
        } else {


            VAR_13 = VAR_7 - VAR_8 - VAR_0;
            FUNC_4(VAR_5 + VAR_7, 0, VAR_1 * 2);


            FUNC_2(&VAR_5[VAR_13 + 7], VAR_12, (int16_t *) VAR_3, VAR_0, (int16_t) (VAR_8 + 5));


            VAR_11 = (VAR_8 << 1) - 20 + VAR_6 - VAR_10 - VAR_7 - 1;

            FUNC_1(VAR_11, VAR_12 + VAR_2 + 5, VAR_4);
        }
    }
}
