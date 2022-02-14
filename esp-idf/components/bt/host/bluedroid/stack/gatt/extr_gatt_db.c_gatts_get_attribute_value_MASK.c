
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * p_attr_list; } ;
typedef TYPE_3__ tGATT_SVC_DB ;
typedef int tGATT_STATUS ;
struct TYPE_9__ {scalar_t__ handle; scalar_t__ uuid_type; int uuid; struct TYPE_9__* p_next; TYPE_2__* p_value; } ;
typedef TYPE_4__ tGATT_ATTR16 ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ attr_len; int * attr_val; } ;
struct TYPE_7__ {TYPE_1__ attr_val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;



tGATT_STATUS FUNC_2(tGATT_SVC_DB *VAR_4, UINT16 VAR_5,
                                       UINT16 *VAR_6, UINT8 **VAR_7)
{
    tGATT_ATTR16 *VAR_8;

    FUNC_0("attr_handle = %x\n", VAR_5);

    if (VAR_4 == ((void*)0)) {
        FUNC_1("gatts_get_attribute_value Fail:p_db is NULL.\n");
        *VAR_6 = 0;
        return VAR_1;
    }
    if (VAR_4->p_attr_list == ((void*)0)) {
        FUNC_1("gatts_get_attribute_value Fail:p_db->p_attr_list is NULL.\n");
        *VAR_6 = 0;
        return VAR_1;
    }
    if (VAR_6 == ((void*)0)){
        FUNC_1("gatts_get_attribute_value Fail:length is NULL.\n");
        return VAR_1;
    }
    if (VAR_7 == ((void*)0)){
        FUNC_1("gatts_get_attribute_value Fail:value is NULL.\n");
        *VAR_6 = 0;
        return VAR_1;
    }

    VAR_8 = (tGATT_ATTR16 *) VAR_4->p_attr_list;

    while (VAR_8 != ((void*)0)) {
        if (VAR_8->handle == VAR_5) {

            if (VAR_8->uuid_type == VAR_0) {
                switch (VAR_8->uuid) {
                case 129:
                case 128:
                    break;
                default:
                    if (VAR_8->p_value && VAR_8->p_value->attr_val.attr_len != 0) {
                        *VAR_6 = VAR_8->p_value->attr_val.attr_len;
                        *VAR_7 = VAR_8->p_value->attr_val.attr_val;
                        return VAR_3;
                    } else {
                        *VAR_6 = 0;
                        return VAR_3;
                    }
                    break;
                }
            } else {
                if (VAR_8->p_value && VAR_8->p_value->attr_val.attr_len != 0) {
                    *VAR_6 = VAR_8->p_value->attr_val.attr_len;
                    *VAR_7 = VAR_8->p_value->attr_val.attr_val;
                    return VAR_3;
                } else {
                    *VAR_6 = 0;
                    return VAR_3;
                }

            }

            break;

        }

        VAR_8 = VAR_8->p_next;
    }

    return VAR_2;
}
