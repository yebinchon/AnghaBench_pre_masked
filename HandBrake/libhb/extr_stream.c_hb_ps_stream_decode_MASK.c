
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_19__ {int found_scr; int scr; TYPE_16__* list; } ;
struct TYPE_20__ {int ts_flags; int need_keyframe; TYPE_2__ pes; int frames; int errors; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_21__ {int stream_id; scalar_t__ header_len; int dts; int pts; int stream_id_ext; int bd_substream_id; int scr; } ;
typedef TYPE_4__ hb_pes_info_t ;
struct TYPE_18__ {scalar_t__ type; int renderOffset; int start; int pcr; int id; } ;
struct TYPE_22__ {scalar_t__ size; scalar_t__ data; TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_17__ {int stream_kind; } ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_16__*) ;
 int FUNC_1 (TYPE_5__**) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static hb_buffer_t * FUNC_8( hb_stream_t *VAR_6 )
{
    hb_pes_info_t VAR_7;
    hb_buffer_t *VAR_8 = FUNC_2(VAR_2);

    while (1)
    {
        VAR_8->size = 0;
        int VAR_9 = FUNC_4( VAR_6, VAR_8 );
        if ( VAR_9 == 0 )
        {

            FUNC_1( &VAR_8 );
            return VAR_8;
        }
        if ( !FUNC_3( VAR_6, VAR_8->data, VAR_8->size, &VAR_7 ) )
        {
            ++VAR_6->errors;
            continue;
        }

        if ( VAR_7.stream_id == 0xba )
        {
            VAR_6->pes.found_scr = 1;
            VAR_6->ts_flags |= VAR_4;
            VAR_6->pes.scr = VAR_7.scr;
            continue;
        }



        if ( !VAR_6->pes.found_scr && ( VAR_6->ts_flags & VAR_4 ) )
        {
            continue;
        }


        if ( VAR_7.stream_id == 0xbb )
            continue;

        int VAR_10;
        if ( VAR_7.stream_id == 0xbd )
        {
            VAR_10 = FUNC_5( VAR_6, VAR_7.stream_id,
                                      VAR_7.bd_substream_id );
        }
        else
        {
            VAR_10 = FUNC_5( VAR_6, VAR_7.stream_id,
                                      VAR_7.stream_id_ext );
        }


        if ( VAR_10 < 0 )
            continue;

        switch (VAR_6->pes.list[VAR_10].stream_kind)
        {
            case 129:
                VAR_8->s.type = VAR_0;
                break;

            case 128:
                VAR_8->s.type = VAR_5;
                break;

            default:
                VAR_8->s.type = VAR_3;
                break;
        }

        if ( VAR_6->need_keyframe )
        {


            if ( VAR_8->s.type != VAR_5 ||
                 !FUNC_6( VAR_6, VAR_8->data, VAR_8->size ) )
            {


                if ( VAR_8->s.type != VAR_5 || ++VAR_6->need_keyframe < 600 )
                {
                    continue;
                }
            }
            VAR_6->need_keyframe = 0;
        }
        if ( VAR_8->s.type == VAR_5 )
            ++VAR_6->frames;

        VAR_8->s.id = FUNC_0( &VAR_6->pes.list[VAR_10] );
        VAR_8->s.pcr = VAR_6->pes.scr;
        VAR_8->s.start = VAR_7.pts;
        VAR_8->s.renderOffset = VAR_7.dts;
        FUNC_7( VAR_8->data, VAR_8->data + VAR_7.header_len,
                 VAR_8->size - VAR_7.header_len );
        VAR_8->size -= VAR_7.header_len;
        if ( VAR_8->size == 0 )
            continue;
        VAR_6->pes.scr = VAR_1;
        return VAR_8;
    }
}
