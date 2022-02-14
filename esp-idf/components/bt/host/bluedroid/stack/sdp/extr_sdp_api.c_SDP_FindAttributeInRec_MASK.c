
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_first_attr; } ;
typedef TYPE_1__ tSDP_DISC_REC ;
struct TYPE_6__ {scalar_t__ attr_id; struct TYPE_6__* p_next_attr; } ;
typedef TYPE_2__ tSDP_DISC_ATTR ;
typedef scalar_t__ UINT16 ;



tSDP_DISC_ATTR *FUNC_0 (tSDP_DISC_REC *VAR_0, UINT16 VAR_1)
{

    tSDP_DISC_ATTR *VAR_2;

    VAR_2 = VAR_0->p_first_attr;
    while (VAR_2) {
        if (VAR_2->attr_id == VAR_1) {
            return (VAR_2);
        }

        VAR_2 = VAR_2->p_next_attr;
    }


    return (((void*)0));
}
