
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ curr_row; scalar_t__ curr_col; int parse_state; scalar_t__ eof; int * fileref; } ;
typedef TYPE_1__ hb_csv_file_t ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char*) ;
 TYPE_1__* FUNC_1 (int) ;

hb_csv_file_t *FUNC_2( const char *VAR_1 )
{
    hb_csv_file_t *VAR_2 = ((void*)0);
    FILE * VAR_3;

    if( VAR_1 == ((void*)0) )
    {
        return VAR_2;
    }

    VAR_3 = FUNC_0(VAR_1, "r");
    if( VAR_3 == ((void*)0) )
    {
        return VAR_2;
    }

    VAR_2 = FUNC_1( sizeof( hb_csv_file_t ) );
    if( VAR_2 == ((void*)0) )
    {
        return VAR_2;
    }

    VAR_2->fileref = VAR_3;
    VAR_2->eof = 0;
    VAR_2->parse_state = VAR_0;
    VAR_2->curr_col = 0;
    VAR_2->curr_row = 0;
    return VAR_2;
}
