
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
struct TYPE_8__ {TYPE_2__ pes; } ;
typedef TYPE_3__ hb_stream_t ;
typedef int bitbuf_t ;
struct TYPE_6__ {int stream_type; int codec_name; void* stream_kind; int lang_code; void* format_id; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_7(
    hb_stream_t *VAR_1,
    int VAR_2,
    bitbuf_t *VAR_3)
{
    int VAR_4;

    while( FUNC_0( VAR_3 ) > 2 )
    {
        uint8_t VAR_5 = FUNC_1(VAR_3, 8);
        uint8_t VAR_6 = FUNC_1(VAR_3, 8);
        switch ( VAR_5 )
        {
            case 5:
                VAR_1->pes.list[VAR_2].format_id = FUNC_1(VAR_3, 32);
                FUNC_2(VAR_3, 8 * (VAR_6 - 4));
                break;

            case 10:
            {
                char VAR_7[3];
                for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
                {
                    VAR_7[VAR_4] = FUNC_1(VAR_3, 8);
                }
                VAR_1->pes.list[VAR_2].lang_code =
                                    FUNC_4(FUNC_3(VAR_7));
                FUNC_2(VAR_3, 8 * (VAR_6 - 3));
            } break;

            case 0x56:
            {


                VAR_1->pes.list[VAR_2].stream_type = 0x00;
                VAR_1->pes.list[VAR_2].stream_kind = VAR_0;
                FUNC_5(VAR_1->pes.list[VAR_2].codec_name,
                        "DVB Teletext", 80);
                FUNC_2(VAR_3, 8 * VAR_6);
            } break;

            case 0x59:
            {


                VAR_1->pes.list[VAR_2].stream_type = 0x00;
                VAR_1->pes.list[VAR_2].stream_kind = VAR_0;
                FUNC_5(VAR_1->pes.list[VAR_2].codec_name,
                        "DVB Subtitling", 80);
                FUNC_2(VAR_3, 8 * VAR_6);
            } break;

            case 0x6a:
            {
                VAR_1->pes.list[VAR_2].stream_type = 0x81;
                FUNC_6( VAR_1, VAR_2 );
                FUNC_2(VAR_3, 8 * VAR_6);
            } break;

            case 0x7a:
            {
                VAR_1->pes.list[VAR_2].stream_type = 0x87;
                FUNC_6( VAR_1, VAR_2 );
                FUNC_2(VAR_3, 8 * VAR_6);
            } break;

            default:
                FUNC_2(VAR_3, 8 * VAR_6);
                break;
        }
    }
}
