
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int record_handle; scalar_t__ num_attributes; size_t free_pad_ptr; int * attr_pad; TYPE_3__* attribute; } ;
typedef TYPE_2__ tSDP_RECORD ;
struct TYPE_7__ {scalar_t__ id; scalar_t__ type; int len; int * value_ptr; } ;
typedef TYPE_3__ tSDP_ATTRIBUTE ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {scalar_t__ num_records; TYPE_2__* record; } ;
struct TYPE_8__ {scalar_t__ trace_level; TYPE_1__ server_db; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int,scalar_t__,scalar_t__,int,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *,scalar_t__*,size_t) ;
 TYPE_4__ VAR_12 ;
 int FUNC_5 (char*,char*,scalar_t__) ;

BOOLEAN FUNC_6 (UINT32 VAR_13, UINT16 VAR_14, UINT8 VAR_15,
                          UINT32 VAR_16, UINT8 *VAR_17)
{

    UINT16 VAR_18, VAR_19, VAR_20;
    tSDP_RECORD *VAR_21 = &VAR_12.server_db.record[0];


    if (VAR_12.trace_level >= VAR_1) {
        if ((VAR_15 == VAR_10) ||
                (VAR_15 == VAR_9) ||
                (VAR_15 == VAR_11) ||
                (VAR_15 == VAR_3) ||
                (VAR_15 == VAR_2)) {
            UINT8 VAR_22[400];
            UINT32 VAR_23;
            UINT32 VAR_24 = (VAR_16 > 200) ? 200 : VAR_16;

            VAR_22[0] = '\0';
            for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
                FUNC_5((char *)&VAR_22[VAR_23 * 2], "%02X", (UINT8)(VAR_17[VAR_23]));
            }
            FUNC_1("SDP_AddAttribute: handle:%X, id:%04X, type:%d, len:%d, p_val:%p, *p_val:%s\n",
                            VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_22);
        } else if (VAR_15 == VAR_0) {
            FUNC_1("SDP_AddAttribute: handle:%X, id:%04X, type:%d, len:%d, p_val:%p, *p_val:%d\n",
                            VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_17);
        } else {
            FUNC_1("SDP_AddAttribute: handle:%X, id:%04X, type:%d, len:%d, p_val:%p, *p_val:%s\n",
                            VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_17);
        }
    }



    for (VAR_20 = 0; VAR_20 < VAR_12.server_db.num_records; VAR_20++, VAR_21++) {
        if (VAR_21->record_handle == VAR_13) {
            tSDP_ATTRIBUTE *VAR_25 = &VAR_21->attribute[0];


            for (VAR_18 = 0; VAR_18 < VAR_21->num_attributes; VAR_18++, VAR_25++) {

                if (VAR_25->id == VAR_14) {
                    FUNC_0 (VAR_13, VAR_14);
                    break;
                }
                if (VAR_25->id > VAR_14) {
                    break;
                }
            }

            if (VAR_21->num_attributes == VAR_6) {
                return (VAR_4);
            }


            if (VAR_18 == VAR_21->num_attributes) {
                VAR_25 = &VAR_21->attribute[VAR_21->num_attributes];
            } else {

                for (VAR_19 = VAR_21->num_attributes; VAR_19 > VAR_18; VAR_19--) {
                    VAR_21->attribute[VAR_19] = VAR_21->attribute[VAR_19 - 1];
                }
            }

            VAR_25->id = VAR_14;
            VAR_25->type = VAR_15;
            VAR_25->len = VAR_16;

            if (VAR_21->free_pad_ptr + VAR_16 >= VAR_5) {

                if (VAR_15 == VAR_7) {
                    FUNC_3("SDP_AddAttribute: attr_len:%d too long. truncate to (%d)\n",
                                      VAR_16, VAR_5 - VAR_21->free_pad_ptr );

                    VAR_16 = VAR_5 - VAR_21->free_pad_ptr;
                    VAR_17[VAR_5 - VAR_21->free_pad_ptr] = '\0';
                    VAR_17[VAR_5 - VAR_21->free_pad_ptr + 1] = '\0';
                } else {
                    VAR_16 = 0;
                }
            }

            if ((VAR_16 > 0) && (VAR_17 != 0)) {
                VAR_25->len = VAR_16;
                FUNC_4 (&VAR_21->attr_pad[VAR_21->free_pad_ptr], VAR_17, (size_t)VAR_16);
                VAR_25->value_ptr = &VAR_21->attr_pad[VAR_21->free_pad_ptr];
                VAR_21->free_pad_ptr += VAR_16;
            } else if ((VAR_16 == 0 && VAR_25->len != 0) ||
                       VAR_17 == 0) {
                FUNC_2("SDP_AddAttribute fail, length exceed maximum: ID %d: attr_len:%d \n",
                                VAR_14, VAR_16 );
                VAR_25->id = VAR_25->type = VAR_25->len = 0;
                return (VAR_4);
            }
            VAR_21->num_attributes++;
            return (VAR_8);
        }
    }

    return (VAR_4);
}
