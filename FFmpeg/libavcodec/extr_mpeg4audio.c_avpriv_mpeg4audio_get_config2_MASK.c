
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MPEG4AudioConfig ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,void*) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(MPEG4AudioConfig *VAR_1, const uint8_t *VAR_2,
                                  int VAR_3, int VAR_4, void *VAR_5)
{
    GetBitContext VAR_6;
    int VAR_7;

    if (VAR_3 <= 0)
        return VAR_0;

    VAR_7 = FUNC_1(&VAR_6, VAR_2, VAR_3);
    if (VAR_7 < 0)
        return VAR_7;

    return FUNC_0(VAR_1, &VAR_6, VAR_4, VAR_5);
}
