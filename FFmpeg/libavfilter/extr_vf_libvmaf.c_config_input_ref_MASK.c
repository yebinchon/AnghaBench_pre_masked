
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_9__ {int format; TYPE_4__* dst; } ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; int vmaf_thread_created; int vmaf_thread; int desc; } ;
struct TYPE_7__ {scalar_t__ w; scalar_t__ h; scalar_t__ format; } ;
typedef TYPE_2__ LIBVMAFContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ,void*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    LIBVMAFContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    if (VAR_4->inputs[0]->w != VAR_4->inputs[1]->w ||
        VAR_4->inputs[0]->h != VAR_4->inputs[1]->h) {
        FUNC_1(VAR_4, VAR_0, "Width and height of input videos must be same.\n");
        return FUNC_0(VAR_1);
    }
    if (VAR_4->inputs[0]->format != VAR_4->inputs[1]->format) {
        FUNC_1(VAR_4, VAR_0, "Inputs must be of same pixel format.\n");
        return FUNC_0(VAR_1);
    }

    VAR_5->desc = FUNC_2(VAR_3->format);
    VAR_5->width = VAR_4->inputs[0]->w;
    VAR_5->height = VAR_4->inputs[0]->h;

    VAR_6 = FUNC_3(&VAR_5->vmaf_thread, ((void*)0), VAR_2, (void *) VAR_5);
    if (VAR_6) {
        FUNC_1(VAR_4, VAR_0, "Thread creation failed.\n");
        return FUNC_0(VAR_1);
    }
    VAR_5->vmaf_thread_created = 1;

    return 0;
}
