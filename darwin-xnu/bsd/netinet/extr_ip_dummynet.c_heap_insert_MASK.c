
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dn_heap_entry {int dummy; } ;
struct dn_heap {int elements; int size; TYPE_1__* p; } ;
typedef void* dn_key ;
struct TYPE_3__ {void* key; void* object; } ;


 scalar_t__ FUNC_0 (void*,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,struct dn_heap_entry) ;
 int FUNC_3 (struct dn_heap*,int) ;
 scalar_t__ FUNC_4 (struct dn_heap*,int) ;

__attribute__((used)) static int
FUNC_5(struct dn_heap *VAR_0, dn_key VAR_1, void *VAR_2)
{
    int VAR_3 = VAR_0->elements ;

    if (VAR_2 == ((void*)0))
 VAR_3 = VAR_1 ;
    else {
 VAR_3 = VAR_0->elements ;
 if (VAR_3 == VAR_0->size)
     if (FUNC_4(VAR_0, VAR_0->elements+1) )
  return 1 ;
 VAR_0->p[VAR_3].object = VAR_2 ;
 VAR_0->p[VAR_3].key = VAR_1 ;
 VAR_0->elements++ ;
    }
    while (VAR_3 > 0) {
 int VAR_4 = FUNC_1(VAR_3) ;
 struct dn_heap_entry VAR_5 ;

 if (FUNC_0( VAR_0->p[VAR_4].key, VAR_0->p[VAR_3].key ) )
     break ;

 FUNC_2(VAR_0->p[VAR_3], VAR_0->p[VAR_4], VAR_5) ;
 FUNC_3(VAR_0, VAR_3);
 VAR_3 = VAR_4 ;
    }
    FUNC_3(VAR_0, VAR_3);
    return 0 ;
}
