
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** outputs; int * priv; } ;
struct TYPE_5__ {int h; int w; } ;
typedef int FieldMatchContext ;
typedef int const AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int const* FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int *,int const*,int const*,int) ;
 int const* FUNC_4 (TYPE_1__*,int ,int ) ;

 int VAR_0 ;




__attribute__((used)) static AVFrame *FUNC_5(AVFilterContext *VAR_1, int VAR_2, int VAR_3,
                                   const AVFrame *VAR_4, AVFrame *VAR_5, const AVFrame *VAR_6)
{
    AVFrame *VAR_7;
    FieldMatchContext *VAR_8 = VAR_1->priv;

    if (VAR_2 == VAR_0) {
        VAR_7 = FUNC_1(VAR_5);
    } else {
        AVFilterLink *VAR_9 = VAR_1->outputs[0];

        VAR_7 = FUNC_4(VAR_9, VAR_9->w, VAR_9->h);
        if (!VAR_7)
            return ((void*)0);
        FUNC_2(VAR_7, VAR_5);

        switch (VAR_2) {
        case 129: FUNC_3(VAR_8, VAR_7, VAR_5, 1-VAR_3); FUNC_3(VAR_8, VAR_7, VAR_4, VAR_3); break;
        case 130: FUNC_3(VAR_8, VAR_7, VAR_5, 1-VAR_3); FUNC_3(VAR_8, VAR_7, VAR_6, VAR_3); break;
        case 131: FUNC_3(VAR_8, VAR_7, VAR_5, VAR_3); FUNC_3(VAR_8, VAR_7, VAR_4, 1-VAR_3); break;
        case 128: FUNC_3(VAR_8, VAR_7, VAR_5, VAR_3); FUNC_3(VAR_8, VAR_7, VAR_6, 1-VAR_3); break;
        default: FUNC_0(0);
        }
    }
    return VAR_7;
}
