
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int listNode ;
struct TYPE_5__ {int fd; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int unblocked_clients; int clients_pending_write; int el; int clients; TYPE_1__* current_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,TYPE_1__*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (int ) ;

void FUNC_5(client *VAR_5) {
    listNode *VAR_6;


    if (VAR_4.current_client == VAR_5) VAR_4.current_client = ((void*)0);




    if (VAR_5->fd != -1) {

        VAR_6 = FUNC_3(VAR_4.clients,VAR_5);
        FUNC_4(VAR_6 != ((void*)0));
        FUNC_2(VAR_4.clients,VAR_6);


        FUNC_0(VAR_4.el,VAR_5->fd,VAR_0);
        FUNC_0(VAR_4.el,VAR_5->fd,VAR_1);
        FUNC_1(VAR_5->fd);
        VAR_5->fd = -1;
    }


    if (VAR_5->flags & VAR_2) {
        VAR_6 = FUNC_3(VAR_4.clients_pending_write,VAR_5);
        FUNC_4(VAR_6 != ((void*)0));
        FUNC_2(VAR_4.clients_pending_write,VAR_6);
    }



    if (VAR_5->flags & VAR_3) {
        VAR_6 = FUNC_3(VAR_4.unblocked_clients,VAR_5);
        FUNC_4(VAR_6 != ((void*)0));
        FUNC_2(VAR_4.unblocked_clients,VAR_6);
    }
}
