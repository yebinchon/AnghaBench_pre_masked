
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_8__ {int * prev; int * next; } ;
struct TYPE_11__ {TYPE_3__* pt_cnt; TYPE_2__* pt_map; int * pmap; TYPE_1__ pt_page; } ;
typedef TYPE_4__ pt_desc_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_10__ {scalar_t__ wiredcnt; scalar_t__ refcnt; } ;
struct TYPE_9__ {scalar_t__ va; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_8 ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static pt_desc_t
*FUNC_6(void)
{
 pt_desc_t *VAR_12;
 unsigned VAR_13;

 if (!VAR_11)
  FUNC_4(&VAR_10);

 if (VAR_8 == 0) {
  unsigned int VAR_14;
  pt_desc_t *VAR_15;

  if (VAR_11) {
   VAR_12 = (pt_desc_t *)VAR_7;
   VAR_7 += VAR_0;
   VAR_15 = VAR_12;
   VAR_14 = VAR_0/sizeof(pt_desc_t);
  } else {
   pmap_paddr_t VAR_16;
   kern_return_t VAR_17;

   FUNC_5(&VAR_10);

   if (FUNC_3(&VAR_16, VAR_2, VAR_3) != VAR_1) {
    VAR_17 = FUNC_3(&VAR_16, VAR_2, VAR_4);
      FUNC_0(VAR_17 == VAR_1);
   }
   VAR_12 = (pt_desc_t *)FUNC_2(VAR_16);

   FUNC_4(&VAR_10);
   VAR_15 = VAR_12;
   VAR_14 = VAR_2/sizeof(pt_desc_t);
  }

  while (VAR_14 != 0) {
   (*(void **)VAR_15) = (void *)VAR_9;
   VAR_9 = VAR_15;
   VAR_15++;
   VAR_14--;
   VAR_8++;
  }
 }

 if ((VAR_12 = VAR_9) != VAR_5) {
  VAR_9 = (pt_desc_t *)(*(void **)VAR_12);
  VAR_8--;
 } else {
  FUNC_1("out of ptd entry\n");
 }

 if (!VAR_11)
  FUNC_5(&VAR_10);

 VAR_12->pt_page.next = ((void*)0);
 VAR_12->pt_page.prev = ((void*)0);
 VAR_12->pmap = ((void*)0);

 for (VAR_13 = 0 ; VAR_13 < VAR_6 ; VAR_13++) {
  VAR_12->pt_map[VAR_13].va = (vm_offset_t)-1;
  VAR_12->pt_cnt[VAR_13].refcnt = 0;
  VAR_12->pt_cnt[VAR_13].wiredcnt = 0;
 }

 return(VAR_12);
}
