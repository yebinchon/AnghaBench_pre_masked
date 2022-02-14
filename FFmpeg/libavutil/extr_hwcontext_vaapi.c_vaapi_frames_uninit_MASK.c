
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int attributes; } ;
typedef TYPE_2__ VAAPIFramesContext ;
struct TYPE_9__ {TYPE_1__* internal; TYPE_3__* hwctx; } ;
struct TYPE_8__ {int surface_ids; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVVAAPIFramesContext ;
typedef TYPE_4__ AVHWFramesContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVHWFramesContext *VAR_0)
{
    AVVAAPIFramesContext *VAR_1 = VAR_0->hwctx;
    VAAPIFramesContext *VAR_2 = VAR_0->internal->priv;

    FUNC_0(&VAR_1->surface_ids);
    FUNC_0(&VAR_2->attributes);
}
