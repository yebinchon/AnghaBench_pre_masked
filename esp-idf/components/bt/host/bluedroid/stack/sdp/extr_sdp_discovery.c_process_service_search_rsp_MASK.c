
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num_handles; int disc_state; int * handles; } ;
typedef TYPE_1__ tCONN_CB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {scalar_t__ max_recs_per_search; } ;


 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_4__ VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_7 (tCONN_CB *VAR_5, UINT8 *VAR_6)
{
    UINT16 VAR_7;
    UINT16 VAR_8, VAR_9, VAR_10;
    UINT8 VAR_11;


    VAR_6 += 4;
    FUNC_0 (VAR_8, VAR_6);
    FUNC_0 (VAR_9, VAR_6);

    VAR_10 = VAR_5->num_handles;
    VAR_5->num_handles += VAR_9;
    if (VAR_5->num_handles == 0) {
        FUNC_3 ("SDP - Rcvd ServiceSearchRsp, no matches\n");
        FUNC_5 (VAR_5, VAR_3);
        return;
    }


    if (VAR_8 > VAR_4.max_recs_per_search) {
        VAR_8 = VAR_4.max_recs_per_search;
    }
    if (VAR_5->num_handles > VAR_4.max_recs_per_search) {
        VAR_5->num_handles = VAR_4.max_recs_per_search;
    }

    for (VAR_7 = VAR_10; VAR_7 < VAR_5->num_handles; VAR_7++) {
        FUNC_1 (VAR_5->handles[VAR_7], VAR_6);
    }

    FUNC_2 (VAR_11, VAR_6);
    if (VAR_11 != 0) {
        if (VAR_11 > VAR_2) {
            FUNC_5 (VAR_5, VAR_1);
            return;
        }

        FUNC_6(VAR_5, VAR_11, VAR_6);
    } else {

        VAR_5->disc_state = VAR_0;


        FUNC_4 (VAR_5, ((void*)0));
    }
}
