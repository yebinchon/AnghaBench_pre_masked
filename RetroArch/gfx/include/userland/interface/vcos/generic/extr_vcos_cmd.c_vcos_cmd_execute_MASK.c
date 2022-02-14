
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VCOS_STATUS_T ;
struct TYPE_6__ {int argc; char** argv; char** argv_orig; size_t result_size; char* result_ptr; char* result_buf; scalar_t__ use_log; } ;
typedef TYPE_1__ VCOS_CMD_PARAM_T ;
struct TYPE_7__ {int lock; int * log_category; int cmd_entry; int initialized; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,size_t,char*) ;

VCOS_STATUS_T FUNC_7( int VAR_3, char **VAR_4, size_t VAR_5, char *VAR_6 )
{
    VCOS_STATUS_T VAR_7 = VAR_0;
    VCOS_CMD_PARAM_T VAR_8;

    FUNC_5( &VAR_1.initialized, VAR_2 );

    VAR_8.argc = VAR_3;
    VAR_8.argv = VAR_8.argv_orig = VAR_4;

    VAR_8.use_log = 0;
    VAR_8.result_size = VAR_5;
    VAR_8.result_ptr = VAR_6;
    VAR_8.result_buf = VAR_6;

 VAR_6[0] = '\0';

    FUNC_3( &VAR_1.lock );

    VAR_7 = FUNC_1( &VAR_8, VAR_1.cmd_entry );

    if ( VAR_8.use_log )
    {
        FUNC_0( &VAR_8 );
        FUNC_6( VAR_6, VAR_5, "results logged" );
    }
    else
    if ( VAR_1.log_category != ((void*)0) )
    {
        if ( VAR_6[0] != '\0' )
        {


            FUNC_2( &VAR_8, "\n" );
        }
    }

    FUNC_4( &VAR_1.lock );

    return VAR_7;
}
