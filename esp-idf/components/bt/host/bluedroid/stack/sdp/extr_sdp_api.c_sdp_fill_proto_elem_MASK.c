
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num_params; scalar_t__* params; scalar_t__ protocol_uuid; } ;
typedef TYPE_3__ tSDP_PROTOCOL_ELEM ;
struct TYPE_7__ {scalar_t__ u16; scalar_t__ u8; TYPE_4__* p_sub_attr; } ;
struct TYPE_8__ {TYPE_1__ v; } ;
struct TYPE_10__ {TYPE_2__ attr_value; int attr_len_type; struct TYPE_10__* p_next_attr; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static BOOLEAN FUNC_2( tSDP_DISC_ATTR *VAR_6, UINT16 VAR_7,
                                    tSDP_PROTOCOL_ELEM *VAR_8)
{
    tSDP_DISC_ATTR *VAR_9;


    for (VAR_6 = VAR_6->attr_value.v.p_sub_attr; VAR_6; VAR_6 = VAR_6->p_next_attr) {

        if (FUNC_1(VAR_6->attr_len_type) != VAR_0) {
            return (VAR_1);
        }


        for (VAR_9 = VAR_6->attr_value.v.p_sub_attr; VAR_9; VAR_9 = VAR_9->p_next_attr) {



            if ((FUNC_1(VAR_9->attr_len_type) == VAR_5)
                    && (FUNC_0(VAR_9->attr_len_type) == 2)
                    && (VAR_9->attr_value.v.u16 == VAR_7)) {

                VAR_8->protocol_uuid = VAR_7;
                VAR_8->num_params = 0;


                for (VAR_9 = VAR_9->p_next_attr; VAR_9; VAR_9 = VAR_9->p_next_attr) {
                    if (FUNC_1(VAR_9->attr_len_type) != VAR_4) {
                        break;
                    }

                    if (FUNC_0(VAR_9->attr_len_type) == 2) {
                        VAR_8->params[VAR_8->num_params++] = VAR_9->attr_value.v.u16;
                    } else {
                        VAR_8->params[VAR_8->num_params++] = VAR_9->attr_value.v.u8;
                    }

                    if (VAR_8->num_params >= VAR_2) {
                        break;
                    }
                }
                return (VAR_3);
            }
        }
    }

    return (VAR_1);
}
