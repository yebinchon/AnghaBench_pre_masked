
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int fd; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {scalar_t__ maxclients; int stat_numconnections; int stat_rejected_conn; int clients; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(int VAR_3, int VAR_4) {
    client *VAR_5;
    if ((VAR_5 = FUNC_1(VAR_3)) == ((void*)0)) {
        FUNC_4(VAR_0,
            "Error registering fd event for the new client: %s (fd=%d)",
            FUNC_5(VAR_1),VAR_3);
        FUNC_0(VAR_3);
        return;
    }




    if (FUNC_3(VAR_2.clients) > VAR_2.maxclients) {
        char *VAR_6 = "-ERR max number of clients reached\r\n";


        if (FUNC_7(VAR_5->fd,VAR_6,FUNC_6(VAR_6)) == -1) {

        }
        VAR_2.stat_rejected_conn++;
        FUNC_2(VAR_5);
        return;
    }
    VAR_2.stat_numconnections++;
    VAR_5->flags |= VAR_4;
}
