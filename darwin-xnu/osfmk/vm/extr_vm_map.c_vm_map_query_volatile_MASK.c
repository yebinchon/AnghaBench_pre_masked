
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int mach_vm_size_t ;
typedef int kern_return_t ;
struct TYPE_15__ {int protection; int vme_end; int vme_start; scalar_t__ is_sub_map; struct TYPE_15__* vme_next; } ;
struct TYPE_14__ {int pmap; } ;
struct TYPE_13__ {scalar_t__ purgable; int resident_page_count; scalar_t__ pager; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int,int,int*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;

kern_return_t
FUNC_6(
 vm_map_t VAR_6,
 mach_vm_size_t *VAR_7,
 mach_vm_size_t *VAR_8,
 mach_vm_size_t *VAR_9,
 mach_vm_size_t *VAR_10,
 mach_vm_size_t *VAR_11)
{
 mach_vm_size_t VAR_12;
 mach_vm_size_t VAR_13;
 mach_vm_size_t VAR_14;
 mach_vm_size_t VAR_15;
 mach_vm_size_t VAR_16;
 mach_vm_size_t VAR_17;
 vm_map_entry_t VAR_18;
 vm_object_t VAR_19;



 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_16 = 0;

 for (VAR_18 = FUNC_4(VAR_6);
      VAR_18 != FUNC_5(VAR_6);
      VAR_18 = VAR_18->vme_next) {
  mach_vm_size_t VAR_20, VAR_21;

  if (VAR_18->is_sub_map) {
   continue;
  }
  if (! (VAR_18->protection & VAR_3)) {
   continue;
  }
  VAR_19 = FUNC_0(VAR_18);
  if (VAR_19 == VAR_2) {
   continue;
  }
  if (VAR_19->purgable != VAR_5 &&
      VAR_19->purgable != VAR_4) {
   continue;
  }
  if (FUNC_1(VAR_18)) {







   continue;
  }
  VAR_17 = VAR_19->resident_page_count;
  if ((FUNC_1(VAR_18) / VAR_1) >= VAR_17) {
   VAR_17 = 0;
  } else {
   VAR_17 -= (FUNC_1(VAR_18) / VAR_1);
  }

  VAR_12 += VAR_18->vme_end - VAR_18->vme_start;
  VAR_13 += VAR_17;
  if (VAR_19->pager) {
   VAR_14 +=
    FUNC_3(VAR_19->pager);
  }
  VAR_21 = 0;
  VAR_20 =
   FUNC_2(VAR_6->pmap,
         VAR_18->vme_start,
         VAR_18->vme_end,
         &VAR_21);
  VAR_15 += (VAR_20 / VAR_1);
  VAR_16 += (VAR_21
         / VAR_1);
 }



 *VAR_7 = VAR_12;
 *VAR_8 = VAR_13 * VAR_1;
 *VAR_9 = VAR_14 * VAR_1;
 *VAR_10 = VAR_15 * VAR_1;
 *VAR_11 = VAR_16 * VAR_1;

 return VAR_0;
}
