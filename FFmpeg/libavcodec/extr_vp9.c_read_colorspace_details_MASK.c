
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
struct TYPE_9__ {int bpp; } ;
struct TYPE_10__ {TYPE_1__ h; } ;
struct TYPE_13__ {int bpp_index; int bytesperpixel; size_t ss_h; size_t ss_v; int pix_fmt; int gb; TYPE_2__ s; } ;
typedef TYPE_5__ VP9Context ;
struct TYPE_14__ {int profile; int colorspace; void* color_range; TYPE_5__* priv_data; } ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_11__ {int member_1; int member_0; } ;
typedef TYPE_6__ AVCodecContext ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ,char*,...) ;
 size_t FUNC_1 (int *,int) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4)
{
    static const enum AVColorSpace VAR_5[8] = {
        143, 149, 148, 145,
        144, 150, 147, 146,
    };
    VP9Context *VAR_6 = VAR_4->priv_data;
    int VAR_7 = VAR_4->profile <= 1 ? 0 : 1 + FUNC_2(&VAR_6->gb);

    VAR_6->bpp_index = VAR_7;
    VAR_6->s.h.bpp = 8 + VAR_7 * 2;
    VAR_6->bytesperpixel = (7 + VAR_6->s.h.bpp) >> 3;
    VAR_4->colorspace = VAR_5[FUNC_1(&VAR_6->gb, 3)];
    if (VAR_4->colorspace == 146) {
        static const enum AVPixelFormat VAR_8[3] = {
            142, 141, 140
        };
        VAR_6->ss_h = VAR_6->ss_v = 0;
        VAR_4->color_range = VAR_0;
        VAR_6->pix_fmt = VAR_8[VAR_7];
        if (VAR_4->profile & 1) {
            if (FUNC_2(&VAR_6->gb)) {
                FUNC_0(VAR_4, VAR_3, "Reserved bit set in RGB\n");
                return VAR_2;
            }
        } else {
            FUNC_0(VAR_4, VAR_3, "RGB not supported in profile %d\n",
                   VAR_4->profile);
            return VAR_2;
        }
    } else {
        static const enum AVPixelFormat VAR_9[3][2 ][2 ] = {
            { { 130, 136 },
              { 133, 139 } },
            { { 129, 135 },
              { 132, 138 } },
            { { 128, 134 },
              { 131, 137 } }
        };
        VAR_4->color_range = FUNC_2(&VAR_6->gb) ? VAR_0 : VAR_1;
        if (VAR_4->profile & 1) {
            VAR_6->ss_h = FUNC_2(&VAR_6->gb);
            VAR_6->ss_v = FUNC_2(&VAR_6->gb);
            VAR_6->pix_fmt = VAR_9[VAR_7][VAR_6->ss_v][VAR_6->ss_h];
            if (VAR_6->pix_fmt == 139) {
                FUNC_0(VAR_4, VAR_3, "YUV 4:2:0 not supported in profile %d\n",
                       VAR_4->profile);
                return VAR_2;
            } else if (FUNC_2(&VAR_6->gb)) {
                FUNC_0(VAR_4, VAR_3, "Profile %d color details reserved bit set\n",
                       VAR_4->profile);
                return VAR_2;
            }
        } else {
            VAR_6->ss_h = VAR_6->ss_v = 1;
            VAR_6->pix_fmt = VAR_9[VAR_7][1][1];
        }
    }

    return 0;
}
