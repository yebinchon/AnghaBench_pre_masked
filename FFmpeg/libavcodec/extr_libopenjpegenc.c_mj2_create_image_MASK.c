
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int x1; int y1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_16__ {int dx; int dy; int w; int h; scalar_t__ sgnd; int bpp; int prec; int member_0; } ;
typedef TYPE_3__ opj_image_cmptparm_t ;
struct TYPE_17__ {int subsampling_dx; int subsampling_dy; } ;
typedef TYPE_4__ opj_cparameters_t ;
struct TYPE_19__ {int pix_fmt; int width; int height; } ;
struct TYPE_18__ {int log2_chroma_w; int log2_chroma_h; int nb_components; TYPE_1__* comp; } ;
struct TYPE_14__ {int depth; } ;
typedef int OPJ_COLOR_SPACE ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int ,char*,int ) ;
 TYPE_5__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int,TYPE_3__*,int ) ;

__attribute__((used)) static opj_image_t *FUNC_4(AVCodecContext *VAR_5, opj_cparameters_t *VAR_6)
{
    const AVPixFmtDescriptor *VAR_7 = FUNC_2(VAR_5->pix_fmt);
    opj_image_cmptparm_t VAR_8[4] = {{0}};
    opj_image_t *VAR_9;
    int VAR_10;
    int VAR_11[4];
    int VAR_12[4];
    int VAR_13;
    OPJ_COLOR_SPACE VAR_14 = VAR_4;

    VAR_11[0] = VAR_11[3] = 1;
    VAR_12[0] = VAR_12[3] = 1;
    VAR_11[1] = VAR_11[2] = 1 << VAR_7->log2_chroma_w;
    VAR_12[1] = VAR_12[2] = 1 << VAR_7->log2_chroma_h;

    VAR_13 = VAR_7->nb_components;

    switch (VAR_5->pix_fmt) {
    case 168:
    case 161:
    case 172:
    case 171:
    case 170:
    case 169:
    case 162:
        VAR_14 = VAR_1;
        break;
    case 167:
    case 165:
    case 166:
    case 164:
    case 178:
    case 173:
    case 177:
    case 176:
    case 175:
    case 174:
    case 163:
        VAR_14 = VAR_2;
        break;
    case 160:
    case 159:
    case 158:
    case 152:
    case 146:
    case 145:
    case 139:
    case 135:
    case 131:
    case 153:
    case 147:
    case 140:
    case 136:
    case 132:
    case 128:
    case 157:
    case 151:
    case 144:
    case 138:
    case 134:
    case 130:
    case 156:
    case 150:
    case 143:
    case 155:
    case 149:
    case 142:
    case 154:
    case 148:
    case 141:
    case 137:
    case 133:
    case 129:
        VAR_14 = VAR_3;
        break;
    default:
        FUNC_1(VAR_5, VAR_0,
               "The requested pixel format '%s' is not supported\n",
               FUNC_0(VAR_5->pix_fmt));
        return ((void*)0);
    }

    for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
        VAR_8[VAR_10].prec = VAR_7->comp[VAR_10].depth;
        VAR_8[VAR_10].bpp = VAR_7->comp[VAR_10].depth;
        VAR_8[VAR_10].sgnd = 0;
        VAR_8[VAR_10].dx = VAR_11[VAR_10];
        VAR_8[VAR_10].dy = VAR_12[VAR_10];
        VAR_8[VAR_10].w = (VAR_5->width + VAR_11[VAR_10] - 1) / VAR_11[VAR_10];
        VAR_8[VAR_10].h = (VAR_5->height + VAR_12[VAR_10] - 1) / VAR_12[VAR_10];
    }

    VAR_9 = FUNC_3(VAR_13, VAR_8, VAR_14);

    if (!VAR_9)
        return ((void*)0);



    VAR_9->x0 = 0;
    VAR_9->y0 = 0;
    VAR_9->x1 = (VAR_5->width - 1) * VAR_6->subsampling_dx + 1;
    VAR_9->y1 = (VAR_5->height - 1) * VAR_6->subsampling_dy + 1;

    return VAR_9;
}
