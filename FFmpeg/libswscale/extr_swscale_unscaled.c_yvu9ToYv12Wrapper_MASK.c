
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int srcW; int chrSrcW; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int const*,int,int,int,int ,int *,int) ;
 int FUNC_1 (int *,int,int ,int,int,int) ;
 int FUNC_2 (int const*,int *,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_0, const uint8_t *VAR_1[],
                             int VAR_2[], int VAR_3, int VAR_4,
                             uint8_t *VAR_5[], int VAR_6[])
{
    FUNC_0(VAR_1[0], VAR_2[0], VAR_3, VAR_4, VAR_0->srcW,
              VAR_5[0], VAR_6[0]);

    FUNC_2(VAR_1[1], VAR_5[1] + VAR_6[1] * (VAR_3 >> 1), VAR_0->chrSrcW,
             VAR_4 >> 2, VAR_2[1], VAR_6[1]);
    FUNC_2(VAR_1[2], VAR_5[2] + VAR_6[2] * (VAR_3 >> 1), VAR_0->chrSrcW,
             VAR_4 >> 2, VAR_2[2], VAR_6[2]);
    if (VAR_5[3])
        FUNC_1(VAR_5[3], VAR_6[3], VAR_0->srcW, VAR_4, VAR_3, 255);
    return VAR_4;
}
