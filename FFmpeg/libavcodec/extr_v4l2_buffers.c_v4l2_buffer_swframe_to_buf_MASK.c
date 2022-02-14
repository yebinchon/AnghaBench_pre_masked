
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {int pixelformat; int height; } ;
struct TYPE_16__ {int pixelformat; int height; } ;
struct TYPE_18__ {TYPE_3__ pix; TYPE_2__ pix_mp; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct TYPE_20__ {int num_planes; TYPE_1__* context; } ;
typedef TYPE_6__ V4L2Buffer ;
struct TYPE_22__ {int* linesize; TYPE_10__** buf; int * data; int format; } ;
struct TYPE_21__ {int nb_components; int log2_chroma_h; TYPE_5__* comp; } ;
struct TYPE_19__ {scalar_t__ plane; } ;
struct TYPE_15__ {struct v4l2_format format; } ;
struct TYPE_14__ {int size; int data; } ;
typedef TYPE_7__ AVPixFmtDescriptor ;
typedef TYPE_8__ AVFrame ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*,int,int ,int,int,TYPE_10__*) ;

__attribute__((used)) static int FUNC_5(const AVFrame *VAR_0, V4L2Buffer *VAR_1)
{
    int VAR_2, VAR_3;
    struct v4l2_format VAR_4 = VAR_1->context->format;
    int VAR_5 = FUNC_2(VAR_4.type) ?
                       VAR_4.fmt.pix_mp.pixelformat : VAR_4.fmt.pix.pixelformat;
    int VAR_6 = FUNC_2(VAR_4.type) ?
                       VAR_4.fmt.pix_mp.height : VAR_4.fmt.pix.height;
    int VAR_7 = 0;

    switch (VAR_5) {
    case 133:
    case 130:

    case 132:


    case 129:


    case 131:


    case 128:

    case 139:
    case 135:
    case 137:
    case 138:
    case 136:
    case 134:
        VAR_7 = 1;
    }

    if (!VAR_7) {
        const AVPixFmtDescriptor *VAR_8 = FUNC_3(VAR_0->format);
        int VAR_9 = 0;
        int VAR_10 = 0;

        for (VAR_2 = 0; VAR_2 < VAR_8->nb_components; VAR_2++)
            VAR_9 = FUNC_1(VAR_9, VAR_8->comp[VAR_2].plane + 1);

        for (VAR_2 = 0; VAR_2 < VAR_9; VAR_2++) {
            int VAR_11, VAR_12 = VAR_6;
            if (VAR_2 == 1 || VAR_2 == 2) {
                VAR_12 = FUNC_0(VAR_12, VAR_8->log2_chroma_h);
            }
            VAR_11 = VAR_0->linesize[VAR_2] * VAR_12;
            VAR_3 = FUNC_4(VAR_1, 0, VAR_0->data[VAR_2], VAR_11, VAR_10, VAR_0->buf[VAR_2]);
            if (VAR_3)
                return VAR_3;
            VAR_10 += VAR_11;
        }
        return 0;
    }

    for (VAR_2 = 0; VAR_2 < VAR_1->num_planes; VAR_2++) {
        VAR_3 = FUNC_4(VAR_1, VAR_2, VAR_0->buf[VAR_2]->data, VAR_0->buf[VAR_2]->size, 0, VAR_0->buf[VAR_2]);
        if (VAR_3)
            return VAR_3;
    }

    return 0;
}
