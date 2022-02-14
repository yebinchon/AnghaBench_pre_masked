
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* frame; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {void* tmp_frame; TYPE_4__* stages; } ;
typedef TYPE_1__ NPPTransposeContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    NPPTransposeContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2->stages); VAR_3++) {
        VAR_2->stages[VAR_3].frame = FUNC_2();
        if (!VAR_2->stages[VAR_3].frame)
            return FUNC_0(VAR_0);
    }

    VAR_2->tmp_frame = FUNC_2();
    if (!VAR_2->tmp_frame)
        return FUNC_0(VAR_0);

    return 0;
}
