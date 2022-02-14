
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_list_t ;
typedef int hb_handle_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(hb_handle_t *VAR_0, int VAR_1)
{
    if (VAR_0 == ((void*)0))
        return -1;

    hb_list_t *VAR_2;
    const hb_title_t *VAR_3;
    int VAR_4, VAR_5;

    VAR_2 = FUNC_0(VAR_0);
    VAR_4 = FUNC_1(VAR_2);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        VAR_3 = FUNC_2(VAR_2, VAR_5);
        if (VAR_1 == VAR_3->index)
        {
            return VAR_5;
        }
    }
    return -1;
}
