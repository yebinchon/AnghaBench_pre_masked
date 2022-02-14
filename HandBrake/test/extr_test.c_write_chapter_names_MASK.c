
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_value_array_t ;
typedef int hb_dict_t ;
typedef int hb_csv_file_t ;
struct TYPE_4__ {int cell_col; int cell_row; int cell_text; } ;
typedef TYPE_1__ hb_csv_cell_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;

void FUNC_9(hb_dict_t *VAR_1, const char *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;

    hb_csv_file_t * VAR_3 = FUNC_5(VAR_2);
    hb_csv_cell_t * VAR_4;
    int VAR_5 = 0;

    if (VAR_3 == ((void*)0))
    {
        FUNC_0(VAR_0, "Cannot open chapter marker file, using defaults\n");
        return;
    }
    FUNC_0(VAR_0, "Reading chapter markers from file %s\n", VAR_2);

    hb_value_array_t *VAR_6;
    VAR_6 = FUNC_2(FUNC_2(VAR_1, "Destination"),
                                "ChapterList");

    if (VAR_6 == ((void*)0))
        return;


    while (((void*)0) != (VAR_4 = FUNC_6(VAR_3)))
    {

        if (VAR_4->cell_col == 0)
        {
            VAR_5 = VAR_4->cell_row;
        }


        if (VAR_4->cell_col == 1 && VAR_5 == VAR_4->cell_row)
        {

            hb_dict_t *VAR_7 = FUNC_7(VAR_6, VAR_5);
            if (VAR_7 != ((void*)0))
            {
                FUNC_3(VAR_7, "Name",
                            FUNC_8(VAR_4->cell_text));
            }
        }
        FUNC_4( VAR_4 );
    }
    FUNC_1( VAR_3 );
}
