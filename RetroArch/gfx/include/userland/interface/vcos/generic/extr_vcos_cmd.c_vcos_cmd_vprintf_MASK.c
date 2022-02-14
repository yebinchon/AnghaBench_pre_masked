
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {char* result_size; char* result_ptr; int result_buf; int use_log; } ;
typedef TYPE_1__ VCOS_CMD_PARAM_T ;
struct TYPE_6__ {int * log_category; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,char const*,int ) ;

void FUNC_2( VCOS_CMD_PARAM_T *VAR_1, const char *VAR_2, va_list VAR_3 )
{
    int VAR_4;
    int VAR_5;

    VAR_5 = (int)(VAR_1->result_size - ( VAR_1->result_ptr - VAR_1->result_buf ));

    VAR_4 = FUNC_1( VAR_1->result_ptr, VAR_5, VAR_2, VAR_3 );

    if ( VAR_0.log_category != ((void*)0) )
    {




        if ( (( VAR_4 + 1 ) >= VAR_5 )
        || ( VAR_1->result_ptr[ VAR_4 - 1 ] == '\n' ))
        {
            FUNC_0( VAR_1 );
        }
        else
        {
            VAR_1->result_ptr += VAR_4;
        }
    }
    else
    {
        if (( VAR_4 + 1 ) >= VAR_5 )
        {


            VAR_1->use_log = 1;

            *VAR_1->result_ptr = '\0';

            FUNC_0( VAR_1 );

            VAR_4 = FUNC_1( VAR_1->result_ptr, VAR_5, VAR_2, VAR_3 );
        }
        VAR_1->result_ptr += VAR_4;
    }
}
