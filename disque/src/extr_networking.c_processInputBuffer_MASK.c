
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* querybuf; int flags; scalar_t__ reqtype; scalar_t__ argc; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {TYPE_1__* current_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 (char*) ;

void FUNC_7(client *VAR_6) {
    VAR_5.current_client = VAR_6;

    while(FUNC_5(VAR_6->querybuf)) {

        if (FUNC_0()) break;


        if (VAR_6->flags & VAR_0) break;




        if (VAR_6->flags & VAR_1) break;


        if (!VAR_6->reqtype) {
            if (VAR_6->querybuf[0] == '*') {
                VAR_6->reqtype = VAR_4;
            } else {
                VAR_6->reqtype = VAR_3;
            }
        }

        if (VAR_6->reqtype == VAR_3) {
            if (FUNC_2(VAR_6) != VAR_2) break;
        } else if (VAR_6->reqtype == VAR_4) {
            if (FUNC_3(VAR_6) != VAR_2) break;
        } else {
            FUNC_6("Unknown request type");
        }


        if (VAR_6->argc == 0) {
            FUNC_4(VAR_6);
        } else {

            if (FUNC_1(VAR_6) == VAR_2)
                FUNC_4(VAR_6);
        }
    }
    VAR_5.current_client = ((void*)0);
}
