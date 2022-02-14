
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int width; int height; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_16__ {TYPE_1__* internal; TYPE_3__* priv; } ;
struct TYPE_15__ {int* planewidth; int* planeheight; scalar_t__ sigma; scalar_t__ steps; } ;
struct TYPE_13__ {int (* execute ) (TYPE_4__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ GBlurContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_5(AVFilterContext *VAR_3, int VAR_4)
{
    GBlurContext *VAR_5 = VAR_3->priv;
    const int VAR_6 = VAR_5->planewidth[VAR_4];
    const int VAR_7 = VAR_5->planeheight[VAR_4];
    const int VAR_8 = FUNC_1(VAR_3);
    ThreadData VAR_9;

    if (VAR_5->sigma <= 0 || VAR_5->steps < 0)
        return;

    VAR_9.width = VAR_6;
    VAR_9.height = VAR_7;
    VAR_3->internal->execute(VAR_3, VAR_0, &VAR_9, ((void*)0), FUNC_0(VAR_7, VAR_8));
    VAR_3->internal->execute(VAR_3, VAR_2, &VAR_9, ((void*)0), FUNC_0(VAR_6, VAR_8));
    VAR_3->internal->execute(VAR_3, VAR_1, &VAR_9, ((void*)0), FUNC_0(VAR_6 * VAR_7, VAR_8));
}
