
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int fontfile; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    DrawTextContext *VAR_1 = VAR_0->priv;
    int VAR_2;


    VAR_2 = FUNC_0(VAR_0, VAR_1->fontfile, 0);
    if (!VAR_2)
        return 0;





    return VAR_2;
}
