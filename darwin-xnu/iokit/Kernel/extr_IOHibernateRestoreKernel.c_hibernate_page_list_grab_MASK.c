
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ ppnum_t ;
typedef int hibernate_page_list_t ;
struct TYPE_4__ {scalar_t__ last_page; } ;
typedef TYPE_1__ hibernate_bitmap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static ppnum_t
FUNC_4(hibernate_page_list_t * VAR_2, uint32_t * VAR_3)
{
    uint32_t VAR_4 = *VAR_3;
    uint32_t VAR_5;
    hibernate_bitmap_t * VAR_6;

    VAR_5 = VAR_4 + 1;
    while ((VAR_6 = FUNC_3(VAR_2, &VAR_5)))
    {
 VAR_5 += FUNC_2(VAR_6, VAR_0, VAR_5);
 if (VAR_5 <= VAR_6->last_page)
 {
     *VAR_3 = VAR_5;
     break;
 }
    }

    if (!VAR_6)
    {
 FUNC_0(VAR_1, VAR_4);
 FUNC_1();
 VAR_4 = 0;
    }

    return (VAR_4);
}
