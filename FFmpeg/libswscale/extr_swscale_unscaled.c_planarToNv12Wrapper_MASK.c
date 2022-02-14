
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ dstFormat; int chrSrcW; int srcW; } ;
typedef TYPE_1__ SwsContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,int,int,int,int ,int *,int) ;
 int FUNC_1 (int const*,int const*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(SwsContext *VAR_1, const uint8_t *VAR_2[],
                               int VAR_3[], int VAR_4,
                               int VAR_5, uint8_t *VAR_6[],
                               int VAR_7[])
{
    uint8_t *VAR_8 = VAR_6[1] + VAR_7[1] * VAR_4 / 2;

    FUNC_0(VAR_2[0], VAR_3[0], VAR_4, VAR_5, VAR_1->srcW,
              VAR_6[0], VAR_7[0]);

    if (VAR_1->dstFormat == VAR_0)
        FUNC_1(VAR_2[1], VAR_2[2], VAR_8, VAR_1->chrSrcW, (VAR_5 + 1) / 2,
                        VAR_3[1], VAR_3[2], VAR_7[1]);
    else
        FUNC_1(VAR_2[2], VAR_2[1], VAR_8, VAR_1->chrSrcW, (VAR_5 + 1) / 2,
                        VAR_3[2], VAR_3[1], VAR_7[1]);

    return VAR_5;
}
