
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int ppnum_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ sfs_time_spent_faulting; scalar_t__ sfs_system_max_fault_time; int sfs_pages_faulted_in; scalar_t__ sfs_stopped_faulting; } ;
struct TYPE_6__ {int pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_4__ VAR_8 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_9 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

vm_offset_t
FUNC_6(vm_map_t VAR_10, vm_offset_t VAR_11, boolean_t VAR_12, uint32_t *VAR_13)
{
 vm_offset_t VAR_14;
 unsigned VAR_15;
 uint64_t VAR_16 = 0;

 if (VAR_10 == VAR_5) {
  return 0;
 }

 VAR_14 = FUNC_2(VAR_10->pmap, VAR_11);
 if (!FUNC_5((ppnum_t) FUNC_0(VAR_14))) {
  if (!VAR_12 || VAR_8.sfs_stopped_faulting) {
   if (VAR_13)
    *VAR_13 |= VAR_1;

   return 0;
  }





  VAR_16 = FUNC_3();
  VAR_14 = FUNC_1(VAR_10, (VAR_11 & ~VAR_3));
  VAR_8.sfs_time_spent_faulting += (FUNC_3() - VAR_16);

  if ((VAR_8.sfs_time_spent_faulting >= VAR_8.sfs_system_max_fault_time) && !VAR_9) {
   VAR_8.sfs_stopped_faulting = (uint8_t) VAR_4;
  }

  VAR_14 += (VAR_11 & VAR_3);

  if (!FUNC_5((ppnum_t) FUNC_0(VAR_14))) {
   if (VAR_13)
    *VAR_13 |= (VAR_2 | VAR_1);

   return 0;
  }

  if (VAR_13)
   *VAR_13 |= VAR_0;

  VAR_8.sfs_pages_faulted_in++;
 } else {



  VAR_15 = FUNC_4((ppnum_t) FUNC_0(VAR_14));

  if ((VAR_15 & VAR_7) != VAR_6) {
   return 0;
  }
 }

 return VAR_14;
}
