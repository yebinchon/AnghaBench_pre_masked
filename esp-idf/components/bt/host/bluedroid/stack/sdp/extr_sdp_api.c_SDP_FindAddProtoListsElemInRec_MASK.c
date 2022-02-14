
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tSDP_PROTOCOL_ELEM ;
struct TYPE_9__ {TYPE_4__* p_first_attr; } ;
typedef TYPE_3__ tSDP_DISC_REC ;
struct TYPE_7__ {TYPE_4__* p_sub_attr; } ;
struct TYPE_8__ {TYPE_1__ v; } ;
struct TYPE_10__ {scalar_t__ attr_id; struct TYPE_10__* p_next_attr; int attr_len_type; TYPE_2__ attr_value; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,int *) ;

BOOLEAN FUNC_2 (tSDP_DISC_REC *VAR_4, UINT16 VAR_5, tSDP_PROTOCOL_ELEM *VAR_6)
{

    tSDP_DISC_ATTR *VAR_7, *VAR_8;
    BOOLEAN VAR_9 = VAR_2;

    VAR_7 = VAR_4->p_first_attr;
    while (VAR_7) {

        if ((VAR_7->attr_id == VAR_0)
                && (FUNC_0(VAR_7->attr_len_type) == VAR_1)) {
            for (VAR_8 = VAR_7->attr_value.v.p_sub_attr; VAR_8; VAR_8 = VAR_8->p_next_attr) {

                if (FUNC_0(VAR_8->attr_len_type) == VAR_1) {
                    if ( (VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_6)) == VAR_3) {
                        break;
                    }
                }
            }
            return VAR_9;
        }
        VAR_7 = VAR_7->p_next_attr;
    }


    return (VAR_2);
}
