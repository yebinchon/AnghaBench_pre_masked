
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSDP_RECORD ;
struct TYPE_4__ {size_t num_records; TYPE_3__* record; } ;
typedef TYPE_1__ tSDP_DB ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {int record_handle; } ;
struct TYPE_5__ {TYPE_1__ server_db; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int,int *) ;
 size_t VAR_1 ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 TYPE_2__ VAR_3 ;

UINT32 FUNC_5 (void)
{

    UINT32 VAR_4;
    UINT8 VAR_5[4];
    tSDP_DB *VAR_6 = &VAR_3.server_db;


    if (VAR_6->num_records < VAR_1) {
        FUNC_4 (&VAR_6->record[VAR_6->num_records], 0,
                sizeof (tSDP_RECORD));



        if (VAR_6->num_records) {
            VAR_4 = VAR_6->record[VAR_6->num_records - 1].record_handle + 1;
        } else {
            VAR_4 = 0x10000;
        }

        VAR_6->record[VAR_6->num_records].record_handle = VAR_4;

        VAR_6->num_records++;
        FUNC_1("SDP_CreateRecord ok, num_records:%d\n", VAR_6->num_records);

        FUNC_3 (VAR_5, VAR_4);
        FUNC_0 (VAR_4, VAR_0, VAR_2,
                          4, VAR_5);

        return (VAR_6->record[VAR_6->num_records - 1].record_handle);
    } else {
        FUNC_2("SDP_CreateRecord fail, exceed maximum records:%d\n", VAR_1);
    }

    return (0);
}
