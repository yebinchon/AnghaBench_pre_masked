
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSDP_PROTOCOL_ELEM ;
struct TYPE_5__ {TYPE_2__* p_first_attr; } ;
typedef TYPE_1__ tSDP_DISC_REC ;
struct TYPE_6__ {scalar_t__ attr_id; struct TYPE_6__* p_next_attr; int attr_len_type; } ;
typedef TYPE_2__ tSDP_DISC_ATTR ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;

BOOLEAN FUNC_2 (tSDP_DISC_REC *VAR_3, UINT16 VAR_4, tSDP_PROTOCOL_ELEM *VAR_5)
{

    tSDP_DISC_ATTR *VAR_6;

    VAR_6 = VAR_3->p_first_attr;
    while (VAR_6) {

        if ((VAR_6->attr_id == VAR_0)
                && (FUNC_0(VAR_6->attr_len_type) == VAR_1)) {
            return FUNC_1(VAR_6, VAR_4, VAR_5);
        }
        VAR_6 = VAR_6->p_next_attr;
    }


    return (VAR_2);
}
