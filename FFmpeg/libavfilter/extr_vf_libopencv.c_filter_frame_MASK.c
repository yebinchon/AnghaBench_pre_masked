
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int format; int h; int w; TYPE_3__* dst; } ;
struct TYPE_8__ {int (* end_frame_filter ) (TYPE_3__*,int *,int *) ;} ;
typedef TYPE_1__ OCVContext ;
typedef int IplImage ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    OCVContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5= VAR_1->dst->outputs[0];
    AVFrame *VAR_6;
    IplImage VAR_7, VAR_8;

    VAR_6 = FUNC_4(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_6, VAR_2);

    FUNC_6(&VAR_7 , VAR_2 , VAR_1->format);
    FUNC_6(&VAR_8, VAR_6, VAR_1->format);
    VAR_4->end_frame_filter(VAR_3, &VAR_7, &VAR_8);
    FUNC_5(VAR_6, &VAR_8, VAR_1->format);

    FUNC_2(&VAR_2);

    return FUNC_3(VAR_5, VAR_6);
}
