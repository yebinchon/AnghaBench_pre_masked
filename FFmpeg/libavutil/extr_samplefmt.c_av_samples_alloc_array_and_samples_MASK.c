
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int ** FUNC_1 (int,int) ;
 int FUNC_2 (int ***) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int **,int*,int,int,int,int) ;

int FUNC_5(uint8_t ***VAR_1, int *VAR_2, int VAR_3,
                                       int VAR_4, enum AVSampleFormat VAR_5, int VAR_6)
{
    int VAR_7, VAR_8 = FUNC_3(VAR_5) ? VAR_3 : 1;

    *VAR_1 = FUNC_1(VAR_8, sizeof(**VAR_1));
    if (!*VAR_1)
        return FUNC_0(VAR_0);
    VAR_7 = FUNC_4(*VAR_1, VAR_2, VAR_3,
                           VAR_4, VAR_5, VAR_6);
    if (VAR_7 < 0)
        FUNC_2(VAR_1);
    return VAR_7;
}
