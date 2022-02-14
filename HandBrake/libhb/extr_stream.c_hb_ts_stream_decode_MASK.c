
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int hb_stream_t ;
typedef int hb_buffer_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int const*,int ,int ) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_4( hb_stream_t *VAR_0 )
{
    hb_buffer_t * VAR_1;


    while ( 1 )
    {
        const uint8_t *VAR_2 = FUNC_3(VAR_0);
        if ( VAR_2 == ((void*)0) )
        {


            FUNC_1("hb_ts_stream_decode - eof");
            VAR_1 = FUNC_0(VAR_0);
            return VAR_1;
        }

        VAR_1 = FUNC_2( VAR_0, VAR_2, 0, 0 );
        if ( VAR_1 )
        {
            return VAR_1;
        }
    }
    return ((void*)0);
}
