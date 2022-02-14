
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum dv_pack_type { ____Placeholder_dv_pack_type } dv_pack_type ;
struct TYPE_9__ {scalar_t__ pix_fmt; int dsf; int video_stype; } ;
struct TYPE_8__ {TYPE_5__* sys; TYPE_2__* avctx; TYPE_1__* frame; } ;
struct TYPE_7__ {int height; int width; int sample_aspect_ratio; } ;
struct TYPE_6__ {scalar_t__ top_field_first; } ;
typedef TYPE_3__ DVVideoContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;





__attribute__((used)) static inline int FUNC_2(enum dv_pack_type VAR_1, DVVideoContext *VAR_2,
                                uint8_t *VAR_3)
{
    uint8_t VAR_4 = 0;
    int VAR_5 = (VAR_2->sys->pix_fmt == VAR_0 ? 0 : 1);
    int VAR_6;

    if (VAR_2->avctx->height >= 720)
        VAR_6 = VAR_2->avctx->height == 720 || VAR_2->frame->top_field_first ? 0x40 : 0x00;
    else
        VAR_6 = VAR_2->frame->top_field_first ? 0x00 : 0x40;

    if (FUNC_0(VAR_2->sys) ||
        (int)(FUNC_1(VAR_2->avctx->sample_aspect_ratio) *
              VAR_2->avctx->width / VAR_2->avctx->height * 10) >= 17)

        VAR_4 = 0x02;

    VAR_3[0] = (uint8_t) VAR_1;
    switch (VAR_1) {
    case 131:
    case 130:
        VAR_3[1] = 0xf8 |
                 (VAR_5 & 0x07);
        VAR_3[2] = (0 << 7) |
                 (0x0f << 3) |
                 (VAR_5 & 0x07);
        VAR_3[3] = (0 << 7) |
                 (0x0f << 3) |
                 (VAR_5 & 0x07);
        VAR_3[4] = (0 << 7) |
                 (0x0f << 3) |
                 (VAR_5 & 0x07);
        break;
    case 128:
        VAR_3[1] = 0xff;
        VAR_3[2] = (1 << 7) |
                 (1 << 6) |
                 (3 << 4) |
                 0xf;
        VAR_3[3] = (3 << 6) |
                 (VAR_2->sys->dsf << 5) |
                 VAR_2->sys->video_stype;
        VAR_3[4] = 0xff;
        break;
    case 129:
        VAR_3[1] = (0 << 6) |
                 0x3f;
        VAR_3[2] = 0xc8 |
                 VAR_4;
        VAR_3[3] = (1 << 7) |
                 VAR_6 |
                 (1 << 5) |
                 (1 << 4) |
                 0xc;
        VAR_3[4] = 0xff;
        break;
    default:
        VAR_3[1] =
        VAR_3[2] =
        VAR_3[3] =
        VAR_3[4] = 0xff;
    }
    return 5;
}
