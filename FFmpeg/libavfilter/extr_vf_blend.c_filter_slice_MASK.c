
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int h; size_t plane; double w; TYPE_6__* param; TYPE_4__* dst; TYPE_3__* bottom; TYPE_2__* top; TYPE_1__* inlink; } ;
typedef TYPE_5__ ThreadData ;
struct TYPE_12__ {int (* blend ) (int const*,int,int const*,int,int *,int,double,int,TYPE_6__*,double*,int) ;} ;
struct TYPE_10__ {double pts; int* linesize; scalar_t__ height; scalar_t__ width; int ** data; } ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_8__ {int* linesize; int ** data; } ;
struct TYPE_7__ {double frame_count_out; int time_base; } ;
typedef int AVFilterContext ;


 double VAR_0 ;
 double VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 double FUNC_0 (int ) ;
 int FUNC_1 (int const*,int,int const*,int,int *,int,double,int,TYPE_6__*,double*,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_9, void *VAR_10, int VAR_11, int VAR_12)
{
    ThreadData *VAR_13 = VAR_10;
    int VAR_14 = (VAR_13->h * VAR_11 ) / VAR_12;
    int VAR_15 = (VAR_13->h * (VAR_11+1)) / VAR_12;
    int VAR_16 = VAR_15 - VAR_14;
    const uint8_t *VAR_17 = VAR_13->top->data[VAR_13->plane];
    const uint8_t *VAR_18 = VAR_13->bottom->data[VAR_13->plane];
    uint8_t *VAR_19 = VAR_13->dst->data[VAR_13->plane];
    double VAR_20[VAR_7];

    VAR_20[VAR_3] = VAR_13->inlink->frame_count_out;
    VAR_20[VAR_6] = VAR_13->dst->pts == VAR_0 ? VAR_1 : VAR_13->dst->pts * FUNC_0(VAR_13->inlink->time_base);
    VAR_20[VAR_8] = VAR_13->w;
    VAR_20[VAR_2] = VAR_13->h;
    VAR_20[VAR_5] = VAR_13->w / (double)VAR_13->dst->width;
    VAR_20[VAR_4] = VAR_13->h / (double)VAR_13->dst->height;

    VAR_13->param->blend(VAR_17 + VAR_14 * VAR_13->top->linesize[VAR_13->plane],
                     VAR_13->top->linesize[VAR_13->plane],
                     VAR_18 + VAR_14 * VAR_13->bottom->linesize[VAR_13->plane],
                     VAR_13->bottom->linesize[VAR_13->plane],
                     VAR_19 + VAR_14 * VAR_13->dst->linesize[VAR_13->plane],
                     VAR_13->dst->linesize[VAR_13->plane],
                     VAR_13->w, VAR_16, VAR_13->param, &VAR_20[0], VAR_14);
    return 0;
}
