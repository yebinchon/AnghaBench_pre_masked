
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int robj ;
struct TYPE_2__ {long long slowlog_log_slower_than; scalar_t__ slowlog_max_len; int slowlog; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int **,int,long long) ;

void FUNC_5(robj **VAR_1, int VAR_2, long long VAR_3) {
    if (VAR_0.slowlog_log_slower_than < 0) return;
    if (VAR_3 >= VAR_0.slowlog_log_slower_than)
        FUNC_0(VAR_0.slowlog,FUNC_4(VAR_1,VAR_2,VAR_3));


    while (FUNC_3(VAR_0.slowlog) > VAR_0.slowlog_max_len)
        FUNC_1(VAR_0.slowlog,FUNC_2(VAR_0.slowlog));
}
