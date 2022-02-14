
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ current_field; TYPE_1__* csp; } ;
typedef TYPE_3__ YADIFContext ;
struct TYPE_16__ {int parity; int tff; int w; int h; int plane; TYPE_6__* frame; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_19__ {TYPE_2__* internal; TYPE_5__* priv; } ;
struct TYPE_18__ {int width; int height; } ;
struct TYPE_17__ {TYPE_3__ yadif; } ;
struct TYPE_14__ {int (* execute ) (TYPE_7__*,int ,TYPE_4__*,int *,int ) ;} ;
struct TYPE_13__ {int nb_components; int log2_chroma_h; int log2_chroma_w; } ;
typedef TYPE_5__ BWDIFContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_7__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_7__*,int ,TYPE_4__*,int *,int ) ;

__attribute__((used)) static void FUNC_5(AVFilterContext *VAR_3, AVFrame *VAR_4,
                   int VAR_5, int VAR_6)
{
    BWDIFContext *VAR_7 = VAR_3->priv;
    YADIFContext *VAR_8 = &VAR_7->yadif;
    ThreadData VAR_9 = { .frame = VAR_4, .parity = VAR_5, .tff = VAR_6 };
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_8->csp->nb_components; VAR_10++) {
        int VAR_11 = VAR_4->width;
        int VAR_12 = VAR_4->height;

        if (VAR_10 == 1 || VAR_10 == 2) {
            VAR_11 = FUNC_0(VAR_11, VAR_8->csp->log2_chroma_w);
            VAR_12 = FUNC_0(VAR_12, VAR_8->csp->log2_chroma_h);
        }

        VAR_9.w = VAR_11;
        VAR_9.h = VAR_12;
        VAR_9.plane = VAR_10;

        VAR_3->internal->execute(VAR_3, VAR_2, &VAR_9, ((void*)0), FUNC_1(VAR_12, FUNC_3(VAR_3)));
    }
    if (VAR_8->current_field == VAR_0) {
        VAR_8->current_field = VAR_1;
    }

    FUNC_2();
}
