
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int* data; int flags; } ;
struct TYPE_11__ {size_t ffmpeg_video_id; TYPE_4__ ffmpeg_pkt; TYPE_3__* ffmpeg_ic; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_9__ {TYPE_2__** streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int codec_id; int* extradata; } ;




 int VAR_0 ;

__attribute__((used)) static int FUNC_0( hb_stream_t *VAR_1 )
{
    uint8_t *VAR_2;

    switch (VAR_1->ffmpeg_ic->streams[VAR_1->ffmpeg_video_id]->codecpar->codec_id)
    {
        case 129:



            VAR_2 = VAR_1->ffmpeg_pkt.data;
            if ( !VAR_2[0] && !VAR_2[1] && VAR_2[2] == 1 && VAR_2[3] == 0x0f )
                return 1;

            return 0;

        case 128:
            VAR_2 = VAR_1->ffmpeg_pkt.data;
            uint8_t *VAR_3 = VAR_1->ffmpeg_ic->streams[VAR_1->ffmpeg_video_id]->codecpar->extradata;
            int VAR_4 = 2;
            if ( ( VAR_3[3] & 0x02 ) == 0 )

                ++VAR_4;
            if ( ( VAR_3[3] & 0x80 ) == 0 )

                ++VAR_4;
            if ( VAR_3[3] & 0x70 )

                return ( ( VAR_2[0] >> VAR_4 ) & 0x3 ) == 0x01;

            return ( ( VAR_2[0] >> VAR_4 ) & 0x2 ) == 0;

        default:
            break;
    }
    return ( VAR_1->ffmpeg_pkt.flags & VAR_0 );
}
