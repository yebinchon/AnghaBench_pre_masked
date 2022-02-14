
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int list_chapter; } ;
typedef TYPE_1__ hb_chapter_queue_t ;
typedef TYPE_1__ hb_chapter_queue_item_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(hb_chapter_queue_t **VAR_0)
{
    hb_chapter_queue_t * VAR_1 = *VAR_0;
    hb_chapter_queue_item_t * VAR_2;

    if (VAR_1 == ((void*)0))
    {
        return;
    }
    while ((VAR_2 = FUNC_2(VAR_1->list_chapter, 0)) != ((void*)0))
    {
        FUNC_3(VAR_1->list_chapter, VAR_2);
        FUNC_0(VAR_2);
    }
    FUNC_1(&VAR_1->list_chapter);
    FUNC_0(VAR_1);
    *VAR_0 = ((void*)0);
}
