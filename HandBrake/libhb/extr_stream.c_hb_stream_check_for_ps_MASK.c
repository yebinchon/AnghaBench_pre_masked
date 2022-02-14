
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int file_handle; } ;
typedef TYPE_1__ hb_stream_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int*,int,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(hb_stream_t *VAR_2)
{
    uint8_t VAR_3[2048*4];
    uint8_t VAR_4[4];
    int VAR_5 = 0;

    FUNC_3(VAR_2->file_handle, 0, VAR_1);



    while (VAR_5 < 512 * 1024)
    {
        int VAR_6;

        if ( FUNC_2(VAR_3, 1, sizeof(VAR_3), VAR_2->file_handle) != sizeof(VAR_3) )
            return 0;

        for ( VAR_6 = 0; VAR_6 < 8*1024-27; ++VAR_6 )
        {
            if ( FUNC_1( &VAR_3[VAR_6] ) && FUNC_0( &VAR_3[VAR_6] ) )
            {
                int VAR_7, VAR_8, VAR_9;
                uint8_t VAR_10;
                uint8_t *VAR_11 = VAR_3+VAR_6;


                int VAR_12 = VAR_3[4] >> 4;
                if ( VAR_12 == 0x02 )
                {

                    VAR_7 = 12;
                }
                else
                {

                    VAR_7 = 14 + ( VAR_3[13] & 0x7 );
                }

                VAR_11 += VAR_7;

                VAR_10 = VAR_11[3];
                VAR_9 = (VAR_11[4] << 8) + VAR_11[5];
                if ( VAR_9 && VAR_10 > 0xba && VAR_10 < 0xf9 )
                {
                    VAR_8 = FUNC_4( VAR_2->file_handle );
                    VAR_5 = VAR_8 - ( sizeof(VAR_3) - VAR_6 );
                    VAR_5 += VAR_7 + 6 + VAR_9;
                    FUNC_3( VAR_2->file_handle, VAR_5, VAR_1 );
                    if ( FUNC_2(VAR_4, 1, 4, VAR_2->file_handle) != 4 )
                        return 0;
                    if (VAR_4[0] == 0x00 && VAR_4[1] == 0x00 &&
                        VAR_4[2] == 0x01)
                    {
                        return 1;
                    }
                    FUNC_3( VAR_2->file_handle, VAR_8, VAR_1 );
                }
            }
        }
        FUNC_3( VAR_2->file_handle, -27, VAR_0 );
        VAR_5 = FUNC_4( VAR_2->file_handle );
    }
    return 0;
}
