
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum InterpolateMethod { ____Placeholder_InterpolateMethod } InterpolateMethod ;
typedef enum FillMethod { ____Placeholder_FillMethod } FillMethod ;
struct TYPE_4__ {int * linesize; int * data; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFilterContext ;


 int FUNC_0 (int ,int ,int ,int ,int,int,float const*,int,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0,
                                    int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                    const float *VAR_5, const float *VAR_6,
                                    enum InterpolateMethod VAR_7,
                                    enum FillMethod VAR_8, AVFrame *VAR_9, AVFrame *VAR_10)
{
    int VAR_11 = 0, VAR_12 = 0;
    const float *VAR_13[3];
    int VAR_14[3], VAR_15[3];
    VAR_13[0] = VAR_5;
    VAR_13[1] = VAR_13[2] = VAR_6;
    VAR_14[0] = VAR_1;
    VAR_14[1] = VAR_14[2] = VAR_3;
    VAR_15[0] = VAR_2;
    VAR_15[1] = VAR_15[2] = VAR_4;

    for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {

        VAR_12 = FUNC_0(VAR_9->data[VAR_11], VAR_10->data[VAR_11], VAR_9->linesize[VAR_11], VAR_10->linesize[VAR_11],
                                 VAR_14[VAR_11], VAR_15[VAR_11], VAR_13[VAR_11], VAR_7, VAR_8);
        if (VAR_12 < 0)
            return VAR_12;
    }
    return VAR_12;
}
