
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int list_attachment; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_13__ {TYPE_1__* ffmpeg_ic; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_14__ {int type; int size; int data; int name; } ;
typedef TYPE_4__ hb_attachment_t ;
typedef enum attachtype { ____Placeholder_attachtype } attachtype ;
struct TYPE_16__ {int codec_id; int extradata_size; int extradata; } ;
struct TYPE_15__ {int metadata; TYPE_6__* codecpar; } ;
struct TYPE_11__ {TYPE_5__** streams; } ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVCodecParameters ;



 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int,int) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8( hb_title_t *VAR_2, hb_stream_t *VAR_3, int VAR_4 )
{
    AVStream *VAR_5 = VAR_3->ffmpeg_ic->streams[VAR_4];
    AVCodecParameters *VAR_6 = VAR_5->codecpar;

    enum attachtype VAR_7;
    const char *VAR_8 = FUNC_1( VAR_5->metadata, "filename" );
    switch ( VAR_6->codec_id )
    {
        case 128:

            VAR_7 = VAR_1;
            break;
        default:
        {
            int VAR_9 = VAR_8 ? FUNC_7( VAR_8 ) : 0;
            if( VAR_9 >= 4 )
            {


                if( !FUNC_5( VAR_8 + VAR_9 - 4, ".ttc" ) ||
                    !FUNC_5( VAR_8 + VAR_9 - 4, ".ttf" ) )
                {
                    VAR_7 = VAR_1;
                    break;
                }
                else if( !FUNC_5( VAR_8 + VAR_9 - 4, ".otf" ) )
                {
                    VAR_7 = VAR_0;
                    break;
                }
            }

            return;
        }
    }

    hb_attachment_t *VAR_10 = FUNC_0( 1, sizeof(*VAR_10) );


    VAR_10->type = VAR_7;
    VAR_10->name = FUNC_6( VAR_8 );
    VAR_10->data = FUNC_3( VAR_6->extradata_size );
    FUNC_4( VAR_10->data, VAR_6->extradata, VAR_6->extradata_size );
    VAR_10->size = VAR_6->extradata_size;

    FUNC_2(VAR_2->list_attachment, VAR_10);
}
