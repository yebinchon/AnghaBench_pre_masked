
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


struct v4l2_format_update {int v4l2_fmt; scalar_t__ update_v4l2; int av_fmt; scalar_t__ update_avfmt; } ;
struct TYPE_11__ {void* sizeimage; int pixelformat; int width; int height; } ;
struct TYPE_10__ {TYPE_1__* plane_fmt; int pixelformat; int width; int height; } ;
struct TYPE_12__ {TYPE_3__ pix; TYPE_2__ pix_mp; } ;
struct TYPE_13__ {TYPE_4__ fmt; int type; } ;
struct TYPE_14__ {int height; int width; TYPE_5__ format; int type; int av_pix_fmt; } ;
typedef TYPE_6__ V4L2Context ;
struct TYPE_9__ {void* sizeimage; } ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(V4L2Context* VAR_0, struct v4l2_format_update *VAR_1)
{
    VAR_0->format.type = VAR_0->type;

    if (VAR_1->update_avfmt)
        VAR_0->av_pix_fmt = VAR_1->av_fmt;

    if (FUNC_0(VAR_0->type)) {

        VAR_0->format.fmt.pix_mp.height = VAR_0->height;
        VAR_0->format.fmt.pix_mp.width = VAR_0->width;
        if (VAR_1->update_v4l2) {
            VAR_0->format.fmt.pix_mp.pixelformat = VAR_1->v4l2_fmt;


            VAR_0->format.fmt.pix_mp.plane_fmt[0].sizeimage =
                FUNC_1(VAR_0, VAR_0->width, VAR_0->height);
        }
    } else {
        VAR_0->format.fmt.pix.height = VAR_0->height;
        VAR_0->format.fmt.pix.width = VAR_0->width;
        if (VAR_1->update_v4l2) {
            VAR_0->format.fmt.pix.pixelformat = VAR_1->v4l2_fmt;


            VAR_0->format.fmt.pix.sizeimage =
                FUNC_1(VAR_0, VAR_0->width, VAR_0->height);
        }
    }
}
