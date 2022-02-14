
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {TYPE_2__* priv; } ;
struct TYPE_15__ {int w; int h; int format; TYPE_5__* dst; } ;
struct TYPE_14__ {int flags; int nb_components; TYPE_1__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_13__ {int* var_values; int is_16bit; int is_yuv; int is_rgb; int is_planar; int step; int* comp_expr_str; int** lut; int ** comp_expr; int vsub; int hsub; } ;
struct TYPE_12__ {int depth; } ;
typedef TYPE_2__ LutContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 void* FUNC_2 (int,int,int) ;
 double FUNC_3 (int *,int*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int,int ,int ,int ,int *,int *,int ,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__ const*) ;
 int FUNC_7 (TYPE_5__*,int ,char*,int,int,int) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (int*,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_11 (double) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_20)
{
    AVFilterContext *VAR_21 = VAR_20->dst;
    LutContext *VAR_22 = VAR_21->priv;
    const AVPixFmtDescriptor *VAR_23 = FUNC_8(VAR_20->format);
    uint8_t VAR_24[4];
    int VAR_25[4], VAR_26[4];
    int VAR_27, VAR_28, VAR_29;

    VAR_22->hsub = VAR_23->log2_chroma_w;
    VAR_22->vsub = VAR_23->log2_chroma_h;

    VAR_22->var_values[VAR_13] = VAR_20->w;
    VAR_22->var_values[VAR_8] = VAR_20->h;
    VAR_22->is_16bit = VAR_23->comp[0].depth > 8;

    switch (VAR_20->format) {
    case 162:
    case 161:
    case 160:
    case 154:
    case 148:
    case 145:
    case 139:
    case 135:
    case 131:
    case 155:
    case 149:
    case 140:
    case 136:
    case 132:
    case 128:
    case 159:
    case 153:
    case 147:
    case 144:
    case 138:
    case 134:
    case 130:
    case 158:
    case 152:
    case 146:
    case 143:
    case 157:
    case 151:
    case 142:
    case 156:
    case 150:
    case 141:
    case 137:
    case 133:
    case 129:
        VAR_25[VAR_14] = 16 * (1 << (VAR_23->comp[0].depth - 8));
        VAR_25[VAR_5] = 16 * (1 << (VAR_23->comp[1].depth - 8));
        VAR_25[VAR_6] = 16 * (1 << (VAR_23->comp[2].depth - 8));
        VAR_25[VAR_0] = 0;
        VAR_26[VAR_14] = 235 * (1 << (VAR_23->comp[0].depth - 8));
        VAR_26[VAR_5] = 240 * (1 << (VAR_23->comp[1].depth - 8));
        VAR_26[VAR_6] = 240 * (1 << (VAR_23->comp[2].depth - 8));
        VAR_26[VAR_0] = (1 << VAR_23->comp[0].depth) - 1;
        break;
    case 164:
    case 163:
        VAR_25[0] = VAR_25[1] = VAR_25[2] = VAR_25[3] = 0;
        VAR_26[0] = VAR_26[1] = VAR_26[2] = VAR_26[3] = 65535;
        break;
    default:
        VAR_25[0] = VAR_25[1] = VAR_25[2] = VAR_25[3] = 0;
        VAR_26[0] = VAR_26[1] = VAR_26[2] = VAR_26[3] = 255 * (1 << (VAR_23->comp[0].depth - 8));
    }

    VAR_22->is_yuv = VAR_22->is_rgb = 0;
    VAR_22->is_planar = VAR_23->flags & VAR_3;
    if (FUNC_10(VAR_20->format, VAR_19)) VAR_22->is_yuv = 1;
    else if (FUNC_10(VAR_20->format, VAR_17)) VAR_22->is_rgb = 1;

    if (VAR_22->is_rgb) {
        FUNC_9(VAR_24, VAR_20->format);
        VAR_22->step = FUNC_6(VAR_23) >> 3;
        if (VAR_22->is_16bit) {
            VAR_22->step = VAR_22->step >> 1;
        }
    }

    for (VAR_28 = 0; VAR_28 < VAR_23->nb_components; VAR_28++) {
        double VAR_30;
        int VAR_31 = VAR_22->is_rgb ? VAR_24[VAR_28] : VAR_28;


        FUNC_4(VAR_22->comp_expr[VAR_28]);
        VAR_22->comp_expr[VAR_28] = ((void*)0);
        VAR_29 = FUNC_5(&VAR_22->comp_expr[VAR_28], VAR_22->comp_expr_str[VAR_28],
                            VAR_18, VAR_16, VAR_15, ((void*)0), ((void*)0), 0, VAR_21);
        if (VAR_29 < 0) {
            FUNC_7(VAR_21, VAR_2,
                   "Error when parsing the expression '%s' for the component %d and color %d.\n",
                   VAR_22->comp_expr_str[VAR_31], VAR_31, VAR_28);
            return FUNC_0(VAR_4);
        }


        VAR_22->var_values[VAR_9] = VAR_26[VAR_28];
        VAR_22->var_values[VAR_10] = VAR_25[VAR_28];

        for (VAR_27 = 0; VAR_27 < FUNC_1(VAR_22->lut[VAR_31]); VAR_27++) {
            VAR_22->var_values[VAR_12] = VAR_27;
            VAR_22->var_values[VAR_7] = FUNC_2(VAR_27, VAR_25[VAR_28], VAR_26[VAR_28]);
            VAR_22->var_values[VAR_11] =
                FUNC_2(VAR_25[VAR_28] + VAR_26[VAR_28] - VAR_22->var_values[VAR_12],
                        VAR_25[VAR_28], VAR_26[VAR_28]);

            VAR_30 = FUNC_3(VAR_22->comp_expr[VAR_28], VAR_22->var_values, VAR_22);
            if (FUNC_11(VAR_30)) {
                FUNC_7(VAR_21, VAR_2,
                       "Error when evaluating the expression '%s' for the value %d for the component %d.\n",
                       VAR_22->comp_expr_str[VAR_28], VAR_27, VAR_31);
                return FUNC_0(VAR_4);
            }
            VAR_22->lut[VAR_31][VAR_27] = FUNC_2((int)VAR_30, 0, VAR_26[VAR_0]);
            FUNC_7(VAR_21, VAR_1, "val[%d][%d] = %d\n", VAR_31, VAR_27, VAR_22->lut[VAR_31][VAR_27]);
        }
    }

    return 0;
}
