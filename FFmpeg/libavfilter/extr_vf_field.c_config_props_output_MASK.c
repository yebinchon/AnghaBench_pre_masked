
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {int h; int w; int format; TYPE_3__* src; } ;
struct TYPE_6__ {scalar_t__ type; int nb_planes; } ;
typedef TYPE_1__ FieldContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int ,int,char*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    FieldContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->inputs[0];

    VAR_5->nb_planes = FUNC_1(VAR_3->format);

    VAR_3->w = VAR_6->w;
    VAR_3->h = (VAR_6->h + (VAR_5->type == VAR_2)) / 2;

    FUNC_0(VAR_4, VAR_0, "w:%d h:%d type:%s -> w:%d h:%d\n",
           VAR_6->w, VAR_6->h, VAR_5->type == VAR_1 ? "bottom" : "top",
           VAR_3->w, VAR_3->h);
    return 0;
}
