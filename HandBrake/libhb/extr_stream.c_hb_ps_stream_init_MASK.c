
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int alloc; int count; TYPE_4__* list; } ;
struct TYPE_10__ {TYPE_1__ pes; scalar_t__ scan; } ;
typedef TYPE_2__ hb_stream_t ;
struct TYPE_11__ {int stream_id; int next; scalar_t__ stream_kind; int stream_type; int stream_id_ext; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(hb_stream_t *VAR_4)
{
    int VAR_5;

    if ( VAR_4->pes.list )
    {
        for (VAR_5=0; VAR_5 < VAR_4->pes.alloc; VAR_5++)
        {
            VAR_4->pes.list[VAR_5].stream_id = -1;
            VAR_4->pes.list[VAR_5].next = -1;
        }
    }
    VAR_4->pes.count = 0;


    FUNC_2(VAR_4);
    FUNC_1(VAR_4);

    if( VAR_4->scan )
    {
        FUNC_0("Found the following streams");
        FUNC_0("    Video Streams : ");
        for (VAR_5=0; VAR_5 < VAR_4->pes.count; VAR_5++)
        {
            if ( VAR_4->pes.list[VAR_5].stream_kind == VAR_3 )
            {
                FUNC_0( "      0x%x-0x%x type %s (0x%x)",
                        VAR_4->pes.list[VAR_5].stream_id,
                        VAR_4->pes.list[VAR_5].stream_id_ext,
                        FUNC_4(VAR_4,
                                         &VAR_4->pes.list[VAR_5]),
                        VAR_4->pes.list[VAR_5].stream_type);
            }
        }
        FUNC_0("    Audio Streams : ");
        for (VAR_5 = 0; VAR_5 < VAR_4->pes.count; VAR_5++)
        {
            if ( VAR_4->pes.list[VAR_5].stream_kind == VAR_0 )
            {
                FUNC_0( "      0x%x-0x%x type %s (0x%x)",
                        VAR_4->pes.list[VAR_5].stream_id,
                        VAR_4->pes.list[VAR_5].stream_id_ext,
                        FUNC_4(VAR_4,
                                         &VAR_4->pes.list[VAR_5]),
                        VAR_4->pes.list[VAR_5].stream_type );
            }
        }
        FUNC_0("    Subtitle Streams : ");
        for (VAR_5 = 0; VAR_5 < VAR_4->pes.count; VAR_5++)
        {
            if ( VAR_4->pes.list[VAR_5].stream_kind == VAR_2 )
            {
                FUNC_0( "      0x%x-0x%x type %s (0x%x)",
                        VAR_4->pes.list[VAR_5].stream_id,
                        VAR_4->pes.list[VAR_5].stream_id_ext,
                        FUNC_4(VAR_4,
                                         &VAR_4->pes.list[VAR_5]),
                        VAR_4->pes.list[VAR_5].stream_type );
            }
        }
        FUNC_0("    Other Streams : ");
        for (VAR_5 = 0; VAR_5 < VAR_4->pes.count; VAR_5++)
        {
            if ( VAR_4->pes.list[VAR_5].stream_kind == VAR_1 )
            {
                FUNC_0( "      0x%x-0x%x type %s (0x%x)",
                        VAR_4->pes.list[VAR_5].stream_id,
                        VAR_4->pes.list[VAR_5].stream_id_ext,
                        FUNC_4(VAR_4,
                                         &VAR_4->pes.list[VAR_5]),
                        VAR_4->pes.list[VAR_5].stream_type );
                FUNC_3(VAR_4, VAR_5);
            }
        }
    }
    else
    {
        for (VAR_5 = 0; VAR_5 < VAR_4->pes.count; VAR_5++)
        {
            if ( VAR_4->pes.list[VAR_5].stream_kind == VAR_1 )
                FUNC_3(VAR_4, VAR_5);
        }
    }
}
