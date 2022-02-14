
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aof_pipe_write_data_to_child; int aof_pipe_read_data_from_parent; int aof_pipe_write_ack_to_parent; int aof_pipe_read_ack_from_child; int aof_pipe_write_ack_to_child; int aof_pipe_read_ack_from_parent; scalar_t__ aof_stop_sending_diff; int el; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(void) {
    int VAR_9[6] = {-1, -1, -1, -1, -1, -1};
    int VAR_10;

    if (FUNC_3(VAR_9) == -1) goto error;
    if (FUNC_3(VAR_9+2) == -1) goto error;
    if (FUNC_3(VAR_9+4) == -1) goto error;

    if (FUNC_1(((void*)0),VAR_9[0]) != VAR_2) goto error;
    if (FUNC_1(((void*)0),VAR_9[1]) != VAR_2) goto error;
    if (FUNC_0(VAR_8.el, VAR_9[2], VAR_1, VAR_6, ((void*)0)) == VAR_0) goto error;

    VAR_8.aof_pipe_write_data_to_child = VAR_9[1];
    VAR_8.aof_pipe_read_data_from_parent = VAR_9[0];
    VAR_8.aof_pipe_write_ack_to_parent = VAR_9[3];
    VAR_8.aof_pipe_read_ack_from_child = VAR_9[2];
    VAR_8.aof_pipe_write_ack_to_child = VAR_9[5];
    VAR_8.aof_pipe_read_ack_from_parent = VAR_9[4];
    VAR_8.aof_stop_sending_diff = 0;
    return VAR_4;

error:
    FUNC_4(VAR_5,"Error opening /setting AOF rewrite IPC pipes: %s",
        FUNC_5(VAR_7));
    for (VAR_10 = 0; VAR_10 < 6; VAR_10++) if(VAR_9[VAR_10] != -1) FUNC_2(VAR_9[VAR_10]);
    return VAR_3;
}
