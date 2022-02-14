
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ PCR_PID; } ;
struct TYPE_6__ {int ts_flags; TYPE_1__ pmt_info; } ;
typedef TYPE_2__ hb_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int const,...) ;
 int* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static const uint8_t *FUNC_2(hb_stream_t *VAR_2, uint32_t VAR_3, int *VAR_4)
{
    int VAR_5 = 300000;

    while (--VAR_5 >= 0)
    {
        const uint8_t *VAR_6 = FUNC_1( VAR_2 );
        if ( VAR_6 == ((void*)0) )
        {
            FUNC_0("hb_ts_stream_getPEStype: EOF while searching for PID 0x%x", VAR_3);
            return 0;
        }



        uint32_t VAR_7 = ( (VAR_6[1] & 0x1f) << 8 ) | VAR_6[2];
        if ( VAR_7 == VAR_2->pmt_info.PCR_PID )
        {
            if ( ( VAR_6[5] & 0x10 ) &&
                 ( ( ( VAR_6[3] & 0x30 ) == 0x20 ) ||
                   ( ( VAR_6[3] & 0x30 ) == 0x30 && VAR_6[4] > 6 ) ) )
            {
                VAR_2->ts_flags |= VAR_0;
            }
        }
        if ( VAR_6[5] & 0x40 )
        {
            VAR_2->ts_flags |= VAR_1;
        }





        if ((VAR_6[1] & 0x40) == 0 || VAR_7 != VAR_3 )
        {

            continue;
        }

        int VAR_8 = 0;

        switch (VAR_6[3] & 0x30)
        {
            case 0x00:
            case 0x20:
                continue;

            case 0x30:
                VAR_8 = VAR_6[4] + 1;
                if (VAR_8 > 184)
                {
                    FUNC_0("hb_ts_stream_getPEStype: invalid adaptation field length %d for PID 0x%x", VAR_6[4], VAR_3);
                    continue;
                }
                break;
        }

        if (VAR_6[VAR_8+4] == 0x00 && VAR_6[VAR_8+5] == 0x00 && VAR_6[VAR_8+6] == 0x01)
        {
            *VAR_4 = VAR_8;
            return VAR_6;
        }
    }


    return 0;
}
