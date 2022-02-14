
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int tablepos; int current_continuity_counter; int reading; int* tablebuf; } ;
struct TYPE_6__ {TYPE_1__ pmt_info; } ;
typedef TYPE_2__ hb_stream_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,int const*,int) ;
 int* FUNC_4 (int*,int) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_0, hb_stream_t *VAR_1)
{

    int VAR_2 = 0;
    int VAR_3 = (VAR_0[3] & 0x30) >> 4;
    if (VAR_3 == 0)
            return 0;
    else if (VAR_3 == 0x2)
            VAR_2 = 184;
    else if (VAR_3 == 0x3)
            VAR_2 = VAR_0[4] + 1;
    if (VAR_2 > 184)
            return 0;


    int VAR_4;
    VAR_4 = (VAR_0[1] & 0x40) != 0;


    int VAR_5 = 0;

    if (VAR_4)
    {
        VAR_5 = VAR_0[4 + VAR_2] + 1;
        VAR_1->pmt_info.tablepos = 0;
    }

    int VAR_6 = VAR_0[3] & 0x0f;
    if (!VAR_4 && (VAR_1->pmt_info.current_continuity_counter + 1 != VAR_6))
    {
        FUNC_2("build_program_map - Continuity Counter %d out of sequence - expected %d", VAR_6, VAR_1->pmt_info.current_continuity_counter+1);
        return 0;
    }
    VAR_1->pmt_info.current_continuity_counter = VAR_6;
    VAR_1->pmt_info.reading |= VAR_4;


    int VAR_7 = 184 - VAR_2 - VAR_5;
    if (VAR_1->pmt_info.reading && (VAR_7 > 0))
    {
            VAR_1->pmt_info.tablebuf = FUNC_4(VAR_1->pmt_info.tablebuf, VAR_1->pmt_info.tablepos + VAR_7);

            FUNC_3(*(VAR_1->pmt_info.tablebuf + VAR_1->pmt_info.tablepos), VAR_0 + 4 + VAR_2 + VAR_5, VAR_7);
            VAR_1->pmt_info.tablepos += VAR_7;
    }
    if (VAR_1->pmt_info.tablepos > 3)
    {

        int VAR_8;
        VAR_8 = ((VAR_1->pmt_info.tablebuf[1] << 8) +
                  VAR_1->pmt_info.tablebuf[2]) & 0xFFF;
        if (VAR_1->pmt_info.tablepos > VAR_8 + 1)
        {

            int VAR_9 = 0;
            if (VAR_1->pmt_info.tablebuf[0] == 0x02)
                VAR_9 = FUNC_0(VAR_1);
            FUNC_1(VAR_1->pmt_info.tablebuf);
            VAR_1->pmt_info.tablebuf = ((void*)0);
            VAR_1->pmt_info.tablepos = 0;
            VAR_1->pmt_info.reading = 0;
            if (VAR_9)
                return VAR_9;
        }

    }

    return 0;
}
