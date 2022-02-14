
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int srcW; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int *,int,int ,int,int,int) ;
 int FUNC_1 (int *,int *,int *,int const*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(SwsContext *VAR_0, const uint8_t *VAR_1[],
                               int VAR_2[], int VAR_3, int VAR_4,
                               uint8_t *VAR_5[], int VAR_6[])
{
    uint8_t *VAR_7 = VAR_5[0] + VAR_6[0] * VAR_3;
    uint8_t *VAR_8 = VAR_5[1] + VAR_6[1] * VAR_3 / 2;
    uint8_t *VAR_9 = VAR_5[2] + VAR_6[2] * VAR_3 / 2;

    FUNC_1(VAR_7, VAR_8, VAR_9, VAR_1[0], VAR_0->srcW, VAR_4, VAR_6[0],
                 VAR_6[1], VAR_2[0]);

    if (VAR_5[3])
        FUNC_0(VAR_5[3], VAR_6[3], VAR_0->srcW, VAR_4, VAR_3, 255);

    return VAR_4;
}
