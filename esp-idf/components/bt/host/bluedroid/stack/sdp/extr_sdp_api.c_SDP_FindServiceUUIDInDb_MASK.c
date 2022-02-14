
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* p_next_rec; TYPE_4__* p_first_attr; } ;
typedef TYPE_3__ tSDP_DISC_REC ;
struct TYPE_10__ {TYPE_4__* p_sub_attr; } ;
struct TYPE_11__ {TYPE_1__ v; } ;
struct TYPE_13__ {scalar_t__ attr_id; struct TYPE_13__* p_next_attr; int attr_len_type; TYPE_2__ attr_value; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
struct TYPE_14__ {TYPE_3__* p_first_rec; } ;
typedef TYPE_5__ tSDP_DISCOVERY_DB ;
typedef int tBT_UUID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;

tSDP_DISC_REC *FUNC_2 (tSDP_DISCOVERY_DB *VAR_4, tBT_UUID *VAR_5, tSDP_DISC_REC *VAR_6)
{

    tSDP_DISC_REC *VAR_7;
    tSDP_DISC_ATTR *VAR_8, *VAR_9;


    if (VAR_4 == ((void*)0)) {
        return (((void*)0));
    }

    if (!VAR_6) {
        VAR_7 = VAR_4->p_first_rec;
    } else {
        VAR_7 = VAR_6->p_next_rec;
    }

    while (VAR_7) {
        VAR_8 = VAR_7->p_first_attr;
        while (VAR_8) {
            if ((VAR_8->attr_id == VAR_0)
                    && (FUNC_0(VAR_8->attr_len_type) == VAR_2)) {
                for (VAR_9 = VAR_8->attr_value.v.p_sub_attr; VAR_9; VAR_9 = VAR_9->p_next_attr) {
                    if (FUNC_0(VAR_9->attr_len_type) == VAR_3) {
                        if (FUNC_1 (VAR_5, VAR_9)) {
                            return (VAR_7);
                        }
                    }
                }
                break;
            } else if (VAR_8->attr_id == VAR_1) {
                if (FUNC_0(VAR_8->attr_len_type) == VAR_3 ) {
                    if (FUNC_1 (VAR_5, VAR_8)) {
                        return (VAR_7);
                    }
                }
            }

            VAR_8 = VAR_8->p_next_attr;
        }

        VAR_7 = VAR_7->p_next_rec;
    }


    return (((void*)0));
}
