
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_title_t ;
typedef int hb_stream_t ;
struct TYPE_3__ {int h; int list_file; } ;
typedef TYPE_1__ hb_batch_t ;


 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int ,char*,int *,int) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int **) ;
 int * FUNC_6 (char*,int) ;

hb_title_t * FUNC_7( hb_batch_t * VAR_0, int VAR_1 )
{

    hb_title_t * VAR_2;
    char * VAR_3;
    hb_stream_t * VAR_4;

    if ( VAR_1 < 0 )
        return ((void*)0);

    VAR_3 = FUNC_0( VAR_0->list_file, VAR_1 - 1 );
    if ( VAR_3 == ((void*)0) )
        return ((void*)0);

    FUNC_1( "batch: scanning %s", VAR_3 );
    VAR_2 = FUNC_6( VAR_3, VAR_1 );
    VAR_4 = FUNC_3(VAR_0->h, VAR_3, VAR_2, 1);
    if ( VAR_4 == ((void*)0) )
    {
        FUNC_5( &VAR_2 );
        return ((void*)0);
    }

    VAR_2 = FUNC_4( VAR_4, VAR_2 );
    FUNC_2( &VAR_4 );

    return VAR_2;
}
