
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int listNode ;
struct TYPE_10__ {int queues; } ;
struct TYPE_11__ {int flags; int * peerid; struct TYPE_11__* argv; scalar_t__ name; int reply; TYPE_1__ bpop; int * querybuf; } ;
typedef TYPE_2__ client ;
struct TYPE_12__ {int clients_to_close; int monitors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 TYPE_6__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

void FUNC_11(client *VAR_4) {
    listNode *VAR_5;


    FUNC_6(VAR_4->querybuf);
    VAR_4->querybuf = ((void*)0);


    if (VAR_4->flags & VAR_0) FUNC_8(VAR_4);
    FUNC_1(VAR_4->bpop.queues);


    FUNC_4(VAR_4->reply);
    FUNC_2(VAR_4);




    FUNC_9(VAR_4);


    if (VAR_4->flags & VAR_2) {
        VAR_5 = FUNC_5(VAR_3.monitors,VAR_4);
        FUNC_7(VAR_5 != ((void*)0));
        FUNC_3(VAR_3.monitors,VAR_5);
    }



    if (VAR_4->flags & VAR_1) {
        VAR_5 = FUNC_5(VAR_3.clients_to_close,VAR_4);
        FUNC_7(VAR_5 != ((void*)0));
        FUNC_3(VAR_3.clients_to_close,VAR_5);
    }



    if (VAR_4->name) FUNC_0(VAR_4->name);
    FUNC_10(VAR_4->argv);
    FUNC_6(VAR_4->peerid);
    FUNC_10(VAR_4);
}
