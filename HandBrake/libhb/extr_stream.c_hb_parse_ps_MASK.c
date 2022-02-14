
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hb_stream_t ;
struct TYPE_14__ {int stream_id; int packet_len; int header_len; void* dts; void* pts; } ;
typedef TYPE_1__ hb_pes_info_t ;
struct TYPE_15__ {int pos; } ;
typedef TYPE_2__ bitbuf_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int *,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(
    hb_stream_t *VAR_1,
    uint8_t *VAR_2,
    int VAR_3,
    hb_pes_info_t *VAR_4 )
{
    FUNC_4( VAR_4, 0, sizeof( hb_pes_info_t ) );
    VAR_4->pts = VAR_0;
    VAR_4->dts = VAR_0;

    bitbuf_t VAR_5, VAR_6;
    FUNC_3(&VAR_5, VAR_2, VAR_3, 0);
    FUNC_1(&VAR_6, &VAR_5, VAR_3);

    if ( FUNC_0(&VAR_5) < 4 )
        return 0;


    if ( FUNC_2(&VAR_5, 8 * 3) != 0x000001 )
    {
        return 0;
    }

    VAR_4->stream_id = FUNC_2(&VAR_5, 8);
    if ( VAR_4->stream_id == 0xb9 )
    {

        return 1;
    }
    else if ( VAR_4->stream_id == 0xba )
    {
        return FUNC_5( VAR_1, &VAR_6, VAR_4 );
    }
    else if ( VAR_4->stream_id >= 0xbd &&
              VAR_4->stream_id != 0xbe &&
              VAR_4->stream_id != 0xbf &&
              VAR_4->stream_id != 0xf0 &&
              VAR_4->stream_id != 0xf1 &&
              VAR_4->stream_id != 0xf2 &&
              VAR_4->stream_id != 0xf8 &&
              VAR_4->stream_id != 0xff )
    {
        return FUNC_6( VAR_1, &VAR_6, VAR_4 );
    }
    else
    {
        if ( FUNC_0(&VAR_5) < 2 )
        {
            return 0;
        }
        VAR_4->packet_len = FUNC_2(&VAR_5, 16);
        VAR_4->header_len = VAR_5.pos >> 3;
        return 1;
    }
}
