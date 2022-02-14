
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int format; TYPE_5__* src; } ;
struct TYPE_10__ {TYPE_1__* comp; } ;
struct TYPE_9__ {int* buffer; int*** lut; int rr; int rg; int rb; int ra; int gr; int gg; int gb; int ga; int br; int bg; int bb; int ba; int ar; int ag; int ab; int aa; int filter_slice; int rgba_map; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ ColorChannelMixerContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_20)
{
    AVFilterContext *VAR_21 = VAR_20->src;
    ColorChannelMixerContext *VAR_22 = VAR_21->priv;
    const AVPixFmtDescriptor *VAR_23 = FUNC_2(VAR_20->format);
    const int VAR_24 = VAR_23->comp[0].depth;
    int VAR_25, VAR_26, VAR_27, *VAR_28 = VAR_22->buffer;

    FUNC_3(VAR_22->rgba_map, VAR_20->format);

    VAR_27 = 1 << VAR_24;
    if (!VAR_22->buffer) {
        VAR_22->buffer = VAR_28 = FUNC_1(16 * VAR_27 * sizeof(*VAR_22->buffer));
        if (!VAR_22->buffer)
            return FUNC_0(VAR_2);

        for (VAR_25 = 0; VAR_25 < 4; VAR_25++)
            for (VAR_26 = 0; VAR_26 < 4; VAR_26++, VAR_28 += VAR_27)
                VAR_22->lut[VAR_25][VAR_26] = VAR_28;
    }

    for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
        VAR_22->lut[VAR_4][VAR_4][VAR_25] = FUNC_4(VAR_25 * VAR_22->rr);
        VAR_22->lut[VAR_4][VAR_3][VAR_25] = FUNC_4(VAR_25 * VAR_22->rg);
        VAR_22->lut[VAR_4][VAR_1][VAR_25] = FUNC_4(VAR_25 * VAR_22->rb);
        VAR_22->lut[VAR_4][VAR_0][VAR_25] = FUNC_4(VAR_25 * VAR_22->ra);

        VAR_22->lut[VAR_3][VAR_4][VAR_25] = FUNC_4(VAR_25 * VAR_22->gr);
        VAR_22->lut[VAR_3][VAR_3][VAR_25] = FUNC_4(VAR_25 * VAR_22->gg);
        VAR_22->lut[VAR_3][VAR_1][VAR_25] = FUNC_4(VAR_25 * VAR_22->gb);
        VAR_22->lut[VAR_3][VAR_0][VAR_25] = FUNC_4(VAR_25 * VAR_22->ga);

        VAR_22->lut[VAR_1][VAR_4][VAR_25] = FUNC_4(VAR_25 * VAR_22->br);
        VAR_22->lut[VAR_1][VAR_3][VAR_25] = FUNC_4(VAR_25 * VAR_22->bg);
        VAR_22->lut[VAR_1][VAR_1][VAR_25] = FUNC_4(VAR_25 * VAR_22->bb);
        VAR_22->lut[VAR_1][VAR_0][VAR_25] = FUNC_4(VAR_25 * VAR_22->ba);

        VAR_22->lut[VAR_0][VAR_4][VAR_25] = FUNC_4(VAR_25 * VAR_22->ar);
        VAR_22->lut[VAR_0][VAR_3][VAR_25] = FUNC_4(VAR_25 * VAR_22->ag);
        VAR_22->lut[VAR_0][VAR_1][VAR_25] = FUNC_4(VAR_25 * VAR_22->ab);
        VAR_22->lut[VAR_0][VAR_0][VAR_25] = FUNC_4(VAR_25 * VAR_22->aa);
    }

    switch (VAR_20->format) {
    case 146:
    case 131:
        VAR_22->filter_slice = VAR_16;
        break;
    case 151:
    case 150:
    case 147:
    case 132:
        VAR_22->filter_slice = VAR_15;
        break;
    case 149:
    case 148:
    case 144:
    case 129:
        VAR_22->filter_slice = VAR_18;
        break;
    case 145:
    case 130:
        VAR_22->filter_slice = VAR_17;
        break;
    case 143:
    case 128:
        VAR_22->filter_slice = VAR_19;
        break;
    case 138:
        VAR_22->filter_slice = VAR_9;
        break;
    case 142:
        VAR_22->filter_slice = VAR_5;
        break;
    case 133:
        VAR_22->filter_slice = VAR_14;
        break;
    case 137:
        VAR_22->filter_slice = VAR_10;
        break;
    case 141:
        VAR_22->filter_slice = VAR_6;
        break;
    case 136:
        VAR_22->filter_slice = VAR_11;
        break;
    case 140:
        VAR_22->filter_slice = VAR_7;
        break;
    case 135:
        VAR_22->filter_slice = VAR_12;
        break;
    case 134:
        VAR_22->filter_slice = VAR_13;
        break;
    case 139:
        VAR_22->filter_slice = VAR_8;
        break;
    }

    return 0;
}
