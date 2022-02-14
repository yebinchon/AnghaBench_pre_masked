
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * list_chapter; } ;
typedef TYPE_1__ hb_chapter_queue_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 () ;

hb_chapter_queue_t * FUNC_3(void)
{
    hb_chapter_queue_t * VAR_0;

    VAR_0 = FUNC_0(1, sizeof(*VAR_0));
    if (VAR_0 != ((void*)0))
    {
        VAR_0->list_chapter = FUNC_2();
        if (VAR_0->list_chapter == ((void*)0))
        {
            FUNC_1(VAR_0);
            VAR_0 = ((void*)0);
        }
    }
    return VAR_0;
}
