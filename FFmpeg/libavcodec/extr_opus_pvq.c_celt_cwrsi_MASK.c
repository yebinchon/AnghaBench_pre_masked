
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int** VAR_0 ;

__attribute__((used)) static inline uint64_t FUNC_0(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, int *VAR_4)
{
    uint64_t VAR_5 = 0;
    uint32_t VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;

    while (VAR_1 > 2) {

        if (VAR_2 >= VAR_1) {
            const uint32_t *VAR_11 = VAR_0[VAR_1];


            VAR_7 = VAR_11[VAR_2 + 1];
            VAR_8 = -(VAR_3 >= VAR_7);
            VAR_3 -= VAR_7 & VAR_8;


            VAR_10 = VAR_2;
            VAR_6 = VAR_11[VAR_1];
            if (VAR_6 > VAR_3) {
                VAR_2 = VAR_1;
                do {
                    VAR_7 = VAR_0[--VAR_2][VAR_1];
                } while (VAR_7 > VAR_3);
            } else
                for (VAR_7 = VAR_11[VAR_2]; VAR_7 > VAR_3; VAR_7 = VAR_11[VAR_2])
                    VAR_2--;

            VAR_3 -= VAR_7;
            VAR_9 = (VAR_10 - VAR_2 + VAR_8) ^ VAR_8;
            VAR_5 += VAR_9 * VAR_9;
            *VAR_4++ = VAR_9;
        } else {

            VAR_7 = VAR_0[VAR_2 ][VAR_1];
            VAR_6 = VAR_0[VAR_2 + 1][VAR_1];

            if (VAR_7 <= VAR_3 && VAR_3 < VAR_6) {
                VAR_3 -= VAR_7;
                *VAR_4++ = 0;
            } else {

                VAR_8 = -(VAR_3 >= VAR_6);
                VAR_3 -= VAR_6 & VAR_8;


                VAR_10 = VAR_2;
                do VAR_7 = VAR_0[--VAR_2][VAR_1];
                while (VAR_7 > VAR_3);

                VAR_3 -= VAR_7;
                VAR_9 = (VAR_10 - VAR_2 + VAR_8) ^ VAR_8;
                VAR_5 += VAR_9 * VAR_9;
                *VAR_4++ = VAR_9;
            }
        }
        VAR_1--;
    }


    VAR_7 = 2 * VAR_2 + 1;
    VAR_8 = -(VAR_3 >= VAR_7);
    VAR_3 -= VAR_7 & VAR_8;
    VAR_10 = VAR_2;
    VAR_2 = (VAR_3 + 1) / 2;

    if (VAR_2)
        VAR_3 -= 2 * VAR_2 - 1;

    VAR_9 = (VAR_10 - VAR_2 + VAR_8) ^ VAR_8;
    VAR_5 += VAR_9 * VAR_9;
    *VAR_4++ = VAR_9;


    VAR_8 = -VAR_3;
    VAR_9 = (VAR_2 + VAR_8) ^ VAR_8;
    VAR_5 += VAR_9 * VAR_9;
    *VAR_4 = VAR_9;

    return VAR_5;
}
