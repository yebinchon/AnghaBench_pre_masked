
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* input_pads; TYPE_2__* priv; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ LoopContext ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_2)
{
    LoopContext *VAR_3 = VAR_2->priv;

    if (!VAR_3->size)
        FUNC_0(VAR_2, VAR_1, "Number of %s to loop is not set!\n",
               VAR_2->input_pads[0].type == VAR_0 ? "frames" : "samples");
}
