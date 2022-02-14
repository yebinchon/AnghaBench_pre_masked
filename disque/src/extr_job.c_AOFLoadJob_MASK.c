
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
typedef int robj ;
typedef int job ;
struct TYPE_4__ {scalar_t__ aof_state; } ;
struct TYPE_3__ {int * loadjob; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_5(job *VAR_5) {
    if (VAR_3.aof_state == VAR_0) return;

    sds VAR_6 = FUNC_4(FUNC_3(),VAR_5,VAR_2);
    robj *VAR_7 = FUNC_0(VAR_1,VAR_6);
    robj *VAR_8[2] = {VAR_4.loadjob, VAR_7};
    FUNC_2(VAR_8,2);
    FUNC_1(VAR_7);
}
