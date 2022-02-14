
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void* prev; void* next; } ;
struct TYPE_4__ {TYPE_1__ link; } ;
typedef int KHRN_POINTER_MAP_T ;
typedef void CACHE_LINK_T ;
typedef TYPE_2__ CACHE_ENTRY_T ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(KHRN_POINTER_MAP_T *VAR_0, uint32_t VAR_1, void *VAR_2, void *VAR_3)
{
   CACHE_ENTRY_T *VAR_4 = (CACHE_ENTRY_T *)VAR_2;

   VAR_4->link.prev = (CACHE_LINK_T *)FUNC_1(VAR_4->link.prev, VAR_3);
   VAR_4->link.next = (CACHE_LINK_T *)FUNC_1(VAR_4->link.next, VAR_3);



   FUNC_2(FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_2, VAR_3)));
}
