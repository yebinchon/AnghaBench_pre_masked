
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint16_t ;
struct TYPE_9__ {int flags; int name; TYPE_1__* comp; } ;
struct TYPE_8__ {int srcFormat; int dstFormat; int srcW; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_2__ SwsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int ,int ) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int const**,int*,int *,int,int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_5, const uint8_t *VAR_6[],
                                     int VAR_7[], int VAR_8, int VAR_9,
                                     uint8_t *VAR_10[], int VAR_11[])
{
    const uint16_t *VAR_12[] = { (uint16_t *)VAR_6[1], (uint16_t *)VAR_6[0], (uint16_t *)VAR_6[2], (uint16_t *)VAR_6[3] };
    const uint16_t *VAR_13[] = { (uint16_t *)VAR_6[2], (uint16_t *)VAR_6[0], (uint16_t *)VAR_6[1], (uint16_t *)VAR_6[3] };
    int VAR_14[] = { VAR_7[1], VAR_7[0], VAR_7[2], VAR_7[3] };
    int VAR_15[] = { VAR_7[2], VAR_7[0], VAR_7[1], VAR_7[3] };
    const AVPixFmtDescriptor *VAR_16 = FUNC_1(VAR_5->srcFormat);
    const AVPixFmtDescriptor *VAR_17 = FUNC_1(VAR_5->dstFormat);
    int VAR_18 = VAR_16->comp[0].depth;
    int VAR_19 = 0;
    if ( VAR_4 && !(VAR_16->flags & VAR_1) ||
        !VAR_4 && VAR_16->flags & VAR_1)
        VAR_19++;
    if ( VAR_4 && !(VAR_17->flags & VAR_1) ||
        !VAR_4 && VAR_17->flags & VAR_1)
        VAR_19 += 2;

    if ((VAR_16->flags & (VAR_2 | VAR_3)) !=
        (VAR_2 | VAR_3) ||
        VAR_18 <= 8) {
        FUNC_0(VAR_5, VAR_0, "unsupported planar RGB conversion %s -> %s\n",
               VAR_16->name, VAR_17->name);
        return VAR_9;
    }
    switch (VAR_5->dstFormat) {
    case 134:
    case 135:
        FUNC_2(VAR_12, VAR_14,
                         VAR_10[0] + VAR_8 * VAR_11[0], VAR_11[0],
                         VAR_9, 0, VAR_19, VAR_18, VAR_5->srcW);
        break;
    case 130:
    case 131:
        FUNC_2(VAR_13, VAR_15,
                         VAR_10[0] + VAR_8 * VAR_11[0], VAR_11[0],
                         VAR_9, 0, VAR_19, VAR_18, VAR_5->srcW);
        break;
    case 128:
    case 129:
         FUNC_2(VAR_13, VAR_15,
                          VAR_10[0] + VAR_8 * VAR_11[0], VAR_11[0],
                          VAR_9, 1, VAR_19, VAR_18, VAR_5->srcW);
        break;
    case 132:
    case 133:
        FUNC_2(VAR_12, VAR_14,
                         VAR_10[0] + VAR_8 * VAR_11[0], VAR_11[0],
                         VAR_9, 1, VAR_19, VAR_18, VAR_5->srcW);
        break;
    default:
        FUNC_0(VAR_5, VAR_0,
               "unsupported planar RGB conversion %s -> %s\n",
               VAR_16->name, VAR_17->name);
    }

    return VAR_9;
}
