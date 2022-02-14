
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_18__ {int num_planes; TYPE_5__* context; TYPE_1__* plane_info; } ;
typedef TYPE_6__ V4L2Buffer ;
struct TYPE_19__ {int format; int* linesize; int* data; TYPE_11__** buf; } ;
struct TYPE_14__ {int height; } ;
struct TYPE_15__ {TYPE_2__ pix_mp; } ;
struct TYPE_16__ {TYPE_3__ fmt; } ;
struct TYPE_17__ {int av_pix_fmt; TYPE_4__ format; } ;
struct TYPE_13__ {int bytesperline; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_7__ AVFrame ;





 int FUNC_0 (TYPE_6__*,int,TYPE_11__**) ;

__attribute__((used)) static int FUNC_1(AVFrame *VAR_0, V4L2Buffer *VAR_1)
{
    int VAR_2, VAR_3;

    VAR_0->format = VAR_1->context->av_pix_fmt;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_planes; VAR_2++) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_0->buf[VAR_2]);
        if (VAR_3)
            return VAR_3;

        VAR_0->linesize[VAR_2] = VAR_1->plane_info[VAR_2].bytesperline;
        VAR_0->data[VAR_2] = VAR_0->buf[VAR_2]->data;
    }


    switch (VAR_1->context->av_pix_fmt) {
    case 130:
    case 129:
        if (VAR_1->num_planes > 1)
            break;
        VAR_0->linesize[1] = VAR_1->plane_info[0].bytesperline;
        VAR_0->data[1] = VAR_0->buf[0]->data + VAR_1->plane_info[0].bytesperline * VAR_1->context->format.fmt.pix_mp.height;
        break;

    case 128:
        if (VAR_1->num_planes > 1)
            break;
        VAR_0->linesize[1] = VAR_1->plane_info[0].bytesperline >> 1;
        VAR_0->linesize[2] = VAR_1->plane_info[0].bytesperline >> 1;
        VAR_0->data[1] = VAR_0->buf[0]->data + VAR_1->plane_info[0].bytesperline * VAR_1->context->format.fmt.pix_mp.height;
        VAR_0->data[2] = VAR_0->data[1] + ((VAR_1->plane_info[0].bytesperline * VAR_1->context->format.fmt.pix_mp.height) >> 2);
        break;

    default:
        break;
    }

    return 0;
}
