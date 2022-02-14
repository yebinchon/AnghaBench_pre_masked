
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_title_t ;
struct TYPE_4__ {int feature; int list_title; } ;
typedef TYPE_1__ hb_title_set_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int **) ;
 char* FUNC_7 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8( hb_title_set_t * VAR_2 )
{
    if (VAR_0)
    {
        hb_dict_t * VAR_3;
        char * VAR_4;

        VAR_3 = FUNC_5(VAR_2);
        VAR_4 = FUNC_7(VAR_3);
        FUNC_6(&VAR_3);
        FUNC_1(VAR_1, "JSON Title Set: %s\n", VAR_4);
        FUNC_2(VAR_4);
    }
    else
    {
        int VAR_5;
        hb_title_t * VAR_6;

        for( VAR_5 = 0; VAR_5 < FUNC_3( VAR_2->list_title ); VAR_5++ )
        {
            VAR_6 = FUNC_4( VAR_2->list_title, VAR_5 );
            FUNC_0( VAR_6, VAR_2->feature );
        }
    }
}
