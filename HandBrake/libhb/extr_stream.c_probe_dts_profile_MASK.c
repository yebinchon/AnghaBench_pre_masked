
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int (* bsinfo ) (TYPE_1__*,int ,TYPE_2__*) ;int codec_param; } ;
typedef TYPE_1__ hb_work_object_t ;
struct TYPE_12__ {int profile; } ;
typedef TYPE_2__ hb_work_info_t ;
struct TYPE_13__ {int h; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_14__ {int stream_type; scalar_t__* codec_name; int codec_param; void* stream_kind; int codec; int stream_id; int probe_buf; } ;
typedef TYPE_4__ hb_pes_stream_t ;
typedef int AVCodec ;


 void* VAR_0 ;





 int VAR_1 ;
 char* FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (scalar_t__*,char const*,int) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7( hb_stream_t *VAR_2, hb_pes_stream_t *VAR_3 )
{
    hb_work_info_t VAR_4;
    hb_work_object_t *VAR_5 = FUNC_3( VAR_2->h, VAR_3->codec );

    VAR_5->codec_param = VAR_3->codec_param;
    int VAR_6 = VAR_5->bsinfo( VAR_5, VAR_3->probe_buf, &VAR_4 );
    if ( VAR_6 < 0 )
    {
        FUNC_4( "probe_dts_profile: no info type %d/0x%x for id 0x%x",
                VAR_3->codec, VAR_3->codec_param, VAR_3->stream_id );

    }
    switch (VAR_4.profile)
    {
        case 132:
        case 130:
        case 131:
            VAR_3->codec = VAR_1;
            VAR_3->stream_type = 0x82;
            VAR_3->stream_kind = VAR_0;
            break;

        case 129:
        case 128:
            VAR_3->stream_type = 0;
            VAR_3->stream_kind = VAR_0;
            break;

        default:
            FUNC_2(VAR_5);
            return 0;
    }
    const char *VAR_7;
    AVCodec *VAR_8 = FUNC_1( VAR_3->codec_param );
    VAR_7 = FUNC_0( VAR_8, VAR_4.profile );
    if ( VAR_7 )
    {
        FUNC_5(VAR_3->codec_name, VAR_7, 80);
        VAR_3->codec_name[79] = 0;
    }
    FUNC_2(VAR_5);
    return 1;
}
