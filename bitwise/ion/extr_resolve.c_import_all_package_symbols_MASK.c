
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* name; TYPE_1__* home_package; } ;
struct TYPE_5__ {TYPE_2__** syms; } ;
typedef TYPE_1__ Package ;


 size_t FUNC_0 (TYPE_2__**) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*,TYPE_2__*) ;

void FUNC_3(Package *VAR_0) {

    const char *VAR_1 = FUNC_1("main");
    for (size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->syms); VAR_2++) {
        if (VAR_0->syms[VAR_2]->home_package == VAR_0 && VAR_0->syms[VAR_2]->name != VAR_1) {
            FUNC_2(VAR_0->syms[VAR_2]->name, VAR_0->syms[VAR_2]);
        }
    }
}
