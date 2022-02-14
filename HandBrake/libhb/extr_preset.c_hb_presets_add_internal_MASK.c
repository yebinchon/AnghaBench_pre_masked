
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_4__ {scalar_t__ depth; } ;
typedef TYPE_1__ hb_preset_index_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(hb_value_t *VAR_3)
{
    hb_preset_index_t *VAR_4;
    int VAR_5 = 0;

    if (VAR_3 == ((void*)0))
        return -1;

    VAR_4 = FUNC_8(VAR_3);
    if (VAR_4 != ((void*)0) && VAR_4->depth != 0)
    {


        FUNC_1();
    }
    FUNC_0(VAR_4);

    int VAR_6 = FUNC_4(VAR_2);
    if (FUNC_7(VAR_3) == VAR_1)
    {

        FUNC_2(VAR_2, FUNC_5(VAR_3));
        VAR_5++;
    }
    else if (FUNC_7(VAR_3) == VAR_0)
    {

        int VAR_7 = FUNC_4(VAR_3);
        int VAR_8;
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            hb_value_t *VAR_9 = FUNC_3(VAR_3, VAR_8);
            FUNC_2(VAR_2, FUNC_5(VAR_9));
            VAR_5++;
        }
    }

    FUNC_6(&VAR_3);
    if (VAR_5 == 0)
    {
        return -1;
    }

    return VAR_6;
}
