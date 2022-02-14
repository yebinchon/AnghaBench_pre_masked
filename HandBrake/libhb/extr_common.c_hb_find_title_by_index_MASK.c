
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int index; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_7__ {int list_title; } ;
typedef TYPE_2__ hb_title_set_t ;
typedef int hb_handle_t ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

hb_title_t * FUNC_3( hb_handle_t *VAR_0, int VAR_1 )
{
    hb_title_set_t *VAR_2 = FUNC_0( VAR_0 );
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2->list_title); VAR_3++)
    {
        hb_title_t *VAR_4 = FUNC_2(VAR_2->list_title, VAR_3);
        if (VAR_1 == VAR_4->index)
        {
            return VAR_4;
        }
    }
    return ((void*)0);
}
