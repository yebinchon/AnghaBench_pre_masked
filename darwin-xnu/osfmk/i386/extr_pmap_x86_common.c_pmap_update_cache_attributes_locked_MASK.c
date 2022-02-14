
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* pv_rooted_entry_t ;
typedef TYPE_2__* pv_hashed_entry_t ;
typedef int pt_entry_t ;
typedef int ppnum_t ;
typedef scalar_t__ pmap_t ;
typedef int boolean_t ;
struct TYPE_6__ {int qlink; } ;
struct TYPE_5__ {scalar_t__ pmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__,int ,scalar_t__,int ) ;
 int * FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (int *) ;

void
FUNC_10(ppnum_t VAR_8, unsigned VAR_9) {
 pv_rooted_entry_t VAR_10, VAR_11;
 pv_hashed_entry_t VAR_12, VAR_13;
 vm_map_offset_t VAR_14;
 pmap_t VAR_15;
 pt_entry_t *VAR_16;
 boolean_t VAR_17;
 unsigned VAR_18;

 FUNC_3(FUNC_0(VAR_8));
 FUNC_3(((~VAR_5) & VAR_9) == 0);


 if (VAR_9 & VAR_3)
  VAR_18 = VAR_1;
 else
  VAR_18 = VAR_2;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10->pmap != VAR_6) {
  VAR_11 = VAR_10;
  VAR_12 = (pv_hashed_entry_t)VAR_11;

  do {
   VAR_15 = VAR_11->pmap;
   VAR_14 = FUNC_2(VAR_11);
   VAR_16 = FUNC_7(VAR_15, VAR_14);

   if (0 == VAR_16)
    FUNC_6("pmap_update_cache_attributes_locked: Missing PTE, pmap: %p, pn: 0x%x vaddr: 0x%llx kernel_pmap: %p", VAR_15, VAR_8, VAR_14, VAR_7);

   VAR_17 = FUNC_4(VAR_15);

   VAR_13 = (pv_hashed_entry_t)FUNC_9(&VAR_12->qlink);
   if (!VAR_17) {
    FUNC_8(VAR_16, VAR_5, VAR_9);
   } else {
    FUNC_8(VAR_16, VAR_0, VAR_18);
   }
   FUNC_1(VAR_15, VAR_14, VAR_14 + VAR_4);
   VAR_12 = VAR_13;
  } while ((VAR_11 = (pv_rooted_entry_t)VAR_13) != VAR_10);
 }
}
