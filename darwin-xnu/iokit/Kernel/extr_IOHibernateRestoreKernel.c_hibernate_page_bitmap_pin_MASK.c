
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ bank_count; TYPE_2__* bank_bitmap; } ;
typedef TYPE_1__ hibernate_page_list_t ;
struct TYPE_6__ {scalar_t__ first_page; scalar_t__ last_page; size_t bitmapwords; int * bitmap; } ;
typedef TYPE_2__ hibernate_bitmap_t ;



hibernate_bitmap_t *
FUNC_0(hibernate_page_list_t * VAR_0, uint32_t * VAR_1)
{
    uint32_t VAR_2, VAR_3 = *VAR_1;
    hibernate_bitmap_t * VAR_4 = &VAR_0->bank_bitmap[0];

    for (VAR_2 = 0; VAR_2 < VAR_0->bank_count; VAR_2++)
    {
 if (VAR_3 <= VAR_4->first_page)
 {
     *VAR_1 = VAR_4->first_page;
     break;
 }
 if (VAR_3 <= VAR_4->last_page)
     break;
 VAR_4 = (hibernate_bitmap_t *) &VAR_4->bitmap[VAR_4->bitmapwords];
    }
    if (VAR_2 == VAR_0->bank_count)
 VAR_4 = ((void*)0);

    return (VAR_4);
}
