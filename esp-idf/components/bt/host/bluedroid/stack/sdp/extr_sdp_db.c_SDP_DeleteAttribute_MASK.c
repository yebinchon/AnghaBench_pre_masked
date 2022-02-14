
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ record_handle; scalar_t__ num_attributes; int free_pad_ptr; int * attr_pad; TYPE_3__* attribute; } ;
typedef TYPE_2__ tSDP_RECORD ;
struct TYPE_7__ {scalar_t__ id; scalar_t__ len; int * value_ptr; } ;
typedef TYPE_3__ tSDP_ATTRIBUTE ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {scalar_t__ num_records; TYPE_2__* record; } ;
struct TYPE_8__ {TYPE_1__ server_db; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

BOOLEAN FUNC_1 (UINT32 VAR_3, UINT16 VAR_4)
{

    UINT16 VAR_5, VAR_6;
    tSDP_RECORD *VAR_7 = &VAR_2.server_db.record[0];
    UINT8 *VAR_8;
    UINT32 VAR_9;


    for (VAR_5 = 0; VAR_5 < VAR_2.server_db.num_records; VAR_5++, VAR_7++) {
        if (VAR_7->record_handle == VAR_3) {
            tSDP_ATTRIBUTE *VAR_10 = &VAR_7->attribute[0];

            FUNC_0("Deleting attr_id 0x%04x for handle 0x%x\n", VAR_4, VAR_3);

            for (VAR_5 = 0; VAR_5 < VAR_7->num_attributes; VAR_5++, VAR_10++) {
                if (VAR_10->id == VAR_4) {
                    VAR_8 = VAR_10->value_ptr;
                    VAR_9 = VAR_10->len;

                    if (VAR_9) {
                        for (VAR_6 = 0; VAR_6 < VAR_7->num_attributes; VAR_6++) {
                            if ( VAR_7->attribute[VAR_6].value_ptr > VAR_8 ) {
                                VAR_7->attribute[VAR_6].value_ptr -= VAR_9;
                            }
                        }
                    }


                    VAR_7->num_attributes--;

                    for (VAR_6 = VAR_5; VAR_6 < VAR_7->num_attributes; VAR_6++, VAR_10++) {
                        *VAR_10 = *(VAR_10 + 1);
                    }


                    if (VAR_9) {
                        VAR_5 = (VAR_7->free_pad_ptr - ((VAR_8 + VAR_9) -
                                                     &VAR_7->attr_pad[0]));
                        for ( VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_8++) {
                            *VAR_8 = *(VAR_8 + VAR_9);
                        }
                        VAR_7->free_pad_ptr -= VAR_9;
                    }
                    return (VAR_1);
                }
            }
        }
    }


    return (VAR_0);
}
