
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int list_chapter; } ;
typedef TYPE_2__ hb_chapter_queue_t ;
struct TYPE_11__ {scalar_t__ new_chap; int start; } ;
typedef TYPE_3__ hb_chapter_queue_item_t ;
struct TYPE_9__ {scalar_t__ new_chap; int start; } ;
struct TYPE_12__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int) ;

void FUNC_2(hb_chapter_queue_t *VAR_0, hb_buffer_t *VAR_1)
{
    hb_chapter_queue_item_t *VAR_2 = FUNC_1(sizeof(hb_chapter_queue_item_t));
    if (VAR_2 != ((void*)0))
    {
        VAR_2->start = VAR_1->s.start;
        VAR_2->new_chap = VAR_1->s.new_chap;

        VAR_1->s.new_chap = 0;
        FUNC_0(VAR_0->list_chapter, VAR_2);
    }
}
