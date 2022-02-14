
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
struct TYPE_10__ {int * array; TYPE_5__* p_sub_attr; } ;
struct TYPE_11__ {TYPE_2__ v; } ;
struct TYPE_13__ {scalar_t__ attr_id; struct TYPE_13__* p_next_attr; TYPE_3__ attr_value; int attr_len_type; } ;
typedef TYPE_5__ tSDP_DISC_ATTR ;
struct TYPE_9__ {int * uuid128; } ;
struct TYPE_14__ {size_t len; TYPE_1__ uu; } ;
typedef TYPE_6__ tBT_UUID ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

BOOLEAN FUNC_2(tSDP_DISC_REC *VAR_7, tBT_UUID *VAR_8)
{

    tSDP_DISC_ATTR *VAR_9, *VAR_10;

    VAR_9 = VAR_7->p_first_attr;

    while (VAR_9) {
        if ((VAR_9->attr_id == VAR_0)
                && (FUNC_1(VAR_9->attr_len_type) == VAR_2)) {
            for (VAR_10 = VAR_9->attr_value.v.p_sub_attr; VAR_10; VAR_10 = VAR_10->p_next_attr) {
                if (FUNC_1(VAR_10->attr_len_type) == VAR_6) {

                    if (FUNC_0(VAR_10->attr_len_type) == 16) {
                        VAR_8->len = VAR_4;
                        for (uint8_t VAR_11 = 0; VAR_11 != VAR_4; ++VAR_11) {
                            VAR_8->uu.uuid128[VAR_11] = VAR_10->attr_value.v.array[VAR_4 - VAR_11 - 1];
                        }
                    }
                    return (VAR_5);
                }
            }
            break;
        } else if (VAR_9->attr_id == VAR_1) {
            if ((FUNC_1(VAR_9->attr_len_type) == VAR_6)

                    && (FUNC_0(VAR_9->attr_len_type) == 16)) {
                VAR_8->len = VAR_4;
                for (uint8_t VAR_12 = 0; VAR_12 != VAR_4; ++VAR_12) {
                    VAR_8->uu.uuid128[VAR_12] = VAR_9->attr_value.v.array[VAR_4 - VAR_12 - 1];
                }
                return (VAR_5);
            }
        }
        VAR_9 = VAR_9->p_next_attr;
    }
    return VAR_3;



}
