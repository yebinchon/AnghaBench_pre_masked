
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aeEventLoop ;
struct TYPE_2__ {int aof_stop_sending_diff; int aof_pipe_read_ack_from_child; int el; int aof_pipe_write_ack_to_child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

void FUNC_6(aeEventLoop *VAR_5, int VAR_6, void *VAR_7, int VAR_8) {
    char VAR_9;
    FUNC_0(*VAR_5);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);

    if (FUNC_2(VAR_6,&VAR_9,1) == 1 && VAR_9 == '!') {
        FUNC_3(VAR_1,"AOF rewrite child asks to stop sending diffs.");
        VAR_4.aof_stop_sending_diff = 1;
        if (FUNC_5(VAR_4.aof_pipe_write_ack_to_child,"!",1) != 1) {




            FUNC_3(VAR_2,"Can't send ACK to AOF child: %s",
                FUNC_4(VAR_3));
        }
    }


    FUNC_1(VAR_4.el,VAR_4.aof_pipe_read_ack_from_child,VAR_0);
}
