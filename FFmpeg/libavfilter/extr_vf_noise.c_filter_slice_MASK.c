
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* in; TYPE_1__* out; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_12__ {TYPE_4__* priv; } ;
struct TYPE_11__ {int nb_planes; int* height; int * bytewidth; } ;
struct TYPE_9__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_8__ {int const* linesize; scalar_t__* data; } ;
typedef TYPE_4__ NoiseContext ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (scalar_t__,scalar_t__,int const,int const,int ,int const,int const,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    NoiseContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_planes; VAR_6++) {
        const int VAR_7 = VAR_4->height[VAR_6];
        const int VAR_8 = (VAR_7 * VAR_2 ) / VAR_3;
        const int VAR_9 = (VAR_7 * (VAR_2+1)) / VAR_3;
        FUNC_0(VAR_5->out->data[VAR_6] + VAR_8 * VAR_5->out->linesize[VAR_6],
              VAR_5->in->data[VAR_6] + VAR_8 * VAR_5->in->linesize[VAR_6],
              VAR_5->out->linesize[VAR_6], VAR_5->in->linesize[VAR_6],
              VAR_4->bytewidth[VAR_6], VAR_8, VAR_9, VAR_4, VAR_6);
    }
    return 0;
}
