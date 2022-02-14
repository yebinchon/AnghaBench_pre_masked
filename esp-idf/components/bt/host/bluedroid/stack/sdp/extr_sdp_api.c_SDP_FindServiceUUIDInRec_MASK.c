
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_12__ {TYPE_5__* p_first_attr; } ;
typedef TYPE_4__ tSDP_DISC_REC ;
struct TYPE_10__ {int u16; TYPE_5__* p_sub_attr; int u32; int * array; } ;
struct TYPE_11__ {TYPE_2__ v; } ;
struct TYPE_13__ {scalar_t__ attr_id; struct TYPE_13__* p_next_attr; TYPE_3__ attr_value; int attr_len_type; } ;
typedef TYPE_5__ tSDP_DISC_ATTR ;
struct TYPE_9__ {int uuid16; int uuid32; int * uuid128; } ;
struct TYPE_14__ {int len; TYPE_1__ uu; } ;
typedef TYPE_6__ tBT_UUID ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

BOOLEAN FUNC_2(tSDP_DISC_REC *VAR_9, tBT_UUID *VAR_10)
{

    tSDP_DISC_ATTR *VAR_11, *VAR_12, *VAR_13;

    VAR_11 = VAR_9->p_first_attr;

    while (VAR_11) {
        if ((VAR_11->attr_id == VAR_0)
                && (FUNC_1(VAR_11->attr_len_type) == VAR_2)) {
            for (VAR_12 = VAR_11->attr_value.v.p_sub_attr; VAR_12; VAR_12 = VAR_12->p_next_attr) {
                if (FUNC_1(VAR_12->attr_len_type) == VAR_8) {
                    if (FUNC_0(VAR_12->attr_len_type) == VAR_5) {
                        VAR_10->len = VAR_5;
                        VAR_10->uu.uuid16 = VAR_12->attr_value.v.u16;
                    } else if (FUNC_0(VAR_12->attr_len_type) == VAR_4) {
                        VAR_10->len = VAR_4;
                        for (uint8_t VAR_14 = 0; VAR_14 != VAR_4; ++VAR_14) {
                            VAR_10->uu.uuid128[VAR_14] = VAR_12->attr_value.v.array[VAR_4 - VAR_14 - 1];
                        }
                    } else if (FUNC_0(VAR_12->attr_len_type) == VAR_6) {
                        VAR_10->len = VAR_6;
                        VAR_10->uu.uuid32 = VAR_12->attr_value.v.u32;
                    }

                    return (VAR_7);
                }





                else {
                    if (FUNC_1(VAR_12->attr_len_type) == VAR_2) {

                        for (VAR_13 = VAR_12->attr_value.v.p_sub_attr; VAR_13; VAR_13 = VAR_13->p_next_attr) {

                            if ((FUNC_1(VAR_13->attr_len_type) == VAR_8)

                                    && (FUNC_0(VAR_13->attr_len_type) == 2)) {
                                VAR_10->len = 2;
                                VAR_10->uu.uuid16 = VAR_13->attr_value.v.u16;
                                return (VAR_7);
                            }
                        }
                    }
                }
            }
            break;
        } else if (VAR_11->attr_id == VAR_1) {
            if ((FUNC_1(VAR_11->attr_len_type) == VAR_8)

                    && (FUNC_0(VAR_11->attr_len_type) == 2)) {
                VAR_10->len = 2;
                VAR_10->uu.uuid16 = VAR_11->attr_value.v.u16;
                return (VAR_7);
            }
        }
        VAR_11 = VAR_11->p_next_attr;
    }
    return VAR_3;



}
