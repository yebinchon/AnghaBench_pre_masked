
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {int alloc; int count; TYPE_2__* list; int packet; } ;
struct TYPE_15__ {int alloc; TYPE_8__* list; scalar_t__ count; } ;
struct TYPE_18__ {TYPE_3__ ts; TYPE_1__ pes; scalar_t__ scan; int packetsize; } ;
typedef TYPE_4__ hb_stream_t ;
struct TYPE_19__ {int stream_id; int next; } ;
struct TYPE_16__ {int continuity; int pid; int pes_list; scalar_t__ is_pcr; TYPE_13__* buf; } ;
struct TYPE_14__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_13__* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_9(hb_stream_t *VAR_5)
{
    int VAR_6;

    if ( VAR_5->ts.list )
    {
        for (VAR_6=0; VAR_6 < VAR_5->ts.alloc; VAR_6++)
        {
            VAR_5->ts.list[VAR_6].continuity = -1;
            VAR_5->ts.list[VAR_6].pid = -1;
            VAR_5->ts.list[VAR_6].pes_list = -1;
        }
    }
    VAR_5->ts.count = 0;

    if ( VAR_5->pes.list )
    {
        for (VAR_6=0; VAR_6 < VAR_5->pes.alloc; VAR_6++)
        {
            VAR_5->pes.list[VAR_6].stream_id = -1;
            VAR_5->pes.list[VAR_6].next = -1;
        }
    }
    VAR_5->pes.count = 0;

    VAR_5->ts.packet = FUNC_5( VAR_5->packetsize );


    if (FUNC_4(VAR_5) < 0)
    {
        return -1;
    }



    for (VAR_6 = 0; VAR_6 < VAR_5->ts.count; VAR_6++)
    {

        VAR_5->ts.list[VAR_6].buf = FUNC_0(VAR_5->packetsize);
        VAR_5->ts.list[VAR_6].buf->size = 0;
    }
    FUNC_3(VAR_5);

    if( VAR_5->scan )
    {
        FUNC_1("Found the following PIDS");
        FUNC_1("    Video PIDS : ");
        for (VAR_6=0; VAR_6 < VAR_5->ts.count; VAR_6++)
        {
            if ( FUNC_7( VAR_5, VAR_6 ) == VAR_4 )
            {
                FUNC_1( "      0x%x type %s (0x%x)%s",
                        VAR_5->ts.list[VAR_6].pid,
                        FUNC_6(VAR_5,
                                &VAR_5->pes.list[VAR_5->ts.list[VAR_6].pes_list]),
                        FUNC_8( VAR_5, VAR_6 ),
                        VAR_5->ts.list[VAR_6].is_pcr ? " (PCR)" : "");
            }
        }
        FUNC_1("    Audio PIDS : ");
        for (VAR_6 = 0; VAR_6 < VAR_5->ts.count; VAR_6++)
        {
            if ( FUNC_7( VAR_5, VAR_6 ) == VAR_0 )
            {
                FUNC_1( "      0x%x type %s (0x%x)%s",
                        VAR_5->ts.list[VAR_6].pid,
                        FUNC_6(VAR_5,
                                &VAR_5->pes.list[VAR_5->ts.list[VAR_6].pes_list]),
                        FUNC_8( VAR_5, VAR_6 ),
                        VAR_5->ts.list[VAR_6].is_pcr ? " (PCR)" : "");
            }
        }
        FUNC_1("    Subtitle PIDS : ");
        for (VAR_6 = 0; VAR_6 < VAR_5->ts.count; VAR_6++)
        {
            if ( FUNC_7( VAR_5, VAR_6 ) == VAR_3 )
            {
                FUNC_1( "      0x%x type %s (0x%x)%s",
                        VAR_5->ts.list[VAR_6].pid,
                        FUNC_6(VAR_5,
                                &VAR_5->pes.list[VAR_5->ts.list[VAR_6].pes_list]),
                        FUNC_8( VAR_5, VAR_6 ),
                        VAR_5->ts.list[VAR_6].is_pcr ? " (PCR)" : "");
            }
        }
        FUNC_1("    Other PIDS : ");
        for (VAR_6 = 0; VAR_6 < VAR_5->ts.count; VAR_6++)
        {
            if ( FUNC_7( VAR_5, VAR_6 ) == VAR_1 ||
                 FUNC_7( VAR_5, VAR_6 ) == VAR_2 )
            {
                FUNC_1( "      0x%x type %s (0x%x)%s",
                        VAR_5->ts.list[VAR_6].pid,
                        FUNC_6(VAR_5,
                                &VAR_5->pes.list[VAR_5->ts.list[VAR_6].pes_list]),
                        FUNC_8( VAR_5, VAR_6 ),
                        VAR_5->ts.list[VAR_6].is_pcr ? " (PCR)" : "");
            }
            if ( FUNC_7( VAR_5, VAR_6 ) == VAR_1 )
                FUNC_2(VAR_5, VAR_6);
        }
    }
    else
    {
        for (VAR_6 = 0; VAR_6 < VAR_5->ts.count; VAR_6++)
        {
            if ( FUNC_7( VAR_5, VAR_6 ) == VAR_1 )
                FUNC_2(VAR_5, VAR_6);
        }
    }
    return 0;
}
