
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_8__ {int fd; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {int el; int clients_pending_write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*,int ) ;

int FUNC_9(void) {
    listIter VAR_6;
    listNode *VAR_7;
    int VAR_8 = FUNC_4(VAR_5.clients_pending_write);

    FUNC_7(VAR_5.clients_pending_write,&VAR_6);
    while((VAR_7 = FUNC_5(&VAR_6))) {
        client *VAR_9 = FUNC_6(VAR_7);
        VAR_9->flags &= ~VAR_2;
        FUNC_3(VAR_5.clients_pending_write,VAR_7);


        if (FUNC_8(VAR_9->fd,VAR_9,0) == VAR_3) continue;



        if (FUNC_1(VAR_9) &&
            FUNC_0(VAR_5.el, VAR_9->fd, VAR_1,
                VAR_4, VAR_9) == VAR_0)
        {
            FUNC_2(VAR_9);
        }
    }
    return VAR_8;
}
