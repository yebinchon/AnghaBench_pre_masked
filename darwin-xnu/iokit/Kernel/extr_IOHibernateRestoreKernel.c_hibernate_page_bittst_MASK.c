
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int hibernate_page_list_t ;
struct TYPE_3__ {int* bitmap; scalar_t__ first_page; } ;
typedef TYPE_1__ hibernate_bitmap_t ;
typedef int boolean_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

boolean_t
FUNC_1(hibernate_page_list_t * VAR_1, uint32_t VAR_2)
{
    boolean_t VAR_3 = VAR_0;
    hibernate_bitmap_t * VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if (VAR_4)
    {
 VAR_2 -= VAR_4->first_page;
 VAR_3 = (0 != (VAR_4->bitmap[VAR_2 >> 5] & (0x80000000 >> (VAR_2 & 31))));
    }
    return (VAR_3);
}
