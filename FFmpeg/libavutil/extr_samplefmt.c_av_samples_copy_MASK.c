
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int * const,int) ;
 int FUNC_3 (int *,int * const,int) ;

int FUNC_4(uint8_t **VAR_0, uint8_t * const *VAR_1, int VAR_2,
                    int VAR_3, int VAR_4, int VAR_5,
                    enum AVSampleFormat VAR_6)
{
    int VAR_7 = FUNC_1(VAR_6);
    int VAR_8 = VAR_7 ? VAR_5 : 1;
    int VAR_9 = FUNC_0(VAR_6) * (VAR_7 ? 1 : VAR_5);
    int VAR_10 = VAR_4 * VAR_9;
    int VAR_11;

    VAR_2 *= VAR_9;
    VAR_3 *= VAR_9;

    if((VAR_0[0] < VAR_1[0] ? VAR_1[0] - VAR_0[0] : VAR_0[0] - VAR_1[0]) >= VAR_10) {
        for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
            FUNC_2(VAR_0[VAR_11] + VAR_2, VAR_1[VAR_11] + VAR_3, VAR_10);
    } else {
        for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
            FUNC_3(VAR_0[VAR_11] + VAR_2, VAR_1[VAR_11] + VAR_3, VAR_10);
    }

    return 0;
}
