
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int btype; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int bpop_blocked_clients; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(client *VAR_2, int VAR_3) {
    VAR_2->flags |= VAR_0;
    VAR_2->btype = VAR_3;
    VAR_1.bpop_blocked_clients++;
}
