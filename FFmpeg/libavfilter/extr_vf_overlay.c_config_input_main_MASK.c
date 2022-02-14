
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int format; TYPE_1__* dst; } ;
struct TYPE_11__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_10__ {int main_is_packed_rgb; int format; int main_has_alpha; int alpha_format; void* blend_slice; int main_rgba_map; TYPE_3__ const* main_desc; int vsub; int hsub; int main_pix_step; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_2__ OverlayContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_3__ const*) ;
 TYPE_3__* FUNC_2 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_22)
{
    OverlayContext *VAR_23 = VAR_22->dst->priv;
    const AVPixFmtDescriptor *VAR_24 = FUNC_2(VAR_22->format);

    FUNC_1(VAR_23->main_pix_step, ((void*)0), VAR_24);

    VAR_23->hsub = VAR_24->log2_chroma_w;
    VAR_23->vsub = VAR_24->log2_chroma_h;

    VAR_23->main_desc = VAR_24;

    VAR_23->main_is_packed_rgb =
        FUNC_3(VAR_23->main_rgba_map, VAR_22->format) >= 0;
    VAR_23->main_has_alpha = FUNC_4(VAR_22->format, VAR_1);
    switch (VAR_23->format) {
    case 130:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_16 : VAR_10;
        break;
    case 129:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_18 : VAR_12;
        break;
    case 128:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_20 : VAR_14;
        break;
    case 131:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_8 : VAR_6;
        break;
    case 132:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_2 : VAR_4;
        break;
    case 133:
        switch (VAR_22->format) {
        case 136:
            VAR_23->blend_slice = VAR_16;
            break;
        case 135:
            VAR_23->blend_slice = VAR_18;
            break;
        case 134:
            VAR_23->blend_slice = VAR_20;
            break;
        case 140:
        case 137:
        case 139:
        case 141:
            VAR_23->blend_slice = VAR_8;
            break;
        case 138:
            VAR_23->blend_slice = VAR_2;
            break;
        default:
            FUNC_0(0);
            break;
        }
        break;
    }

    if (!VAR_23->alpha_format)
        goto end;

    switch (VAR_23->format) {
    case 130:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_17 : VAR_11;
        break;
    case 129:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_19 : VAR_13;
        break;
    case 128:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_21 : VAR_15;
        break;
    case 131:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_9 : VAR_7;
        break;
    case 132:
        VAR_23->blend_slice = VAR_23->main_has_alpha ? VAR_3 : VAR_5;
        break;
    case 133:
        switch (VAR_22->format) {
        case 136:
            VAR_23->blend_slice = VAR_17;
            break;
        case 135:
            VAR_23->blend_slice = VAR_19;
            break;
        case 134:
            VAR_23->blend_slice = VAR_21;
            break;
        case 140:
        case 137:
        case 139:
        case 141:
            VAR_23->blend_slice = VAR_9;
            break;
        case 138:
            VAR_23->blend_slice = VAR_3;
            break;
        default:
            FUNC_0(0);
            break;
        }
        break;
    }

end:
    if (VAR_0)
        FUNC_5(VAR_23, VAR_23->format, VAR_22->format,
                            VAR_23->alpha_format, VAR_23->main_has_alpha);

    return 0;
}
