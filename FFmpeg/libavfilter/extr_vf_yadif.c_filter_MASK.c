
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* csp; } ;
typedef TYPE_3__ YADIFContext ;
struct TYPE_15__ {int parity; int tff; int w; int h; int plane; TYPE_5__* frame; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_17__ {TYPE_2__* internal; TYPE_3__* priv; } ;
struct TYPE_16__ {int width; int height; } ;
struct TYPE_13__ {int (* execute ) (TYPE_6__*,int ,TYPE_4__*,int *,int ) ;} ;
struct TYPE_12__ {int nb_components; int log2_chroma_h; int log2_chroma_w; } ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_6__*,int ,TYPE_4__*,int *,int ) ;

__attribute__((used)) static void FUNC_5(AVFilterContext *VAR_1, AVFrame *VAR_2,
                   int VAR_3, int VAR_4)
{
    YADIFContext *VAR_5 = VAR_1->priv;
    ThreadData VAR_6 = { .frame = VAR_2, .parity = VAR_3, .tff = VAR_4 };
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_5->csp->nb_components; VAR_7++) {
        int VAR_8 = VAR_2->width;
        int VAR_9 = VAR_2->height;

        if (VAR_7 == 1 || VAR_7 == 2) {
            VAR_8 = FUNC_0(VAR_8, VAR_5->csp->log2_chroma_w);
            VAR_9 = FUNC_0(VAR_9, VAR_5->csp->log2_chroma_h);
        }


        VAR_6.w = VAR_8;
        VAR_6.h = VAR_9;
        VAR_6.plane = VAR_7;

        VAR_1->internal->execute(VAR_1, VAR_0, &VAR_6, ((void*)0), FUNC_1(VAR_9, FUNC_3(VAR_1)));
    }

    FUNC_2();
}
