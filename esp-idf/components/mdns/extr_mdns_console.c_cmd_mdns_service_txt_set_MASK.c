
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* value; TYPE_3__* var; TYPE_2__* proto; TYPE_1__* service; int end; } ;
struct TYPE_9__ {int * sval; } ;
struct TYPE_8__ {int * sval; } ;
struct TYPE_7__ {int * sval; } ;
struct TYPE_6__ {int * sval; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2, char** VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2, VAR_3, (void**) &VAR_0);
    if (VAR_4 != 0) {
        FUNC_2(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    if (!VAR_0.service->sval[0] || !VAR_0.proto->sval[0] || !VAR_0.var->sval[0]) {
        FUNC_4("ERROR: Bad arguments!\n");
        return 1;
    }

    FUNC_0( FUNC_3(VAR_0.service->sval[0], VAR_0.proto->sval[0], VAR_0.var->sval[0], VAR_0.value->sval[0]) );
    return 0;
}
