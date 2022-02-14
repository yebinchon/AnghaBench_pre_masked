
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* home_package; } ;
struct TYPE_8__ {TYPE_2__** syms; } ;
typedef TYPE_1__ Package ;


 size_t FUNC_0 (TYPE_2__**) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(Package *VAR_0) {
    Package *VAR_1 = FUNC_1(VAR_0);
    for (size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->syms); VAR_2++) {
        if (VAR_0->syms[VAR_2]->home_package == VAR_0) {
            FUNC_3(VAR_0->syms[VAR_2]);
        }
    }
    FUNC_2(VAR_1);
}
