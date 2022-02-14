
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* p_first_attr; } ;
typedef TYPE_3__ tSDP_DISC_REC ;
struct TYPE_6__ {scalar_t__ u16; TYPE_4__* p_sub_attr; } ;
struct TYPE_7__ {TYPE_1__ v; } ;
struct TYPE_9__ {scalar_t__ attr_id; struct TYPE_9__* p_next_attr; TYPE_2__ attr_value; int attr_len_type; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

BOOLEAN FUNC_2 (tSDP_DISC_REC *VAR_6, UINT16 VAR_7, UINT16 *VAR_8)
{

    tSDP_DISC_ATTR *VAR_9, *VAR_10;

    VAR_9 = VAR_6->p_first_attr;
    while (VAR_9) {

        if ((VAR_9->attr_id == VAR_0)
                && (FUNC_1(VAR_9->attr_len_type) == VAR_1)) {

            for (VAR_9 = VAR_9->attr_value.v.p_sub_attr; VAR_9; VAR_9 = VAR_9->p_next_attr) {

                if (FUNC_1(VAR_9->attr_len_type) != VAR_1) {
                    return (VAR_2);
                }


                for (VAR_10 = VAR_9->attr_value.v.p_sub_attr; VAR_10; VAR_10 = VAR_10->p_next_attr) {
                    if ((FUNC_1(VAR_10->attr_len_type) == VAR_5)
                            && (FUNC_0(VAR_10->attr_len_type) == 2)
                            && (VAR_10->attr_value.v.u16 == VAR_7)) {


                        VAR_10 = VAR_10->p_next_attr;

                        if ((FUNC_1(VAR_10->attr_len_type) == VAR_4) &&
                                (FUNC_0(VAR_10->attr_len_type) == 2)) {

                            *VAR_8 = VAR_10->attr_value.v.u16;

                            return (VAR_3);
                        } else {
                            return (VAR_2);
                        }
                    }
                }
            }

            return (VAR_2);
        }
        VAR_9 = VAR_9->p_next_attr;
    }



    return (VAR_2);
}
