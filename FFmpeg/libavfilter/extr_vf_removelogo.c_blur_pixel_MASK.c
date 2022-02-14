
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static unsigned int FUNC_2(int ***VAR_0,
                               const uint8_t *VAR_1, int VAR_2,
                               uint8_t *VAR_3, int VAR_4,
                               int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{


    int VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15;
    unsigned int VAR_16 = 0, VAR_17 = 0;

    const uint8_t *VAR_18;

    const uint8_t *VAR_19;


    VAR_9 = VAR_1[VAR_8 * VAR_2 + VAR_7];
    VAR_10 = FUNC_0(0, VAR_7 - VAR_9);
    VAR_11 = FUNC_0(0, VAR_8 - VAR_9);
    VAR_12 = FUNC_1(VAR_5 - 1, VAR_7 + VAR_9);
    VAR_13 = FUNC_1(VAR_6 - 1, VAR_8 + VAR_9);

    VAR_18 = VAR_3 + VAR_4 * VAR_11 + VAR_10;
    VAR_19 = VAR_1 + VAR_2 * VAR_11 + VAR_10;

    for (VAR_15 = VAR_11; VAR_15 <= VAR_13; VAR_15++) {
        for (VAR_14 = VAR_10; VAR_14 <= VAR_12; VAR_14++) {


            if (!(*VAR_19) && VAR_0[VAR_9][VAR_14 - VAR_10][VAR_15 - VAR_11]) {
                VAR_16 += *VAR_18;
                VAR_17++;
            }

            VAR_18++;
            VAR_19++;
        }

        VAR_18 += (VAR_4 - ((VAR_12 + 1) - VAR_10));
        VAR_19 += (VAR_2 - ((VAR_12 + 1) - VAR_10));
    }




    return VAR_17 == 0 ? 255:
        (VAR_16 + (VAR_17 / 2)) / VAR_17;
}
