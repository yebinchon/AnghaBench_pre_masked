
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;


struct TYPE_25__ {int count; TYPE_6__* list; } ;
struct TYPE_24__ {int count; TYPE_2__* list; } ;
struct TYPE_26__ {scalar_t__ reg_desc; TYPE_4__ pes; scalar_t__ need_keyframe; TYPE_3__ ts; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_27__ {scalar_t__ stream_kind; scalar_t__ probe_next_size; TYPE_7__* probe_buf; int stream_id_ext; int stream_id; int codec_name; void* codec_param; void* codec; } ;
typedef TYPE_6__ hb_pes_stream_t ;
struct TYPE_22__ {int id; } ;
struct TYPE_28__ {TYPE_1__ s; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_23__ {int pid; int pes_list; } ;
struct TYPE_21__ {void* codec_param; void* codec; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_7__**) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (TYPE_5__*,double) ;
 TYPE_7__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 TYPE_11__* VAR_19 ;
 scalar_t__ FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_5__*,int,int ,int,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_10(hb_stream_t *VAR_20)
{
    int VAR_21, VAR_22 = 0;

    for ( VAR_21 = 0; VAR_21 < VAR_20->ts.count; VAR_21++ )
    {
        int VAR_23 = VAR_20->ts.list[VAR_21].pid;
        int VAR_24 = FUNC_8( VAR_20, VAR_21 );
        int VAR_25;

        if ( VAR_24 == 0x80 &&
             VAR_20->reg_desc == FUNC_0("HDMV") )
        {



            FUNC_9( VAR_20, VAR_23, 0, VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_10;
            VAR_20->pes.list[VAR_25].codec_param = VAR_4;
            continue;
        }







        if ( VAR_24 == 0x83 &&
             VAR_20->reg_desc == FUNC_0("HDMV") )
        {


            FUNC_9( VAR_20, VAR_23, VAR_12,
                               VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_6;
            VAR_20->pes.list[VAR_25].codec_param = VAR_1;

            FUNC_9( VAR_20, VAR_23, VAR_14,
                               VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_11;
            VAR_20->pes.list[VAR_25].codec_param = VAR_5;
            continue;
        }
        if ( ( VAR_24 == 0x84 || VAR_24 == 0xa1 ) &&
             VAR_20->reg_desc == FUNC_0("HDMV") )
        {



            FUNC_9( VAR_20, VAR_23, 0, VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_9;
            VAR_20->pes.list[VAR_25].codec_param = VAR_3;
            continue;
        }





        if ( VAR_24 == 0x85 &&
             VAR_20->reg_desc == FUNC_0("HDMV") )
        {





            FUNC_9( VAR_20, VAR_23, VAR_13,
                               VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_7;
            VAR_20->pes.list[VAR_25].codec_param = VAR_2;

            FUNC_9( VAR_20, VAR_23, 0, VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_8;
            VAR_20->pes.list[VAR_25].codec_param = VAR_2;
            continue;
        }
        if ( VAR_24 == 0x86 &&
             VAR_20->reg_desc == FUNC_0("HDMV") )
        {


            FUNC_9( VAR_20, VAR_23, VAR_13,
                               VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_7;
            VAR_20->pes.list[VAR_25].codec_param = VAR_2;

            FUNC_9( VAR_20, VAR_23, 0, VAR_24, VAR_0, &VAR_25 );
            VAR_20->pes.list[VAR_25].codec = VAR_8;
            VAR_20->pes.list[VAR_25].codec_param = VAR_2;
            continue;
        }


        if ( VAR_24 != 0 &&
             ( FUNC_7( VAR_20, VAR_21 ) == VAR_0 ||
               FUNC_7( VAR_20, VAR_21 ) == VAR_16 ||
               FUNC_7( VAR_20, VAR_21 ) == VAR_18 ) )
        {




            VAR_25 = VAR_20->ts.list[VAR_21].pes_list;
            VAR_20->pes.list[VAR_25].codec = VAR_19[VAR_24].codec;
            VAR_20->pes.list[VAR_25].codec_param = VAR_19[VAR_24].codec_param;
            continue;
        }

        if ( FUNC_7( VAR_20, VAR_21 ) == VAR_17 )
        {
            VAR_22++;
        }
    }


    FUNC_4( VAR_20, 0.0 );
    VAR_20->need_keyframe = 0;

    hb_buffer_t *VAR_26;

    if ( VAR_22 )
        FUNC_3("Probing %d unknown stream%s", VAR_22, VAR_22 > 1 ? "s" : "" );

    while ( VAR_22 && ( VAR_26 = FUNC_5( VAR_20 ) ) != ((void*)0) )
    {
        int VAR_27, VAR_28;
        VAR_27 = FUNC_6( VAR_20, VAR_26->s.id );

        if (VAR_27 < 0 || VAR_20->pes.list[VAR_27].stream_kind != VAR_17 )
        {
            FUNC_2(&VAR_26);
            continue;
        }

        hb_pes_stream_t *VAR_29 = &VAR_20->pes.list[VAR_27];

        VAR_28 = FUNC_1(VAR_20, VAR_29, VAR_26);
        if (VAR_28 < 0)
        {
            FUNC_3("    Probe: Unsupported stream %s. stream id 0x%x-0x%x",
                    VAR_29->codec_name, VAR_29->stream_id, VAR_29->stream_id_ext);
            VAR_29->stream_kind = VAR_15;
            VAR_22--;
        }
        else if (VAR_28 && VAR_29->stream_kind != VAR_17)
        {
            FUNC_3("    Probe: Found stream %s. stream id 0x%x-0x%x",
                    VAR_29->codec_name, VAR_29->stream_id, VAR_29->stream_id_ext);
            VAR_22--;
        }
        FUNC_2(&VAR_26);
    }


    for ( VAR_21 = 0; VAR_21 < VAR_20->pes.count; VAR_21++ )
    {
        if ( VAR_20->pes.list[VAR_21].stream_kind == VAR_17 )
            VAR_20->pes.list[VAR_21].stream_kind = VAR_15;
        FUNC_2( &VAR_20->pes.list[VAR_21].probe_buf );
        VAR_20->pes.list[VAR_21].probe_next_size = 0;
    }
}
