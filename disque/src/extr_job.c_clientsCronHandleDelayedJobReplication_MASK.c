
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_5__ {scalar_t__ added_node_time; int job; } ;
struct TYPE_6__ {int flags; scalar_t__ btype; TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_7__ {scalar_t__ mstime; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__ VAR_3 ;

int FUNC_2(client *VAR_4) {

    if (!(VAR_4->flags & VAR_1) || VAR_4->btype != VAR_0)
        return 0;





    mstime_t VAR_5 = VAR_3.mstime - VAR_4->bpop.added_node_time;
    if (VAR_5 >= VAR_2) {
        if (FUNC_0(VAR_4->bpop.job, 1, 0) > 0)
            VAR_4->bpop.added_node_time = FUNC_1();
    }
    return 0;
}
