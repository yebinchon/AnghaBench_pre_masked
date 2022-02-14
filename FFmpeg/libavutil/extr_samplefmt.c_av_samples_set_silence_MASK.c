
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;

int FUNC_3(uint8_t **VAR_2, int VAR_3, int VAR_4,
                           int VAR_5, enum AVSampleFormat VAR_6)
{
    int VAR_7 = FUNC_1(VAR_6);
    int VAR_8 = VAR_7 ? VAR_5 : 1;
    int VAR_9 = FUNC_0(VAR_6) * (VAR_7 ? 1 : VAR_5);
    int VAR_10 = VAR_4 * VAR_9;
    int VAR_11 = (VAR_6 == VAR_0 ||
                     VAR_6 == VAR_1) ? 0x80 : 0x00;
    int VAR_12;

    VAR_3 *= VAR_9;

    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
        FUNC_2(VAR_2[VAR_12] + VAR_3, VAR_11, VAR_10);

    return 0;
}
