
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ num_uids; TYPE_2__* uuid_entry; } ;
typedef TYPE_3__ tSDP_UUID_SEQ ;
struct TYPE_13__ {scalar_t__ num_attributes; TYPE_5__* attribute; } ;
typedef TYPE_4__ tSDP_RECORD ;
struct TYPE_14__ {scalar_t__ type; int len; int value_ptr; } ;
typedef TYPE_5__ tSDP_ATTRIBUTE ;
typedef scalar_t__ UINT16 ;
struct TYPE_10__ {size_t num_records; TYPE_4__* record; } ;
struct TYPE_15__ {TYPE_1__ server_db; } ;
struct TYPE_11__ {int len; int * value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,int ) ;
 TYPE_9__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;

tSDP_RECORD *FUNC_2 (tSDP_RECORD *VAR_3, tSDP_UUID_SEQ *VAR_4)
{
    UINT16 VAR_5, VAR_6;
    tSDP_ATTRIBUTE *VAR_7;
    tSDP_RECORD *VAR_8 = &VAR_2.server_db.record[VAR_2.server_db.num_records];


    if (!VAR_3) {
        VAR_3 = &VAR_2.server_db.record[0];
    } else {
        VAR_3++;
    }



    for ( ; VAR_3 < VAR_8; VAR_3++) {
        for (VAR_6 = 0; VAR_6 < VAR_4->num_uids; VAR_6++) {
            VAR_7 = &VAR_3->attribute[0];
            for (VAR_5 = 0; VAR_5 < VAR_3->num_attributes; VAR_5++, VAR_7++) {
                if (VAR_7->type == VAR_1) {
                    if (FUNC_1 (VAR_7->value_ptr, VAR_7->len,
                                                  &VAR_4->uuid_entry[VAR_6].value[0],
                                                  VAR_4->uuid_entry[VAR_6].len)) {
                        break;
                    }
                } else if (VAR_7->type == VAR_0) {
                    if (FUNC_0 (VAR_7->value_ptr, VAR_7->len,
                                          &VAR_4->uuid_entry[VAR_6].value[0],
                                          VAR_4->uuid_entry[VAR_6].len, 0)) {
                        break;
                    }
                }
            }

            if (VAR_5 == VAR_3->num_attributes) {
                break;
            }
        }


        if (VAR_6 == VAR_4->num_uids) {
            return (VAR_3);
        }
    }


    return (((void*)0));
}
