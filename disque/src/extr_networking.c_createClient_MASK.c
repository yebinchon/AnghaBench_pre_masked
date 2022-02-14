
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int queues; int * job; scalar_t__ flags; scalar_t__ timeout; } ;
struct TYPE_10__ {int fd; int bulklen; int * peerid; TYPE_1__ bpop; int btype; int reply; scalar_t__ obuf_soft_limit_reached_time; scalar_t__ reply_bytes; scalar_t__ authenticated; int lastinteraction; int ctime; scalar_t__ flags; scalar_t__ sentlen; scalar_t__ multibulklen; int * lastcmd; int cmd; int * argv; scalar_t__ argc; scalar_t__ reqtype; scalar_t__ querybuf_peak; int querybuf; scalar_t__ bufpos; int * name; scalar_t__ id; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {int clients; int unixtime; int next_client_id; int el; scalar_t__ tcpkeepalive; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 () ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (int) ;

client *FUNC_13(int VAR_8) {
    client *VAR_9 = FUNC_12(sizeof(client));





    if (VAR_8 != -1) {
        FUNC_3(((void*)0),VAR_8);
        FUNC_1(((void*)0),VAR_8);
        if (VAR_6.tcpkeepalive)
            FUNC_2(((void*)0),VAR_8,VAR_6.tcpkeepalive);
        if (FUNC_0(VAR_6.el,VAR_8,VAR_1,
            VAR_5, VAR_9) == VAR_0)
        {
            FUNC_4(VAR_8);
            FUNC_11(VAR_9);
            return ((void*)0);
        }
    }

    VAR_9->id = VAR_6.next_client_id++;
    VAR_9->fd = VAR_8;
    VAR_9->name = ((void*)0);
    VAR_9->bufpos = 0;
    VAR_9->querybuf = FUNC_10();
    VAR_9->querybuf_peak = 0;
    VAR_9->reqtype = 0;
    VAR_9->argc = 0;
    VAR_9->argv = ((void*)0);
    VAR_9->cmd = *(VAR_9->lastcmd = ((void*)0));
    VAR_9->multibulklen = 0;
    VAR_9->bulklen = -1;
    VAR_9->sentlen = 0;
    VAR_9->flags = 0;
    VAR_9->ctime = VAR_9->lastinteraction = VAR_6.unixtime;
    VAR_9->authenticated = 0;
    VAR_9->reply = FUNC_7();
    VAR_9->reply_bytes = 0;
    VAR_9->obuf_soft_limit_reached_time = 0;
    FUNC_9(VAR_9->reply,VAR_4);
    FUNC_8(VAR_9->reply,VAR_3);
    VAR_9->btype = VAR_2;
    VAR_9->bpop.timeout = 0;
    VAR_9->bpop.flags = 0;
    VAR_9->bpop.job = ((void*)0);
    VAR_9->bpop.queues = FUNC_5(&VAR_7,((void*)0));
    VAR_9->peerid = ((void*)0);
    if (VAR_8 != -1) FUNC_6(VAR_6.clients,VAR_9);
    return VAR_9;
}
