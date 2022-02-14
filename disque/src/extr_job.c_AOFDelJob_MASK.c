
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ job ;
struct TYPE_7__ {scalar_t__ aof_state; } ;
struct TYPE_6__ {int * deljob; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_3(job *VAR_4) {
    if (VAR_2.aof_state == VAR_0) return;

    robj *VAR_5 = FUNC_0(VAR_4->id,VAR_1);
    robj *VAR_6[2] = {VAR_3.deljob, VAR_5};
    FUNC_2(VAR_6,2);
    FUNC_1(VAR_5);
}
