
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int file_handle; } ;
typedef TYPE_1__ hb_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( hb_stream_t *VAR_2 )
{

    uint32_t VAR_3 = -1;
    int VAR_4;

    FUNC_0( VAR_2->file_handle );
    while ( ( VAR_4 = FUNC_3( VAR_2->file_handle ) ) != VAR_0 )
    {
        VAR_3 = ( VAR_3 << 8 ) | VAR_4;
        if ( VAR_3 == 0x000001ba )

            break;
    }
    FUNC_2( VAR_2->file_handle );



    if ( VAR_4 != VAR_0 )
    {
        FUNC_1( VAR_2->file_handle, -4, VAR_1 );
    }
}
