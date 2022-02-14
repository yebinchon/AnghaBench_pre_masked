
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; TYPE_1__* home_package; } ;
struct TYPE_5__ {char* path; } ;


 size_t FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 TYPE_2__** VAR_1 ;

void FUNC_3(void) {
    if (VAR_0) {
        FUNC_2("Finalizing reachable symbols\n");
    }
    size_t VAR_2 = 0;
    size_t VAR_3 = FUNC_0(VAR_1);
    for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        FUNC_1(VAR_1[VAR_4]);
        if (VAR_4 == VAR_3 - 1) {
            if (VAR_0) {
                FUNC_2("New reachable symbols:");
                for (size_t VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5++) {
                    FUNC_2(" %s/%s", VAR_1[VAR_5]->home_package->path, VAR_1[VAR_5]->name);
                }
                FUNC_2("\n");
            }
            VAR_2 = VAR_3;
            VAR_3 = FUNC_0(VAR_1);
        }
    }
}
