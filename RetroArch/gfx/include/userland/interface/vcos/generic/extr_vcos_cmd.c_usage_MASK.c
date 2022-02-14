
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int descr; int * args; int * name; } ;
typedef TYPE_1__ VCOS_CMD_T ;
typedef int VCOS_CMD_PARAM_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( VCOS_CMD_PARAM_T *VAR_0, VCOS_CMD_T *VAR_1 )
{
    int VAR_2;
    int VAR_3 = 0;
    int VAR_4 = 0;
    VCOS_CMD_T *VAR_5;

    FUNC_1( VAR_0, "Usage: " );
    FUNC_0( VAR_0 );
    FUNC_1( VAR_0, "command [args ...]\n" );
    FUNC_1( VAR_0, "\n" );
    FUNC_1( VAR_0, "Where command is one of the following:\n" );

    for ( VAR_2 = 0; VAR_1[VAR_2].name != ((void*)0); VAR_2++ )
    {
        int VAR_6;
        int VAR_7;

        VAR_5 = &VAR_1[VAR_2];

        VAR_7 = FUNC_2( VAR_5->name );
        VAR_6 = FUNC_2( VAR_5->args );

        if ( VAR_7 > VAR_3 )
        {
            VAR_3 = VAR_7;
        }
        if ( VAR_6 > VAR_4 )
        {
            VAR_4 = VAR_6;
        }
    }

    for ( VAR_2 = 0; VAR_1[VAR_2].name != ((void*)0); VAR_2++ )
    {
        VAR_5 = &VAR_1[VAR_2];

        FUNC_1( VAR_0, "  %-*s %-*s - %s\n",
                    VAR_3, VAR_5->name,
                    VAR_4, VAR_5->args,
                    VAR_5->descr );
    }
}
