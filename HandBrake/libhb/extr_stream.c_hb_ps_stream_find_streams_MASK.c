
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* list; } ;
struct TYPE_18__ {TYPE_2__ pes; int ts_flags; int file_handle; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_19__ {int stream_id; int stream_id_ext; int bd_substream_id; scalar_t__ header_len; } ;
typedef TYPE_4__ hb_pes_info_t ;
struct TYPE_20__ {scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_5__ hb_buffer_t ;
typedef int bitbuf_t ;
struct TYPE_16__ {int codec_param; int codec; int codec_name; int stream_kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_5__**) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_3__*,scalar_t__,scalar_t__,TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,double) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (TYPE_3__*,int,int,int,int) ;

__attribute__((used)) static void FUNC_15(hb_stream_t *VAR_12)
{
    int VAR_13, VAR_14;
    hb_buffer_t *VAR_15 = FUNC_6(VAR_5);

    FUNC_4( VAR_12->file_handle, 0, VAR_8 );



    for ( VAR_13 = 0; VAR_13 < 2; VAR_13++ )
    {
        for ( VAR_14 = 0; VAR_14 < VAR_6; VAR_14 += VAR_15->size )
        {
            int VAR_16;
            int VAR_17;

            hb_pes_info_t VAR_18;
            VAR_15->size = 0;
            VAR_17 = FUNC_11( VAR_12, VAR_15 );
            if ( VAR_17 == 0 )
            {

                break;
            }
            if ( !FUNC_10( VAR_12, VAR_15->data, VAR_15->size, &VAR_18 ) )
            {
                FUNC_7( 2, "hb_ps_stream_find_streams: Error parsing PS packet");
                continue;
            }
            if ( VAR_18.stream_id == 0xba )
            {
                VAR_12->ts_flags |= VAR_9;
            }
            else if ( VAR_18.stream_id == 0xbc )
            {




                if ( FUNC_3( VAR_12, VAR_15->data, VAR_15->size ) )
                {
                    FUNC_9("Found program stream map");




                }
                else
                {
                    FUNC_8("Error parsing program stream map");
                }
            }
            else if ( ( VAR_18.stream_id & 0xe0 ) == 0xc0 )
            {

                VAR_16 = 0x04;
                FUNC_14( VAR_12, VAR_18.stream_id,
                                   VAR_18.stream_id_ext, VAR_16, -1 );
            }
            else if ( VAR_18.stream_id == 0xbd )
            {
                int VAR_19 = VAR_18.bd_substream_id;


                if ( VAR_19 >= 0x20 && VAR_19 <= 0x37 )
                {
                    int VAR_20 = FUNC_14( VAR_12, VAR_18.stream_id,
                                            VAR_18.bd_substream_id, 0, -1 );
                    VAR_12->pes.list[VAR_20].stream_kind = VAR_7;
                    VAR_12->pes.list[VAR_20].codec = VAR_11;
                    FUNC_13(VAR_12->pes.list[VAR_20].codec_name,
                            "DVD Subtitle", 80);
                    continue;
                }
                if ( VAR_19 >= 0x80 && VAR_19 <= 0x87 )
                {
                    VAR_16 = 0x81;
                }
                else if ( ( VAR_19 >= 0x88 && VAR_19 <= 0x8f ) ||
                          ( VAR_19 >= 0x98 && VAR_19 <= 0x9f ) )
                {


                    int VAR_21 = FUNC_14( VAR_12, VAR_18.stream_id,
                                            VAR_18.bd_substream_id, 0, VAR_10 );
                    VAR_12->pes.list[VAR_21].codec = VAR_3;
                    VAR_12->pes.list[VAR_21].codec_param = VAR_1;
                    continue;
                }
                else if ( VAR_19 >= 0xa0 && VAR_19 <= 0xaf )
                {
                    VAR_16 = 0x83;



                    FUNC_14( VAR_12, VAR_18.stream_id,
                                   VAR_18.bd_substream_id, VAR_16, VAR_0 );
                    continue;
                }
                else if ( VAR_19 >= 0xb0 && VAR_19 <= 0xbf )
                {

                    int VAR_22 = FUNC_14( VAR_12, VAR_18.stream_id,
                                            VAR_18.bd_substream_id, 0, VAR_0 );
                    VAR_12->pes.list[VAR_22].codec = VAR_4;
                    VAR_12->pes.list[VAR_22].codec_param = VAR_2;
                    continue;
                }
                else if ( VAR_19 >= 0xc0 && VAR_19 <= 0xcf )
                {


                    bitbuf_t VAR_23;
                    FUNC_1(&VAR_23, VAR_15->data + VAR_18.header_len,
                              VAR_15->size - VAR_18.header_len, 0);
                    int VAR_24 = FUNC_0(&VAR_23, 16);
                    if ( VAR_24 == 0x0b77 )
                    {
                        FUNC_2(&VAR_23, 24);
                        int VAR_25 = FUNC_0(&VAR_23, 5);
                        if ( VAR_25 <= 10 )
                        {

                            VAR_16 = 0x81;
                        }
                        else
                        {

                            VAR_16 = 0x87;
                        }
                    }
                    else
                    {

                        VAR_16 = 0x00;
                    }
                }
                else
                {

                    VAR_16 = 0x00;
                }
                FUNC_14( VAR_12, VAR_18.stream_id,
                                   VAR_18.bd_substream_id, VAR_16, -1 );
            }
            else if ( ( VAR_18.stream_id & 0xf0 ) == 0xe0 )
            {
                VAR_16 = 0x00;
                FUNC_14( VAR_12, VAR_18.stream_id,
                                   VAR_18.stream_id_ext, VAR_16, -1 );
            }
            else if ( VAR_18.stream_id == 0xfd )
            {
                if ( VAR_18.stream_id_ext == 0x55 ||
                     VAR_18.stream_id_ext == 0x56 )
                {

                    VAR_16 = 0xea;
                }
                else
                {

                    VAR_16 = 0x00;
                }
                FUNC_14( VAR_12, VAR_18.stream_id,
                                   VAR_18.stream_id_ext, VAR_16, -1 );
            }
        }
        FUNC_12( VAR_12, 0.2 );
    }
    FUNC_5( &VAR_15 );
}
