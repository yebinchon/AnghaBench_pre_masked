
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_12__ {int PCR_PID; } ;
struct TYPE_13__ {int ts_number_pat_entries; TYPE_2__ pmt_info; TYPE_1__* pat_info; int file_handle; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_11__ {scalar_t__ program_number; int program_map_PID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int const*,TYPE_3__*) ;
 int FUNC_2 (int const*,TYPE_3__*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int* FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_9(hb_stream_t *VAR_3)
{




    FUNC_3(VAR_3->file_handle, 0, VAR_1);
    uint64_t VAR_4 = FUNC_4(VAR_3->file_handle);
    FUNC_3(VAR_3->file_handle, VAR_4 >> 1, VAR_2);
    FUNC_0(VAR_3);




    for (;;)
    {
        const uint8_t *VAR_5 = FUNC_6( VAR_3 );

        if ( VAR_5 == ((void*)0) )
        {
            FUNC_5("hb_ts_stream_find_pids - end of file");
            break;
        }


        int VAR_6 = (((VAR_5[1] & 0x1F) << 8) | VAR_5[2]) & 0x1FFF;

        if ((VAR_6 == 0x0000) && (VAR_3->ts_number_pat_entries == 0))
        {
            FUNC_2(VAR_5, VAR_3);
            continue;
        }

        int VAR_7 = 0;
        for (VAR_7 = 0; VAR_7 < VAR_3->ts_number_pat_entries; VAR_7++)
        {
            if (VAR_3->pat_info[VAR_7].program_number != 0 &&
                VAR_6 == VAR_3->pat_info[VAR_7].program_map_PID)
            {
                if (FUNC_1(VAR_5, VAR_3) > 0)
                {
                    break;
                }
            }
        }

        if ( FUNC_7( VAR_3 ) >= 0 )
          break;
    }
    if ( FUNC_7( VAR_3 ) < 0 )
        return -1;
    FUNC_8( VAR_3, VAR_3->pmt_info.PCR_PID, 0, -1, VAR_0, ((void*)0) );
    return 0;
}
