
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argc; TYPE_2__** argv; int fd; int flags; } ;
typedef TYPE_1__ client ;
typedef int buf ;
struct TYPE_5__ {int type; int encoding; int refcount; scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int,char*,int,int) ;

void FUNC_4(client *VAR_2) {
    int VAR_3;

    FUNC_0();
    FUNC_2(VAR_0,"=== ASSERTION FAILED CLIENT CONTEXT ===");
    FUNC_2(VAR_0,"client->flags = %d", VAR_2->flags);
    FUNC_2(VAR_0,"client->fd = %d", VAR_2->fd);
    FUNC_2(VAR_0,"client->argc = %d", VAR_2->argc);
    for (VAR_3=0; VAR_3 < VAR_2->argc; VAR_3++) {
        char VAR_4[128];
        char *VAR_5;

        if (VAR_2->argv[VAR_3]->type == VAR_1 && FUNC_1(VAR_2->argv[VAR_3])) {
            VAR_5 = (char*) VAR_2->argv[VAR_3]->ptr;
        } else {
            FUNC_3(VAR_4,sizeof(VAR_4),"Object type: %u, encoding: %u",
                VAR_2->argv[VAR_3]->type, VAR_2->argv[VAR_3]->encoding);
            VAR_5 = VAR_4;
        }
        FUNC_2(VAR_0,"client->argv[%d] = \"%s\" (refcount: %d)",
            VAR_3, VAR_5, VAR_2->argv[VAR_3]->refcount);
    }
}
