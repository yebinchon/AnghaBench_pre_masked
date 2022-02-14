
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_3__* list; } ;
struct TYPE_7__ {TYPE_1__ pes; } ;
typedef TYPE_2__ hb_stream_t ;
struct TYPE_8__ {int stream_type; scalar_t__ codec_param; } ;
typedef TYPE_3__ hb_pes_stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2( hb_stream_t *VAR_5, const uint8_t *VAR_6, int VAR_7 )
{



    int VAR_8;
    uint32_t VAR_9 = 0;


    int VAR_10 = FUNC_1( VAR_5 );
    hb_pes_stream_t *VAR_11 = &VAR_5->pes.list[VAR_10];
    if ( VAR_11->stream_type <= 2 ||
         VAR_11->codec_param == VAR_1 ||
         VAR_11->codec_param == VAR_2 )
    {

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            VAR_9 = (VAR_9 << 8) | VAR_6[VAR_8];
            if ( ( VAR_9 >> 8 ) == 1 )
            {

                uint8_t VAR_12 = VAR_9;
                switch ( VAR_12 )
                {
                    case 0xB8:
                    case 0xB3:
                        return 1;

                    case 0x00:

                        if (VAR_8 < VAR_7 - 3)
                        {

                            if ((VAR_6[VAR_8+2] & (0x7 << 3)) == (1 << 3))
                            {

                                return 1;
                            }
                        }
                        break;
                }
            }
        }

        return 0;
    }
    if ( VAR_11->stream_type == 0x1b || VAR_11->codec_param == VAR_0 )
    {

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            VAR_9 = (VAR_9 << 8) | VAR_6[VAR_8];
            if ( ( VAR_9 >> 8 ) == 1 )
            {

                uint8_t VAR_13 = VAR_9 & 0x1f;
                if ( VAR_13 == 0x01 )
                {

                    return 0;
                }
                if ( VAR_13 == 0x05 )
                {

                    return 1;
                }
                else if ( VAR_13 == 0x06 )
                {
                    int VAR_14 = VAR_8 + 1;
                    int VAR_15 = FUNC_0( VAR_6+VAR_14, VAR_7-VAR_14 );
                    if ( VAR_15 )
                    {
                        return VAR_15;
                    }
                }
            }
        }

        return 0;
    }
    if ( VAR_11->stream_type == 0xea || VAR_11->codec_param == VAR_4 )
    {

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            VAR_9 = (VAR_9 << 8) | VAR_6[VAR_8];
            if ( VAR_9 == 0x10f )
            {


                return 1;
            }
        }

        return 0;
    }
    if ( VAR_11->stream_type == 0x10 || VAR_11->codec_param == VAR_3 )
    {

        for (VAR_8 = 0; VAR_8 < VAR_7-1; VAR_8++)
        {
            VAR_9 = (VAR_9 << 8) | VAR_6[VAR_8];
            if ( VAR_9 == 0x1b6 )
            {
                if ((VAR_6[VAR_8+1] & 0xC0) == 0)
                    return 1;
            }
        }

        return 0;
    }



    return 1;
}
