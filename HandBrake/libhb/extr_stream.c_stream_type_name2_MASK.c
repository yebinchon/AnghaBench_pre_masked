
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ reg_desc; } ;
typedef TYPE_1__ hb_stream_t ;
struct TYPE_9__ {int stream_type; scalar_t__* codec_name; int codec; int codec_param; } ;
typedef TYPE_2__ hb_pes_stream_t ;
struct TYPE_11__ {char const* name; } ;
struct TYPE_10__ {scalar_t__* name; } ;
typedef TYPE_3__ AVCodec ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_6__* VAR_1 ;
 int FUNC_2 (char*,scalar_t__*,int) ;

__attribute__((used)) static const char *FUNC_3(hb_stream_t *VAR_2, hb_pes_stream_t *VAR_3)
{
    static char VAR_4[80];

    if ( VAR_2->reg_desc == FUNC_0("HDMV") )
    {

        switch ( VAR_3->stream_type )
        {
            case 0x80:
                return "BD LPCM";

            case 0x83:
                return "TrueHD";

            case 0x84:
                return "E-AC3";

            case 0x85:
                return "DTS-HD HRA";

            case 0x86:
                return "DTS-HD MA";

            default:
                break;
        }
    }
    if ( VAR_1[VAR_3->stream_type].name )
    {
        return VAR_1[VAR_3->stream_type].name;
    }
    if ( VAR_3->codec_name[0] != 0 )
    {
        return VAR_3->codec_name;
    }
    if ( VAR_3->codec & VAR_0 )
    {
        AVCodec * VAR_5 = FUNC_1( VAR_3->codec_param );
        if ( VAR_5 && VAR_5->name && VAR_5->name[0] )
        {
            FUNC_2( VAR_4, VAR_5->name, 80 );
            return VAR_4;
        }
    }
    return "Unknown";
}
