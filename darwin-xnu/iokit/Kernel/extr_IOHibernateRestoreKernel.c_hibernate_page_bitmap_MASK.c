
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



__attribute__((used)) static hibernate_bitmap_t *
FUNC_0(hibernate_page_list_t * VAR_0, uint32_t VAR_1)
{
    uint32_t VAR_2;
    hibernate_bitmap_t * VAR_3 = &VAR_0->bank_bitmap[0];

    for (VAR_2 = 0; VAR_2 < VAR_0->bank_count; VAR_2++)
    {
 if ((VAR_1 >= VAR_3->first_page) && (VAR_1 <= VAR_3->last_page))
     break;
 VAR_3 = (hibernate_bitmap_t *) &VAR_3->bitmap[VAR_3->bitmapwords];
    }
    if (VAR_2 == VAR_0->bank_count)
 VAR_3 = ((void*)0);

    return (VAR_3);
}
