
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_12__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_11__ {int flags; int log2_chroma_h; scalar_t__ nb_components; } ;
struct TYPE_10__ {int in_formats; } ;
struct TYPE_9__ {int out_formats; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_3)
{
    AVFilterFormats *VAR_4;
    enum AVPixelFormat VAR_5;
    int VAR_6;



    if (VAR_3->inputs[0]) {
        const AVPixFmtDescriptor *VAR_7 = ((void*)0);
        VAR_4 = ((void*)0);
        while ((VAR_7 = FUNC_1(VAR_7))) {
            VAR_5 = FUNC_0(VAR_7);
            if (!(VAR_7->flags & VAR_1 ||
                  VAR_7->flags & VAR_2 ||
                  VAR_7->flags & VAR_0) &&
                VAR_7->nb_components && !VAR_7->log2_chroma_h &&
                (VAR_6 = FUNC_2(&VAR_4, VAR_5)) < 0)
                return VAR_6;
        }
        if ((VAR_6 = FUNC_3(VAR_4, &VAR_3->inputs[0]->out_formats)) < 0 ||
            (VAR_6 = FUNC_3(VAR_4, &VAR_3->outputs[0]->in_formats)) < 0)
            return VAR_6;
    }

    return 0;
}
