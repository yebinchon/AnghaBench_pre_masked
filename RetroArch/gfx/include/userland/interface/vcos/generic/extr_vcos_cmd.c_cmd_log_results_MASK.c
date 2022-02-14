
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* result_buf; char* result_ptr; } ;
typedef TYPE_1__ VCOS_CMD_PARAM_T ;
struct TYPE_5__ {int * log_category; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3( VCOS_CMD_PARAM_T *VAR_2 )
{
    char *VAR_3;
    char *VAR_4;

    VAR_3 = VAR_4 = VAR_2->result_buf;

    while ( *VAR_3 != '\0' )
    {
        while (( *VAR_4 != '\0' ) && ( *VAR_4 != '\n' ))
            VAR_4++;

        if ( *VAR_4 == '\n' )
        {
            *VAR_4++ = '\0';
        }

        if ( VAR_1.log_category != ((void*)0) )
        {
            if ( FUNC_0( VAR_1.log_category, VAR_0 ))
            {
                FUNC_1( VAR_1.log_category, VAR_0, "%s", VAR_3 );
            }
        }
        else
        {
            FUNC_2( "%s", VAR_3 );
        }

        VAR_3 = VAR_4;
    }



    VAR_2->result_ptr = VAR_2->result_buf;
    VAR_2->result_buf[0] = '\0';
}
