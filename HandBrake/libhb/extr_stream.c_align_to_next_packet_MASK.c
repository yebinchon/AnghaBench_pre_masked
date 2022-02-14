
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int off_t ;
struct TYPE_3__ {int packetsize; int file_handle; int h; } ;
typedef TYPE_1__ hb_stream_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int const*,int,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static off_t FUNC_7(hb_stream_t *VAR_4)
{
    uint8_t VAR_5[VAR_1];
    off_t VAR_6 = 0;
    off_t VAR_7 = FUNC_3(VAR_4->file_handle);
    off_t VAR_8;

    if ( VAR_7 >= VAR_4->packetsize ) {
        VAR_7 -= VAR_4->packetsize;
        FUNC_2(VAR_4->file_handle, VAR_7, VAR_3);
    }
    VAR_8 = VAR_7;

    while (1)
    {
        if (FUNC_1(VAR_5, sizeof(VAR_5), 1, VAR_4->file_handle) == 1)
        {
            const uint8_t *VAR_9 = VAR_5;
            int VAR_10;

            for ( VAR_10 = sizeof(VAR_5) - 8 * VAR_4->packetsize; --VAR_10 >= 0; ++VAR_9 )
            {
                if ( FUNC_4( VAR_9, VAR_4->packetsize, 8 ) )
                {
                    break;
                }
            }
            if ( VAR_10 >= 0 )
            {
                VAR_6 = ( VAR_9 - VAR_5 ) - VAR_4->packetsize + 188;
                break;
            }
            FUNC_2(VAR_4->file_handle, -8 * VAR_4->packetsize, VAR_2);
            VAR_7 = FUNC_3(VAR_4->file_handle);
        }
        else
        {
            int VAR_11;
            if ((VAR_11 = FUNC_0(VAR_4->file_handle)) != 0)
            {
                FUNC_5("align_to_next_packet: error (%d)", VAR_11);
                FUNC_6(VAR_4->h, VAR_0);
            }
            return 0;
        }
    }
    FUNC_2(VAR_4->file_handle, VAR_7+VAR_6, VAR_3);
    return VAR_7 - VAR_8 + VAR_6;
}
