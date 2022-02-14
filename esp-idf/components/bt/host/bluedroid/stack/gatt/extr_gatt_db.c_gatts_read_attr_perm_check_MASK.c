
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ p_attr_list; } ;
typedef TYPE_1__ tGATT_SVC_DB ;
typedef int tGATT_STATUS ;
typedef int tGATT_SEC_FLAG ;
struct TYPE_6__ {scalar_t__ handle; scalar_t__ p_next; } ;
typedef TYPE_2__ tGATT_ATTR16 ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;

tGATT_STATUS FUNC_1(tGATT_SVC_DB *VAR_1,
                                        BOOLEAN VAR_2,
                                        UINT16 VAR_3,
                                        tGATT_SEC_FLAG VAR_4,
                                        UINT8 VAR_5)
{
    tGATT_STATUS VAR_6 = VAR_0;
    tGATT_ATTR16 *VAR_7;

    if (VAR_1 && VAR_1->p_attr_list) {
        VAR_7 = (tGATT_ATTR16 *)VAR_1->p_attr_list;

        while (VAR_7 && VAR_3 >= VAR_7->handle) {
            if (VAR_7->handle == VAR_3) {
                VAR_6 = FUNC_0 (VAR_7, 0,
                                                       VAR_2,
                                                       VAR_4, VAR_5);
                break;
            }
            VAR_7 = (tGATT_ATTR16 *) VAR_7->p_next;
        }
    }

    return VAR_6;
}
