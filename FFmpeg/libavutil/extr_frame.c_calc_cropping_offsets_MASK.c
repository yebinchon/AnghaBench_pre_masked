
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int plane; int step; } ;
struct TYPE_7__ {int crop_top; int* linesize; int crop_left; scalar_t__* data; } ;
struct TYPE_6__ {int log2_chroma_w; int log2_chroma_h; int flags; int nb_components; TYPE_3__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVComponentDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(size_t VAR_3[4], const AVFrame *VAR_4,
                                 const AVPixFmtDescriptor *VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_4->data[VAR_6]; VAR_6++) {
        const AVComponentDescriptor *VAR_8 = ((void*)0);
        int VAR_9 = (VAR_6 == 1 || VAR_6 == 2) ? VAR_5->log2_chroma_w : 0;
        int VAR_10 = (VAR_6 == 1 || VAR_6 == 2) ? VAR_5->log2_chroma_h : 0;

        if (VAR_5->flags & (VAR_1 | VAR_2) && VAR_6 == 1) {
            VAR_3[VAR_6] = 0;
            break;
        }


        for (VAR_7 = 0; VAR_7 < VAR_5->nb_components; VAR_7++) {
            if (VAR_5->comp[VAR_7].plane == VAR_6) {
                VAR_8 = &VAR_5->comp[VAR_7];
                break;
            }
        }
        if (!VAR_8)
            return VAR_0;

        VAR_3[VAR_6] = (VAR_4->crop_top >> VAR_10) * VAR_4->linesize[VAR_6] +
                     (VAR_4->crop_left >> VAR_9) * VAR_8->step;
    }

    return 0;
}
