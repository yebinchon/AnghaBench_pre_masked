
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int fd; int reply; int * peerid; scalar_t__ obuf_soft_limit_reached_time; scalar_t__ reply_bytes; int btype; int flags; scalar_t__ bufpos; int * argv; scalar_t__ argc; scalar_t__ querybuf_peak; int querybuf; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 struct client* FUNC_4 (int) ;

struct client *FUNC_5(void) {
    struct client *VAR_4 = FUNC_4(sizeof(*VAR_4));

    VAR_4->fd = -1;
    VAR_4->name = ((void*)0);
    VAR_4->querybuf = FUNC_3();
    VAR_4->querybuf_peak = 0;
    VAR_4->argc = 0;
    VAR_4->argv = ((void*)0);
    VAR_4->bufpos = 0;
    VAR_4->flags = VAR_1;
    VAR_4->btype = VAR_0;
    VAR_4->reply = FUNC_0();
    VAR_4->reply_bytes = 0;
    VAR_4->obuf_soft_limit_reached_time = 0;
    VAR_4->peerid = ((void*)0);
    FUNC_2(VAR_4->reply,VAR_2);
    FUNC_1(VAR_4->reply,VAR_3);
    return VAR_4;
}
