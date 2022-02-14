
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int client ;
struct TYPE_4__ {int aof_child_pid; } ;
struct TYPE_3__ {int err; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_4(client *VAR_3) {
    if (VAR_1.aof_child_pid != -1) {
        FUNC_1(VAR_3,"Background append only file rewriting already in progress");
    } else if (FUNC_3() == VAR_0) {
        FUNC_2(VAR_3,"Background append only file rewriting started");
    } else {
        FUNC_0(VAR_3,VAR_2.err);
    }
}
