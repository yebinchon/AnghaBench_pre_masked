
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const int64_t ;
struct TYPE_5__ {int height; int width; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int depth; float postscale; float postscaleV; float* buffer; } ;
typedef TYPE_2__ GBlurContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float,float,float const) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    GBlurContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    const float VAR_6 = (1 << VAR_4->depth) - 1;
    const int VAR_7 = VAR_5->height;
    const int VAR_8 = VAR_5->width;
    const int64_t VAR_9 = VAR_8 * (int64_t)VAR_7;
    const unsigned VAR_10 = (VAR_9 * VAR_2 ) / VAR_3;
    const unsigned VAR_11 = (VAR_9 * (VAR_2+1)) / VAR_3;
    const float VAR_12 = VAR_4->postscale * VAR_4->postscaleV;
    float *VAR_13 = VAR_4->buffer;
    unsigned VAR_14;

    for (VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14++) {
        VAR_13[VAR_14] *= VAR_12;
        VAR_13[VAR_14] = FUNC_0(VAR_13[VAR_14], 0.f, VAR_6);
    }

    return 0;
}
