
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ btype; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int unblocked_clients; int bpop_blocked_clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(client *VAR_6) {
    if (VAR_6->btype == VAR_1) {
        FUNC_3(VAR_6);
    } else if (VAR_6->btype == VAR_0) {
        FUNC_2(VAR_6);
    } else {
        FUNC_1("Unknown btype in unblockClient().");
    }


    VAR_6->flags &= ~VAR_3;
    VAR_6->btype = VAR_2;
    VAR_5.bpop_blocked_clients--;


    if (!(VAR_6->flags & VAR_4)) {
        VAR_6->flags |= VAR_4;
        FUNC_0(VAR_5.unblocked_clients,VAR_6);
    }
}
