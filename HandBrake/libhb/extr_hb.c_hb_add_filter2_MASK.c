
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_t ;
typedef int hb_value_array_t ;
struct TYPE_3__ {scalar_t__ enforce_order; } ;
typedef TYPE_1__ hb_filter_object_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;

void FUNC_8( hb_value_array_t * VAR_0, hb_dict_t * VAR_1 )
{
    int VAR_2 = FUNC_0(VAR_1, "ID");

    hb_filter_object_t * VAR_3 = FUNC_2(VAR_2);
    if (VAR_3 == ((void*)0))
    {
        FUNC_1("hb_add_filter2: Invalid filter ID %d", VAR_2);
        FUNC_7(&VAR_1);
        return;
    }
    if (VAR_3->enforce_order)
    {

        int VAR_4, VAR_5;

        VAR_5 = FUNC_6(VAR_0);
        for( VAR_4 = 0; VAR_4 < VAR_5; VAR_4++ )
        {
            hb_value_t * VAR_6 = FUNC_4(VAR_0, VAR_4);
            int VAR_7 = FUNC_0(VAR_6, "ID");
            if (VAR_7 > VAR_2)
            {
                FUNC_5(VAR_0, VAR_4, VAR_1);
                return;
            }
            else if ( VAR_7 == VAR_2 )
            {

                FUNC_7(&VAR_1);
                return;
            }
        }
    }

    FUNC_3(VAR_0, VAR_1);
}
