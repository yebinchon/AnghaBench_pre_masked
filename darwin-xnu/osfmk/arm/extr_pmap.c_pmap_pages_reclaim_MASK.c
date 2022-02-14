
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int vm_map_address_t ;
typedef int uint32_t ;
typedef int tt_entry_t ;
typedef int queue_t ;
typedef int queue_entry_t ;
typedef int pt_entry_t ;
struct TYPE_17__ {TYPE_2__* pt_cnt; TYPE_1__* pt_map; TYPE_4__* pmap; } ;
typedef TYPE_3__ pt_desc_t ;
typedef TYPE_4__* pmap_t ;
typedef int pmap_paddr_t ;
struct TYPE_19__ {struct TYPE_19__* next; } ;
typedef TYPE_5__ page_free_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_18__ {scalar_t__ nested; int asid; int lock; } ;
struct TYPE_16__ {scalar_t__ refcnt; scalar_t__ wiredcnt; } ;
struct TYPE_15__ {int va; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,TYPE_4__*) ;
 TYPE_4__* VAR_14 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int VAR_15 ;
 TYPE_5__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_8 (TYPE_4__*,int,int *,int *,int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int* FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*,int*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 size_t FUNC_14 (int) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 size_t FUNC_21 (TYPE_4__*,int) ;
 scalar_t__ FUNC_22 (int) ;

pmap_paddr_t
FUNC_23(
 void)
{
 boolean_t VAR_21;
 unsigned VAR_22;
 pt_desc_t *VAR_23;
 FUNC_9(&VAR_15);
 VAR_18++;
 VAR_17++;

 while (1) {

  if (VAR_16 != (page_free_entry_t *)((void*)0)) {
   page_free_entry_t *VAR_24;

   VAR_24 = VAR_16;
   VAR_16 = VAR_16->next;
   FUNC_11(&VAR_15);

   return((pmap_paddr_t)FUNC_6((vm_offset_t)VAR_24));
  }

  FUNC_11(&VAR_15);

  FUNC_9(&VAR_20);
  VAR_23 = (pt_desc_t *)FUNC_16(&VAR_19);
  VAR_21 = VAR_6;

  while (!FUNC_15(&VAR_19, (queue_entry_t)VAR_23)) {
   if ((VAR_23->pmap->nested == VAR_6)
       && (FUNC_10(&VAR_23->pmap->lock))) {

    FUNC_3(VAR_23->pmap != VAR_14);
    unsigned VAR_25 = 0;
    unsigned VAR_26 = 0;

    for (VAR_22 = 0 ; VAR_22 < VAR_12 ; VAR_22++) {
     if (VAR_23->pt_cnt[VAR_22].refcnt == VAR_11) {

      VAR_25 = 0;
      break;
     }
     VAR_25 += VAR_23->pt_cnt[VAR_22].refcnt;
     VAR_26 += VAR_23->pt_cnt[VAR_22].wiredcnt;
    }
    if ((VAR_26 == 0) && (VAR_25 != 0)) {
     VAR_21 = VAR_13;



     break;
    }
    FUNC_11(&VAR_23->pmap->lock);
   }
   VAR_23 = (pt_desc_t *)FUNC_17((queue_t)VAR_23);
  }
  if (!VAR_21) {
   FUNC_7("pmap_pages_reclaim(): No eligible page in pt_page_list\n");
  } else {
   int VAR_27 = 0;
   vm_map_address_t VAR_28;
   pmap_t VAR_29;
   pt_entry_t *VAR_30, *VAR_31;
   pt_entry_t *VAR_32;
   tt_entry_t *VAR_33;
   uint32_t VAR_34=0;

   FUNC_11(&VAR_20);
   VAR_29 = VAR_23->pmap;
   FUNC_1(VAR_29);
   for (VAR_22 = 0 ; VAR_22 < VAR_12 ; VAR_22++) {
    VAR_28 = VAR_23->pt_map[VAR_22].va;




    if (VAR_28 == (vm_offset_t)-1)
     continue;

    VAR_33 = FUNC_12(VAR_29, VAR_28);
    if ((VAR_33 != (tt_entry_t *) ((void*)0))
        && ((*VAR_33 & VAR_0) == VAR_1)) {






     VAR_32 = (pt_entry_t *) FUNC_22(*VAR_33);
     VAR_30 = &VAR_32[FUNC_21(VAR_29, VAR_28)];
     VAR_31 = VAR_30 + VAR_7/sizeof(pt_entry_t);
     VAR_27 += FUNC_8(
      VAR_29, VAR_28, VAR_30, VAR_31,
      &VAR_34, VAR_8);
     if (VAR_23->pt_cnt[FUNC_0(VAR_32)].refcnt != 0)
      FUNC_7("pmap_pages_reclaim(): ptdp %p, count %d\n", VAR_23, VAR_23->pt_cnt[FUNC_0(VAR_32)].refcnt);







     FUNC_13(VAR_29, VAR_33, VAR_10);
     FUNC_4(FUNC_19(VAR_28 & ~VAR_4) | FUNC_20(VAR_29->asid));


     if (VAR_27 > 0) {



      FUNC_5(VAR_28, VAR_5, VAR_29);

     }
    }
   }
   FUNC_18();

   FUNC_2(VAR_29);
  }
  FUNC_9(&VAR_15);
 }
}
