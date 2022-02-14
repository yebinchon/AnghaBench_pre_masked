
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int srcW; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int const*,int const*,int const*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(SwsContext *VAR_0, const uint8_t *VAR_1[],
                                int VAR_2[], int VAR_3, int VAR_4,
                                uint8_t *VAR_5[], int VAR_6[])
{
    uint8_t *VAR_7 = VAR_5[0] + VAR_6[0] * VAR_3;

    FUNC_0(VAR_1[0], VAR_1[1], VAR_1[2], VAR_7, VAR_0->srcW, VAR_4, VAR_2[0],
                  VAR_2[1], VAR_6[0]);

    return VAR_4;
}
