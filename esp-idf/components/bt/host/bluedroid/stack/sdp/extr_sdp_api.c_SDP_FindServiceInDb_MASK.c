
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* p_next_rec; TYPE_4__* p_first_attr; } ;
typedef TYPE_3__ tSDP_DISC_REC ;
struct TYPE_9__ {scalar_t__ u16; TYPE_4__* p_sub_attr; } ;
struct TYPE_10__ {TYPE_1__ v; } ;
struct TYPE_12__ {scalar_t__ attr_id; struct TYPE_12__* p_next_attr; TYPE_2__ attr_value; int attr_len_type; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
struct TYPE_13__ {TYPE_3__* p_first_rec; } ;
typedef TYPE_5__ tSDP_DISCOVERY_DB ;
typedef scalar_t__ UINT16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

tSDP_DISC_REC *FUNC_3 (tSDP_DISCOVERY_DB *VAR_7, UINT16 VAR_8, tSDP_DISC_REC *VAR_9)
{

    tSDP_DISC_REC *VAR_10;
    tSDP_DISC_ATTR *VAR_11, *VAR_12, *VAR_13;


    if (VAR_7 == ((void*)0)) {
        return (((void*)0));
    }

    if (!VAR_9) {
        VAR_10 = VAR_7->p_first_rec;
    } else {
        VAR_10 = VAR_9->p_next_rec;
    }

    while (VAR_10) {
        VAR_11 = VAR_10->p_first_attr;
        while (VAR_11) {
            if ((VAR_11->attr_id == VAR_0)
                    && (FUNC_1(VAR_11->attr_len_type) == VAR_2)) {
                for (VAR_12 = VAR_11->attr_value.v.p_sub_attr; VAR_12; VAR_12 = VAR_12->p_next_attr) {

                    if ((FUNC_1(VAR_12->attr_len_type) == VAR_3)
                            && (FUNC_0(VAR_12->attr_len_type) == 2) ) {
                        FUNC_2("SDP_FindServiceInDb - p_sattr value = 0x%x serviceuuid = 0x%x\r\n",
                                        VAR_12->attr_value.v.u16, VAR_8);
                        if (VAR_8 == VAR_4) {
                            if ( (VAR_12->attr_value.v.u16 == VAR_6) || ( VAR_12->attr_value.v.u16 == VAR_5)) {
                                FUNC_2("SDP_FindServiceInDb found HDP source or sink\n" );
                                return (VAR_10);
                            }
                        }

                    }

                    if (FUNC_1(VAR_12->attr_len_type) == VAR_3 && (VAR_8 == 0
                            || (FUNC_0(VAR_12->attr_len_type) == 2
                                && VAR_12->attr_value.v.u16 == VAR_8)))

                    {
                        return (VAR_10);
                    }





                    else {
                        if (FUNC_1(VAR_12->attr_len_type) == VAR_2) {

                            for (VAR_13 = VAR_12->attr_value.v.p_sub_attr; VAR_13; VAR_13 = VAR_13->p_next_attr) {

                                if ((FUNC_1(VAR_13->attr_len_type) == VAR_3)
                                        && (FUNC_0(VAR_13->attr_len_type) == 2)

                                        && ((VAR_13->attr_value.v.u16 == VAR_8) || (VAR_8 == 0))) {
                                    return (VAR_10);
                                }
                            }
                        }
                    }
                }
                break;
            } else if (VAR_11->attr_id == VAR_1) {
                if ((FUNC_1(VAR_11->attr_len_type) == VAR_3)
                        && (FUNC_0(VAR_11->attr_len_type) == 2)

                        && ((VAR_11->attr_value.v.u16 == VAR_8) || VAR_8 == 0)) {
                    return (VAR_10);
                }
            }

            VAR_11 = VAR_11->p_next_attr;
        }

        VAR_10 = VAR_10->p_next_rec;
    }


    return (((void*)0));
}
