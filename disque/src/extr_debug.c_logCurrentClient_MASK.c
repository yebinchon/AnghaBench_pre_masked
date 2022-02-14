
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sds ;
struct TYPE_7__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_8__ {int argc; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {TYPE_2__* current_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(void) {
    if (VAR_1.current_client == ((void*)0)) return;

    client *VAR_2 = VAR_1.current_client;
    sds VAR_3;
    int VAR_4;

    FUNC_5(VAR_0, "--- CURRENT CLIENT INFO");
    VAR_3 = FUNC_0(FUNC_3(),VAR_2);
    FUNC_5(VAR_0,"client: %s", VAR_3);
    FUNC_4(VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_2->argc; VAR_4++) {
        robj *VAR_5;

        VAR_5 = FUNC_2(VAR_2->argv[VAR_4]);
        FUNC_5(VAR_0,"argv[%d]: '%s'", VAR_4, (char*)VAR_5->ptr);
        FUNC_1(VAR_5);
    }
}
