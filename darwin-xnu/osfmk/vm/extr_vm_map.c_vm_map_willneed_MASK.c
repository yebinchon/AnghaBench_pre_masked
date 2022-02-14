
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* vm_object_t ;
typedef scalar_t__ vm_object_size_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct vm_object_fault_info {int pmap_options; int user_tag; scalar_t__ hi_offset; scalar_t__ lo_offset; scalar_t__ cluster_size; int stealth; int behavior; int interruptible; } ;
typedef int memory_object_t ;
typedef int memory_object_fault_info_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_16__ {scalar_t__ vme_start; scalar_t__ vme_end; int protection; struct TYPE_16__* vme_next; int use_pmap; int is_sub_map; scalar_t__ iokit_acct; } ;
struct TYPE_15__ {scalar_t__ paging_offset; int pager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,TYPE_2__**) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,TYPE_2__**) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_14(
 vm_map_t VAR_9,
 vm_map_offset_t VAR_10,
 vm_map_offset_t VAR_11
)
{
 vm_map_entry_t VAR_12;
 vm_object_t VAR_13;
 memory_object_t VAR_14;
 struct vm_object_fault_info VAR_15 = {};
 kern_return_t VAR_16;
 vm_object_size_t VAR_17;
 vm_object_offset_t VAR_18;

 VAR_15.interruptible = VAR_4;
 VAR_15.behavior = VAR_6;
 VAR_15.stealth = VAR_5;






 FUNC_5(VAR_9);







 if (! FUNC_7(VAR_9, VAR_10, VAR_11, &VAR_12)) {
  FUNC_9(VAR_9);
  return VAR_0;
 }




 for (; VAR_12 != FUNC_8(VAR_9) && VAR_10 < VAR_11; ) {







  VAR_18 = (VAR_10 - VAR_12->vme_start) + FUNC_2(VAR_12);
  VAR_17 = FUNC_0(VAR_12->vme_end - VAR_10, VAR_11 - VAR_10);

  if ((vm_size_t) VAR_17 != VAR_17) {

   VAR_17 = (vm_size_t) (0 - VAR_2);
  }
  VAR_15.cluster_size = (vm_size_t) VAR_17;
  VAR_15.lo_offset = VAR_18;
  VAR_15.hi_offset = VAR_18 + VAR_17;
  VAR_15.user_tag = FUNC_1(VAR_12);
  VAR_15.pmap_options = 0;
  if (VAR_12->iokit_acct ||
      (!VAR_12->is_sub_map && !VAR_12->use_pmap)) {
   VAR_15.pmap_options |= VAR_3;
  }





  if ((VAR_12->protection & VAR_8) == 0) {
   VAR_12 = VAR_12->vme_next;
   VAR_10 = VAR_12->vme_start;
   continue;
  }






  if ((VAR_13 = FUNC_3(VAR_12)) == VAR_7) {
   VAR_12 = VAR_12->vme_next;
   VAR_10 = VAR_12->vme_start;
   continue;
  }





  FUNC_9(VAR_9);

  FUNC_11(VAR_13);
  VAR_14 = VAR_13->pager;
  FUNC_13(VAR_13);
  VAR_16 = FUNC_4(
   VAR_14,
   VAR_18 + VAR_13->paging_offset,
   0,
   VAR_8,
   (memory_object_fault_info_t)&VAR_15);

  FUNC_10(VAR_13);
  FUNC_12(VAR_13);
  FUNC_13(VAR_13);







  if (VAR_16 != VAR_1) {
   return VAR_1;
  }

  VAR_10 += VAR_17;
  if (VAR_10 >= VAR_11) {

   return VAR_1;
  }


  FUNC_5(VAR_9);
  if (! FUNC_6(VAR_9, VAR_10, &VAR_12)) {



   FUNC_9(VAR_9);
   return VAR_0;
  }
 }

 FUNC_9(VAR_9);
 return VAR_1;
}
