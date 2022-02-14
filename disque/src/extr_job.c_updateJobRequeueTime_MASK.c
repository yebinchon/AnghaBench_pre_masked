
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_4__ {scalar_t__ retry; scalar_t__ qtime; } ;
typedef TYPE_1__ job ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(job *VAR_0, mstime_t VAR_1) {

    if (VAR_0->retry == 0 || VAR_0->qtime == 0) return;
    VAR_0->qtime = VAR_1;
    FUNC_0(VAR_0,0);
}
