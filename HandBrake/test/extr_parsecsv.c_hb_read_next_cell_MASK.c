
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_7__ {int eof; scalar_t__ curr_col; int curr_row; } ;
typedef TYPE_1__ hb_csv_file_t ;
struct TYPE_8__ {char* cell_text; scalar_t__ cell_col; int cell_row; } ;
typedef TYPE_2__ hb_csv_cell_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;

hb_csv_cell_t *FUNC_3( hb_csv_file_t *VAR_3 )
{
    hb_csv_cell_t *VAR_4 = ((void*)0);
    uint16_t VAR_5;
    int VAR_6;

    if( VAR_3 == ((void*)0) )
    {
        return VAR_4;
    }

    if( VAR_3->eof )
    {
        return VAR_4;
    }

    VAR_4 = FUNC_2( sizeof( hb_csv_cell_t ) );
    if( VAR_4 == ((void*)0) )
    {
        return VAR_4;
    }

    VAR_4->cell_row = VAR_3->curr_row;
    VAR_4->cell_col = VAR_3->curr_col;
    VAR_6 = 0;
    while( VAR_1 != (VAR_5 = FUNC_0( VAR_3 ) ) )
    {
        if( VAR_5 == VAR_2 )
        {
            VAR_3->curr_row++;
            VAR_3->curr_col = 0;
            break;
        }
        else if( VAR_5 == VAR_0 )
        {
            VAR_3->curr_col++;
            break;
        }
        else
        {
            if( VAR_6 < 1023 )
            {
                VAR_4->cell_text[VAR_6] = (char)VAR_5;
                VAR_6++;
            }
        }
    }

    if( VAR_5 == VAR_1 )
    {
        VAR_3->eof = 1;
    }


    VAR_4->cell_text[VAR_6] = '\0';
    FUNC_1( VAR_4->cell_text );
    return VAR_4;
}
