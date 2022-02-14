
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ record_handle; scalar_t__ num_attributes; TYPE_1__* attribute; } ;
typedef TYPE_3__ tSDP_RECORD ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ num_records; scalar_t__ di_primary_handle; TYPE_3__* record; } ;
struct TYPE_8__ {TYPE_2__ server_db; } ;
struct TYPE_5__ {int value_ptr; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

BOOLEAN FUNC_1 (UINT32 VAR_3)
{

    UINT16 VAR_4, VAR_5, VAR_6;
    tSDP_RECORD *VAR_7 = &VAR_2.server_db.record[0];

    if (VAR_3 == 0 || VAR_2.server_db.num_records == 0) {

        VAR_2.server_db.num_records = 0;


        VAR_2.server_db.di_primary_handle = 0;

        return (VAR_1);
    } else {

        for (VAR_4 = 0; VAR_4 < VAR_2.server_db.num_records; VAR_4++, VAR_7++) {
            if (VAR_7->record_handle == VAR_3) {

                for (VAR_5 = VAR_4; VAR_5 < VAR_2.server_db.num_records; VAR_5++, VAR_7++) {
                    *VAR_7 = *(VAR_7 + 1);


                    for (VAR_6 = 0; VAR_6 < VAR_7->num_attributes; VAR_6++) {
                        VAR_7->attribute[VAR_6].value_ptr -= sizeof(tSDP_RECORD);
                    }
                }

                VAR_2.server_db.num_records--;

                FUNC_0("SDP_DeleteRecord ok, num_records:%d\n", VAR_2.server_db.num_records);


                if ( VAR_2.server_db.di_primary_handle == VAR_3 ) {
                    VAR_2.server_db.di_primary_handle = 0;
                }

                return (VAR_1);
            }
        }
    }

    return (VAR_0);
}
