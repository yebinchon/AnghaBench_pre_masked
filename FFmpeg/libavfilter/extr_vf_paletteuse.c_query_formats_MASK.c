
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
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1)
{
    static const enum AVPixelFormat VAR_2[] = {128, 130};
    static const enum AVPixelFormat VAR_3[] = {128, 130};
    static const enum AVPixelFormat VAR_4[] = {129, 130};
    int VAR_5;
    AVFilterFormats *VAR_6 = FUNC_3(VAR_2);
    AVFilterFormats *VAR_7 = FUNC_3(VAR_3);
    AVFilterFormats *VAR_8 = FUNC_3(VAR_4);
    if (!VAR_6 || !VAR_7 || !VAR_8) {
        FUNC_1(&VAR_6);
        FUNC_1(&VAR_7);
        FUNC_1(&VAR_8);
        return FUNC_0(VAR_0);
    }
    if ((VAR_5 = FUNC_2(VAR_6 , &VAR_1->inputs[0]->out_formats)) < 0 ||
        (VAR_5 = FUNC_2(VAR_7, &VAR_1->inputs[1]->out_formats)) < 0 ||
        (VAR_5 = FUNC_2(VAR_8 , &VAR_1->outputs[0]->in_formats)) < 0)
        return VAR_5;
    return 0;
}
