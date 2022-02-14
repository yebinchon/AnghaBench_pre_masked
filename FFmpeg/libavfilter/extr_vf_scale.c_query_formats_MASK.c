
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {int in_formats; } ;
struct TYPE_5__ {int out_formats; } ;
typedef int AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_1)
{
    AVFilterFormats *VAR_2;
    enum AVPixelFormat VAR_3;
    int VAR_4;

    if (VAR_1->inputs[0]) {
        const AVPixFmtDescriptor *VAR_5 = ((void*)0);
        VAR_2 = ((void*)0);
        while ((VAR_5 = FUNC_1(VAR_5))) {
            VAR_3 = FUNC_0(VAR_5);
            if ((FUNC_5(VAR_3) ||
                 FUNC_4(VAR_3))
                && (VAR_4 = FUNC_2(&VAR_2, VAR_3)) < 0) {
                return VAR_4;
            }
        }
        if ((VAR_4 = FUNC_3(VAR_2, &VAR_1->inputs[0]->out_formats)) < 0)
            return VAR_4;
    }
    if (VAR_1->outputs[0]) {
        const AVPixFmtDescriptor *VAR_6 = ((void*)0);
        VAR_2 = ((void*)0);
        while ((VAR_6 = FUNC_1(VAR_6))) {
            VAR_3 = FUNC_0(VAR_6);
            if ((FUNC_6(VAR_3) || VAR_3 == VAR_0 ||
                 FUNC_4(VAR_3))
                && (VAR_4 = FUNC_2(&VAR_2, VAR_3)) < 0) {
                return VAR_4;
            }
        }
        if ((VAR_4 = FUNC_3(VAR_2, &VAR_1->outputs[0]->in_formats)) < 0)
            return VAR_4;
    }

    return 0;
}
