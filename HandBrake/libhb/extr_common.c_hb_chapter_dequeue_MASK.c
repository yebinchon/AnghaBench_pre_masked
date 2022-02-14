
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int list_chapter; } ;
typedef TYPE_2__ hb_chapter_queue_t ;
struct TYPE_12__ {scalar_t__ start; int new_chap; } ;
typedef TYPE_3__ hb_chapter_queue_item_t ;
struct TYPE_10__ {scalar_t__ start; int new_chap; } ;
struct TYPE_13__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void FUNC_3(hb_chapter_queue_t *VAR_0, hb_buffer_t *VAR_1)
{
    hb_chapter_queue_item_t *VAR_2 = FUNC_1(VAR_0->list_chapter, 0);
    if (VAR_2 != ((void*)0))
    {
        if (VAR_1->s.start < VAR_2->start)
        {

            return;
        }


        FUNC_2(VAR_0->list_chapter, VAR_2);
        VAR_1->s.new_chap = VAR_2->new_chap;
        FUNC_0(VAR_2);
    }
}
