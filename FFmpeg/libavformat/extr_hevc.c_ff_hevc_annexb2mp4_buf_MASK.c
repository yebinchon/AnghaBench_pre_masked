
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int const*,int,int,int*) ;

int FUNC_3(const uint8_t *VAR_0, uint8_t **VAR_1,
                           int *VAR_2, int VAR_3, int *VAR_4)
{
    AVIOContext *VAR_5;
    int VAR_6;

    VAR_6 = FUNC_1(&VAR_5);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = FUNC_2(VAR_5, VAR_0, *VAR_2, VAR_3, VAR_4);
    *VAR_2 = FUNC_0(VAR_5, VAR_1);

    return VAR_6;
}
