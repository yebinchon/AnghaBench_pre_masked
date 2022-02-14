
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_list_t ;
typedef int hb_buffer_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4( hb_list_t ** VAR_0 )
{
    hb_list_t * VAR_1 = *VAR_0;
    hb_buffer_t * VAR_2;

    while( ( VAR_2 = FUNC_2( VAR_1, 0 ) ) )
    {
        FUNC_3( VAR_1, VAR_2 );
        FUNC_0( &VAR_2 );
    }

    FUNC_1( VAR_0 );
}
