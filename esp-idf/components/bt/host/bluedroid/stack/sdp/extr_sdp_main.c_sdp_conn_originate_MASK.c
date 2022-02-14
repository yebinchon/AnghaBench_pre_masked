
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ connection_id; int con_state; int * device_address; int con_flags; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

tCONN_CB *FUNC_6 (UINT8 *VAR_3)
{
    tCONN_CB *VAR_4;
    UINT16 VAR_5;


    if ((VAR_4 = FUNC_4()) == ((void*)0)) {
        FUNC_2 ("SDP - no spare CCB for orig\n");
        return (((void*)0));
    }

    FUNC_1 ("SDP - Originate started\n");


    VAR_4->con_flags |= VAR_0;


    FUNC_3 (&VAR_4->device_address[0], VAR_3, sizeof (BD_ADDR));


    VAR_4->con_state = VAR_2;

    VAR_5 = FUNC_0 (VAR_1, VAR_3);


    if (VAR_5 != 0) {
        VAR_4->connection_id = VAR_5;

        return (VAR_4);
    } else {
        FUNC_2 ("SDP - Originate failed\n");
        FUNC_5 (VAR_4);
        return (((void*)0));
    }
}
