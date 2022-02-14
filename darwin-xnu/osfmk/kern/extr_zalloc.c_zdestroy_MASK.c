
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* zone_t ;
struct TYPE_9__ {int all_free; int intermediate; int all_used; } ;
struct TYPE_10__ {int zone_valid; int doing_alloc_without_vm_priv; int doing_alloc_with_vm_priv; int async_pending; int waiting; int async_prio_refill; scalar_t__ count; scalar_t__ countfree; scalar_t__ cur_size; scalar_t__ page_count; scalar_t__ count_all_free_pages; unsigned int index; TYPE_1__ pages; int zone_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int VAR_3 ;

void
FUNC_12(zone_t VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_4 != ((void*)0));

 FUNC_5(VAR_4);
 FUNC_0(VAR_4->zone_valid);


 FUNC_0(VAR_4->doing_alloc_without_vm_priv == VAR_0);
 FUNC_0(VAR_4->doing_alloc_with_vm_priv == VAR_0);
 FUNC_0(VAR_4->async_pending == VAR_0);
 FUNC_0(VAR_4->waiting == VAR_0);
 FUNC_0(VAR_4->async_prio_refill == VAR_0);






 VAR_4->zone_valid = VAR_0;

 FUNC_10(VAR_4);
 FUNC_3(VAR_4);






 FUNC_5(VAR_4);



 FUNC_0(VAR_4->count == 0);
 FUNC_0(VAR_4->countfree == 0);
 FUNC_0(VAR_4->cur_size == 0);
 FUNC_0(VAR_4->page_count == 0);
 FUNC_0(VAR_4->count_all_free_pages == 0);


 FUNC_0(FUNC_7(&VAR_4->pages.all_used));
 FUNC_0(FUNC_7(&VAR_4->pages.intermediate));
 FUNC_0(FUNC_7(&VAR_4->pages.all_free));


 VAR_5 = VAR_4->index;

 FUNC_10(VAR_4);

 FUNC_8(&VAR_1);

 FUNC_0(!FUNC_2(VAR_3, VAR_5));

 FUNC_1(VAR_3, VAR_5);
 VAR_2--;
 FUNC_0(VAR_2 > 0);

 FUNC_9(&VAR_1);
}
