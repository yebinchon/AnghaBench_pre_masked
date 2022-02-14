
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ srcFormat; int dstFormat; int srcW; } ;
typedef TYPE_1__ SwsContext ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,int ) ;
 int FUNC_2 (int const**,int*,int *,int,int,int ) ;
 int FUNC_3 (int const**,int*,int *,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(SwsContext *VAR_2, const uint8_t *VAR_3[],
                                  int VAR_4[], int VAR_5, int VAR_6,
                                  uint8_t *VAR_7[], int VAR_8[])
{
    int VAR_9 = 0;
    const uint8_t *VAR_10[] = { VAR_3[1], VAR_3[0], VAR_3[2], VAR_3[3] };
    const uint8_t *VAR_11[] = { VAR_3[2], VAR_3[0], VAR_3[1], VAR_3[3] };
    int VAR_12[] = { VAR_4[1], VAR_4[0], VAR_4[2], VAR_4[3] };
    int VAR_13[] = { VAR_4[2], VAR_4[0], VAR_4[1], VAR_4[3] };

    if (VAR_2->srcFormat != VAR_1) {
        FUNC_1(VAR_2, VAR_0, "unsupported planar RGB conversion %s -> %s\n",
               FUNC_0(VAR_2->srcFormat),
               FUNC_0(VAR_2->dstFormat));
        return VAR_6;
    }

    switch (VAR_2->dstFormat) {
    case 131:
        FUNC_2(VAR_10, VAR_12,
                         VAR_7[0] + VAR_5 * VAR_8[0], VAR_8[0],
                         VAR_6, VAR_2->srcW);
        break;

    case 129:
        FUNC_2(VAR_11, VAR_13,
                         VAR_7[0] + VAR_5 * VAR_8[0], VAR_8[0],
                         VAR_6, VAR_2->srcW);
        break;

    case 132:
        VAR_9 = 1;
    case 128:
        FUNC_3(VAR_11, VAR_13,
                        VAR_7[0] + VAR_5 * VAR_8[0], VAR_8[0],
                        VAR_6, VAR_9, VAR_2->srcW);
        break;

    case 133:
        VAR_9 = 1;
    case 130:
        FUNC_3(VAR_10, VAR_12,
                        VAR_7[0] + VAR_5 * VAR_8[0], VAR_8[0],
                        VAR_6, VAR_9, VAR_2->srcW);
        break;

    default:
        FUNC_1(VAR_2, VAR_0,
               "unsupported planar RGB conversion %s -> %s\n",
               FUNC_0(VAR_2->srcFormat),
               FUNC_0(VAR_2->dstFormat));
    }

    return VAR_6;
}
