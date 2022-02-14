
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {float boundaryscaleV; int steps; float nuV; float* buffer; } ;
typedef TYPE_2__ GBlurContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (float*,int const,int const,int const,int const,int const,float const,float const,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    GBlurContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    const int VAR_6 = VAR_5->height;
    const int VAR_7 = VAR_5->width;
    const int VAR_8 = (VAR_7 * VAR_2 ) / VAR_3;
    const int VAR_9 = (VAR_7 * (VAR_2+1)) / VAR_3;
    const float VAR_10 = VAR_4->boundaryscaleV;
    const int VAR_11 = VAR_4->steps;
    const float VAR_12 = VAR_4->nuV;
    float *VAR_13 = VAR_4->buffer;
    int VAR_14;

    VAR_14 = VAR_8 + (((VAR_9 - VAR_8) >> 3) << 3);

    FUNC_0(VAR_13, VAR_7, VAR_6, VAR_8, VAR_14,
                        VAR_11, VAR_12, VAR_10, 8);


    FUNC_0(VAR_13, VAR_7, VAR_6, VAR_14, VAR_9,
                        VAR_11, VAR_12, VAR_10, 1);
    return 0;
}
