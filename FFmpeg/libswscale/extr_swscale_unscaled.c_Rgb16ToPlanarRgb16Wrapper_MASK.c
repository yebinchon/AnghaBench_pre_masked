
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {int flags; int name; TYPE_1__* comp; } ;
struct TYPE_8__ {int srcFormat; int dstFormat; int srcW; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_2__ SwsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int ,int ) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int const*,int,int **,int*,int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_6, const uint8_t *VAR_7[],
                                     int VAR_8[], int VAR_9, int VAR_10,
                                     uint8_t *VAR_11[], int VAR_12[])
{
    uint16_t *VAR_13[] = { (uint16_t *)VAR_11[2], (uint16_t *)VAR_11[0], (uint16_t *)VAR_11[1], (uint16_t *)VAR_11[3] };
    uint16_t *VAR_14[] = { (uint16_t *)VAR_11[1], (uint16_t *)VAR_11[0], (uint16_t *)VAR_11[2], (uint16_t *)VAR_11[3] };
    int VAR_15[] = { VAR_12[2], VAR_12[0], VAR_12[1], VAR_12[3] };
    int VAR_16[] = { VAR_12[1], VAR_12[0], VAR_12[2], VAR_12[3] };
    const AVPixFmtDescriptor *VAR_17 = FUNC_1(VAR_6->srcFormat);
    const AVPixFmtDescriptor *VAR_18 = FUNC_1(VAR_6->dstFormat);
    int VAR_19 = VAR_18->comp[0].depth;
    int VAR_20 = VAR_17->flags & VAR_1;
    int VAR_21 = 0;
    int VAR_22;

    if ( VAR_5 && !(VAR_17->flags & VAR_2) ||
        !VAR_5 && VAR_17->flags & VAR_2)
        VAR_21++;
    if ( VAR_5 && !(VAR_18->flags & VAR_2) ||
        !VAR_5 && VAR_18->flags & VAR_2)
        VAR_21 += 2;

    if ((VAR_18->flags & (VAR_3 | VAR_4)) !=
        (VAR_3 | VAR_4) || VAR_19 < 9) {
        FUNC_0(VAR_6, VAR_0, "unsupported conversion to planar RGB %s -> %s\n",
               VAR_17->name, VAR_18->name);
        return VAR_10;
    }

    for(VAR_22=0; VAR_22<4; VAR_22++) {
        VAR_13[VAR_22] += VAR_15[VAR_22] * VAR_9 / 2;
        VAR_14[VAR_22] += VAR_16[VAR_22] * VAR_9 / 2;
    }

    switch (VAR_6->srcFormat) {
    case 130:
    case 131:
    case 128:
    case 129:
        FUNC_2(VAR_7[0], VAR_8[0],
                         VAR_13, VAR_15, VAR_10, VAR_20, VAR_21,
                         16 - VAR_19, VAR_6->srcW);
        break;
    case 134:
    case 135:
    case 132:
    case 133:
        FUNC_2(VAR_7[0], VAR_8[0],
                         VAR_14, VAR_16, VAR_10, VAR_20, VAR_21,
                         16 - VAR_19, VAR_6->srcW);
        break;
    default:
        FUNC_0(VAR_6, VAR_0,
               "unsupported conversion to planar RGB %s -> %s\n",
               VAR_17->name, VAR_18->name);
    }

    return VAR_10;
}
