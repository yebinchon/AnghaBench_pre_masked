
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sds ;
typedef int robj ;
struct TYPE_2__ {scalar_t__ aof_state; int aof_child_pid; int aof_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int **) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__ VAR_1 ;

void FUNC_6(robj **VAR_2, int VAR_3) {
    sds VAR_4 = FUNC_3();

    VAR_4 = FUNC_1(VAR_4,VAR_3,VAR_2);




    if (VAR_1.aof_state == VAR_0)
        VAR_1.aof_buf = FUNC_2(VAR_1.aof_buf,VAR_4,FUNC_5(VAR_4));





    if (VAR_1.aof_child_pid != -1)
        FUNC_0((unsigned char*)VAR_4,FUNC_5(VAR_4));

    FUNC_4(VAR_4);
}
