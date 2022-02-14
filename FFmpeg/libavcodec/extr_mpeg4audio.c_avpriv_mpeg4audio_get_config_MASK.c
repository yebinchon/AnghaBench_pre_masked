
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MPEG4AudioConfig ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(MPEG4AudioConfig *VAR_1, const uint8_t *VAR_2,
                                 int VAR_3, int VAR_4)
{
    GetBitContext VAR_5;
    int VAR_6;

    if (VAR_3 <= 0)
        return VAR_0;

    VAR_6 = FUNC_1(&VAR_5, VAR_2, VAR_3);
    if (VAR_6 < 0)
        return VAR_6;

    return FUNC_0(VAR_1, &VAR_5, VAR_4, ((void*)0));
}
