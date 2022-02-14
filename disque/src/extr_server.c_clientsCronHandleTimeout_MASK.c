
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int mstime_t ;
struct TYPE_10__ {int timeout; } ;
struct TYPE_11__ {int flags; scalar_t__ lastinteraction; TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_13__ {scalar_t__ maxidletime; } ;
struct TYPE_12__ {int leavingerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_4 (int ,char*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(client *VAR_4, mstime_t VAR_5) {
    time_t VAR_6 = VAR_5/1000;

    if (VAR_2.maxidletime &&
        !(VAR_4->flags & VAR_0) &&
        (VAR_6 - VAR_4->lastinteraction > VAR_2.maxidletime))
    {
        FUNC_4(VAR_1,"Closing idle client");
        FUNC_1(VAR_4);
        return 1;
    } else if (VAR_4->flags & VAR_0) {




        if (VAR_4->bpop.timeout != 0 && VAR_4->bpop.timeout < VAR_5) {
            FUNC_3(VAR_4);
            FUNC_5(VAR_4);
        } else if (FUNC_2()) {
            FUNC_0(VAR_4,VAR_3.leavingerr);
            FUNC_5(VAR_4);
        }
    }
    return 0;
}
