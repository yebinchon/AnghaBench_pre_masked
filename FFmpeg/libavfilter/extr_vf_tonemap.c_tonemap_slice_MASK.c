
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TonemapContext ;
struct TYPE_7__ {double peak; int * desc; TYPE_2__* out; TYPE_2__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {int * priv; } ;
struct TYPE_8__ {int height; int width; } ;
typedef int AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *,TYPE_2__*,TYPE_2__*,int const*,int,int,double) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    TonemapContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    const AVPixFmtDescriptor *VAR_8 = VAR_5->desc;
    const int VAR_9 = (VAR_6->height * VAR_2) / VAR_3;
    const int VAR_10 = (VAR_6->height * (VAR_2+1)) / VAR_3;
    double VAR_11 = VAR_5->peak;

    for (int VAR_12 = VAR_9; VAR_12 < VAR_10; VAR_12++)
        for (int VAR_13 = 0; VAR_13 < VAR_7->width; VAR_13++)
            FUNC_0(VAR_4, VAR_7, VAR_6, VAR_8, VAR_13, VAR_12, VAR_11);

    return 0;
}
