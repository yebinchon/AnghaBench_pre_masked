
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {int syntaxerr; } ;
struct TYPE_7__ {char* ptr; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_3__ VAR_0 ;

void FUNC_3(client *VAR_1) {
    char *VAR_2 = VAR_1->argc == 2 ? VAR_1->argv[1]->ptr : "default";

    if (VAR_1->argc > 2) {
        FUNC_0(VAR_1,VAR_0.syntaxerr);
        return;
    }
    FUNC_1(VAR_1, FUNC_2(VAR_2));
}
