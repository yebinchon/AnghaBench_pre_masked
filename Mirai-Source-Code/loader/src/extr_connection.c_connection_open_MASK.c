
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int timeout; int fd; int lock; scalar_t__ echo_load_pos; int * bin; int open; int success; int state_telnet; int last_recv; scalar_t__ rdbuf_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct connection *VAR_3)
{
    FUNC_1(&VAR_3->lock);

    VAR_3->rdbuf_pos = 0;
    VAR_3->last_recv = FUNC_3(((void*)0));
    VAR_3->timeout = 10;
    VAR_3->echo_load_pos = 0;
    VAR_3->state_telnet = VAR_1;
    VAR_3->success = VAR_0;
    VAR_3->open = VAR_2;
    VAR_3->bin = ((void*)0);
    VAR_3->echo_load_pos = 0;




    FUNC_2(&VAR_3->lock);
}
