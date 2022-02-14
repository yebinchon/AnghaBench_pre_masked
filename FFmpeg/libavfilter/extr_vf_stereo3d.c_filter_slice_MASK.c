
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* out; TYPE_6__* iright; TYPE_6__* ileft; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_15__ {TYPE_5__* priv; } ;
struct TYPE_14__ {int* linesize; scalar_t__* data; } ;
struct TYPE_11__ {int height; int width; } ;
struct TYPE_10__ {int row_step; } ;
struct TYPE_9__ {int (* anaglyph ) (scalar_t__,scalar_t__,scalar_t__,int,int,int,int ,int,int const*,int const*,int const*) ;} ;
struct TYPE_13__ {int** ana_matrix; TYPE_3__ out; TYPE_2__ in; scalar_t__* in_off_right; scalar_t__* in_off_left; TYPE_1__ dsp; } ;
typedef TYPE_5__ Stereo3DContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int,int,int,int ,int,int const*,int const*,int const*) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    Stereo3DContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->ileft;
    AVFrame *VAR_7 = VAR_5->iright;
    AVFrame *VAR_8 = VAR_5->out;
    int VAR_9 = VAR_4->out.height;
    int VAR_10 = (VAR_9 * VAR_2 ) / VAR_3;
    int VAR_11 = (VAR_9 * (VAR_2+1)) / VAR_3;
    const int **VAR_12 = VAR_4->ana_matrix;

    VAR_4->dsp.anaglyph(VAR_8->data[0] + VAR_8->linesize[0] * VAR_10,
             VAR_6 ->data[0] + VAR_4->in_off_left [0] + VAR_6->linesize[0] * VAR_10 * VAR_4->in.row_step,
             VAR_7->data[0] + VAR_4->in_off_right[0] + VAR_7->linesize[0] * VAR_10 * VAR_4->in.row_step,
             VAR_8->linesize[0],
             VAR_6->linesize[0] * VAR_4->in.row_step,
             VAR_7->linesize[0] * VAR_4->in.row_step,
             VAR_4->out.width, VAR_11 - VAR_10,
             VAR_12[0], VAR_12[1], VAR_12[2]);

    return 0;
}
