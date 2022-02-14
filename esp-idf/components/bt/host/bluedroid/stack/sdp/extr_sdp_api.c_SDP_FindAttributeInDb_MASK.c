
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* p_next_rec; TYPE_2__* p_first_attr; } ;
typedef TYPE_1__ tSDP_DISC_REC ;
struct TYPE_8__ {scalar_t__ attr_id; struct TYPE_8__* p_next_attr; } ;
typedef TYPE_2__ tSDP_DISC_ATTR ;
struct TYPE_9__ {TYPE_1__* p_first_rec; } ;
typedef TYPE_3__ tSDP_DISCOVERY_DB ;
typedef scalar_t__ UINT16 ;



tSDP_DISC_REC *FUNC_0 (tSDP_DISCOVERY_DB *VAR_0, UINT16 VAR_1,
                                      tSDP_DISC_REC *VAR_2)
{

    tSDP_DISC_REC *VAR_3;
    tSDP_DISC_ATTR *VAR_4;


    if (VAR_0 == ((void*)0)) {
        return (((void*)0));
    }

    if (!VAR_2) {
        VAR_3 = VAR_0->p_first_rec;
    } else {
        VAR_3 = VAR_2->p_next_rec;
    }

    while (VAR_3) {
        VAR_4 = VAR_3->p_first_attr;
        while (VAR_4) {
            if (VAR_4->attr_id == VAR_1) {
                return (VAR_3);
            }

            VAR_4 = VAR_4->p_next_attr;
        }

        VAR_3 = VAR_3->p_next_rec;
    }


    return (((void*)0));
}
