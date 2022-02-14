
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ btype; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int nullmultibulk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_2 ;

void FUNC_4(client *VAR_3) {
    if (VAR_3->btype == VAR_1) {
        FUNC_1(VAR_3,
            FUNC_2("-NOREPL Timeout reached before replicating to "
                   "the requested number of nodes\r\n"));
        return;
    } else if (VAR_3->btype == VAR_0) {
        FUNC_0(VAR_3,VAR_2.nullmultibulk);
    } else {
        FUNC_3("Unknown btype in replyToBlockedClientTimedOut().");
    }
}
