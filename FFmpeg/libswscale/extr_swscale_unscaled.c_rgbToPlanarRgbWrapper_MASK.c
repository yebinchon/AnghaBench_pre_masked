
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int srcFormat; int dstFormat; int srcW; } ;
typedef TYPE_1__ SwsContext ;


 int VAR_0 ;






 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,int ) ;
 int FUNC_2 (int const*,int,int **,int*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_1, const uint8_t *VAR_2[],
                                 int VAR_3[], int VAR_4, int VAR_5,
                                 uint8_t *VAR_6[], int VAR_7[])
{
    int VAR_8 = 0;
    int VAR_9[] = { VAR_7[1], VAR_7[0], VAR_7[2] };
    int VAR_10[] = { VAR_7[2], VAR_7[0], VAR_7[1] };
    uint8_t *VAR_11[] = { VAR_6[1] + VAR_4 * VAR_7[1],
                          VAR_6[0] + VAR_4 * VAR_7[0],
                          VAR_6[2] + VAR_4 * VAR_7[2] };
    uint8_t *VAR_12[] = { VAR_6[2] + VAR_4 * VAR_7[2],
                          VAR_6[0] + VAR_4 * VAR_7[0],
                          VAR_6[1] + VAR_4 * VAR_7[1] };

    switch (VAR_1->srcFormat) {
    case 129:
        FUNC_2((const uint8_t *) VAR_2[0], VAR_3[0], VAR_12,
                       VAR_10, VAR_5, VAR_8, 3, VAR_1->srcW);
        break;
    case 131:
        FUNC_2((const uint8_t *) VAR_2[0], VAR_3[0], VAR_11,
                       VAR_9, VAR_5, VAR_8, 3, VAR_1->srcW);
        break;
    case 132:
        VAR_8 = 1;
    case 128:
        FUNC_2((const uint8_t *) VAR_2[0], VAR_3[0], VAR_12,
                       VAR_10, VAR_5, VAR_8, 4, VAR_1->srcW);
        break;
    case 133:
        VAR_8 = 1;
    case 130:
        FUNC_2((const uint8_t *) VAR_2[0], VAR_3[0], VAR_11,
                       VAR_9, VAR_5, VAR_8, 4, VAR_1->srcW);
        break;
    default:
        FUNC_1(VAR_1, VAR_0,
               "unsupported planar RGB conversion %s -> %s\n",
               FUNC_0(VAR_1->srcFormat),
               FUNC_0(VAR_1->dstFormat));
    }

    return VAR_5;
}
