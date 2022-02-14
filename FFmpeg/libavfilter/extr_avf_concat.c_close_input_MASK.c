
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* input_pads; TYPE_3__* priv; } ;
struct TYPE_9__ {int nb_in_active; TYPE_1__* in; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int eof; } ;
typedef TYPE_3__ ConcatContext ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_1, unsigned VAR_2)
{
    ConcatContext *VAR_3 = VAR_1->priv;

    VAR_3->in[VAR_2].eof = 1;
    VAR_3->nb_in_active--;
    FUNC_0(VAR_1, VAR_0, "EOF on %s, %d streams left in segment.\n",
           VAR_1->input_pads[VAR_2].name, VAR_3->nb_in_active);
}
