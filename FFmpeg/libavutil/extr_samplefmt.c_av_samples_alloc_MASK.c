
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int **,int*,int *,int,int,int,int) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int FUNC_5 (int **,int ,int,int,int) ;

int FUNC_6(uint8_t **VAR_1, int *VAR_2, int VAR_3,
                     int VAR_4, enum AVSampleFormat VAR_5, int VAR_6)
{
    uint8_t *VAR_7;
    int VAR_8 = FUNC_4(((void*)0), VAR_3, VAR_4,
                                          VAR_5, VAR_6);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_7 = FUNC_2(VAR_8);
    if (!VAR_7)
        return FUNC_0(VAR_0);

    VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_7, VAR_3,
                                  VAR_4, VAR_5, VAR_6);
    if (VAR_8 < 0) {
        FUNC_1(VAR_7);
        return VAR_8;
    }

    FUNC_5(VAR_1, 0, VAR_4, VAR_3, VAR_5);

    return VAR_8;
}
