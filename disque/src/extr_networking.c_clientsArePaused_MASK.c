
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
typedef int client ;
struct TYPE_2__ {int clients_paused; scalar_t__ clients_pause_end_time; scalar_t__ mstime; int unblocked_clients; int clients; } ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_4(void) {
    if (VAR_0.clients_paused && VAR_0.clients_pause_end_time < VAR_0.mstime) {
        listNode *VAR_1;
        listIter VAR_2;
        client *VAR_3;

        VAR_0.clients_paused = 0;



        FUNC_3(VAR_0.clients,&VAR_2);
        while ((VAR_1 = FUNC_1(&VAR_2)) != ((void*)0)) {
            VAR_3 = FUNC_2(VAR_1);
            FUNC_0(VAR_0.unblocked_clients,VAR_3);
        }
    }
    return VAR_0.clients_paused;
}
