
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_17__ {struct TYPE_17__* next; } ;
typedef TYPE_3__ tt_free_entry_t ;
typedef int tt_entry_t ;
struct TYPE_18__ {TYPE_2__* pt_cnt; TYPE_1__* pt_map; } ;
typedef TYPE_4__ pt_desc_t ;
typedef TYPE_5__* pmap_t ;
struct TYPE_19__ {int * tt_entry_free; } ;
struct TYPE_16__ {scalar_t__ refcnt; } ;
struct TYPE_15__ {scalar_t__ va; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_5__*) ;
 unsigned int VAR_3 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,TYPE_4__*,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (TYPE_5__*,scalar_t__) ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_4__* FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13(
 pmap_t VAR_10,
 tt_entry_t *VAR_11,
 unsigned int VAR_12)
{
 pt_desc_t *VAR_13;
 unsigned VAR_14;
 unsigned VAR_15, VAR_16 = VAR_1;
 vm_offset_t VAR_17=0;

 FUNC_2(VAR_10);

 VAR_13 = FUNC_12((vm_offset_t)VAR_11);

 VAR_13->pt_map[FUNC_0(VAR_11)].va = (vm_offset_t)-1;

 if ((VAR_12 < VAR_3) && (VAR_13->pt_cnt[FUNC_0(VAR_11)].refcnt == VAR_4))
  VAR_13->pt_cnt[FUNC_0(VAR_11)].refcnt = 0;

 if (VAR_13->pt_cnt[FUNC_0(VAR_11)].refcnt != 0)
  FUNC_8("pmap_tt_deallocate(): ptdp %p, count %d\n", VAR_13, VAR_13->pt_cnt[FUNC_0(VAR_11)].refcnt);

 VAR_13->pt_cnt[FUNC_0(VAR_11)].refcnt = 0;

 for (VAR_15 = 0, VAR_14 = 0 ; VAR_15 < VAR_16 ; VAR_15++)
  VAR_14 += VAR_13->pt_cnt[VAR_15].refcnt;

 if (VAR_14 == 0) {
  tt_free_entry_t *VAR_18 = (tt_free_entry_t *)&VAR_10->tt_entry_free;
  unsigned VAR_19 = 1;

  while (VAR_19 < VAR_16 && VAR_18) {
   tt_free_entry_t *VAR_20;

   VAR_20 = VAR_18->next;
   if ((((vm_offset_t)VAR_20) - ((vm_offset_t)VAR_11 & ~VAR_0)) < VAR_2) {
    VAR_19++;
   }
   VAR_18 = VAR_20;
  }
  if (VAR_19 == VAR_16) {
   tt_free_entry_t *VAR_21;

   VAR_17 = (vm_offset_t)VAR_11 & ~VAR_0;
   VAR_18 = (tt_free_entry_t *)&VAR_10->tt_entry_free;
   VAR_21 = (tt_free_entry_t *)&VAR_10->tt_entry_free;

   while (VAR_21) {
    tt_free_entry_t *VAR_22;

    VAR_22 = VAR_21->next;
    if ((((vm_offset_t)VAR_22) - VAR_17) < VAR_2) {
     VAR_18->next = VAR_22->next;
    } else {
     VAR_18 = VAR_22;
    }
    VAR_21 = VAR_22;
   }
  } else {
   ((tt_free_entry_t *)VAR_11)->next = (tt_free_entry_t *)VAR_10->tt_entry_free;
   VAR_10->tt_entry_free = VAR_11;
  }
 } else {
  ((tt_free_entry_t *)VAR_11)->next = (tt_free_entry_t *)VAR_10->tt_entry_free;
  VAR_10->tt_entry_free = VAR_11;
 }

 FUNC_3(VAR_10);

 if (VAR_17 != 0) {

  FUNC_11(FUNC_12((vm_offset_t)VAR_17));
  *(pt_desc_t **)FUNC_7(FUNC_6(FUNC_5(VAR_17))) = ((void*)0);
  FUNC_9(FUNC_5(VAR_17), VAR_2);
  if (VAR_12 < VAR_3)
   FUNC_1(-1, (VAR_10 == VAR_9 ? &VAR_6 : &VAR_8));
  else
   FUNC_1(-1, (VAR_10 == VAR_9 ? &VAR_5 : &VAR_7));
  FUNC_4(VAR_10, VAR_2);
  FUNC_10(VAR_10, VAR_2);
 }
}
