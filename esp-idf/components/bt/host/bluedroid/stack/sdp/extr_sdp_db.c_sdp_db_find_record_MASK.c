
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ record_handle; } ;
typedef TYPE_2__ tSDP_RECORD ;
typedef scalar_t__ UINT32 ;
struct TYPE_5__ {size_t num_records; TYPE_2__* record; } ;
struct TYPE_7__ {TYPE_1__ server_db; } ;


 TYPE_4__ VAR_0 ;

tSDP_RECORD *FUNC_0 (UINT32 VAR_1)
{
    tSDP_RECORD *VAR_2;
    tSDP_RECORD *VAR_3 = &VAR_0.server_db.record[VAR_0.server_db.num_records];


    for (VAR_2 = &VAR_0.server_db.record[0]; VAR_2 < VAR_3; VAR_2++) {
        if (VAR_2->record_handle == VAR_1) {
            return (VAR_2);
        }
    }


    return (((void*)0));
}
