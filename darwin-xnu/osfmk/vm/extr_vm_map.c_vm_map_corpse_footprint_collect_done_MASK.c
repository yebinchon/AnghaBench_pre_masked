
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_address_t ;
typedef int uint64_t ;
struct vm_map_corpse_footprint_region {scalar_t__ cfr_num_pages; } ;
struct vm_map_corpse_footprint_header {int cf_size; int cf_last_region; scalar_t__ cf_last_zeroes; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {int has_corpse_footprint; int * vmmap_corpse_footprint; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,struct vm_map_corpse_footprint_header*,int ,int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,int ,int ) ;

void
FUNC_5(
 vm_map_t VAR_8)
{
 struct vm_map_corpse_footprint_header *VAR_9;
 struct vm_map_corpse_footprint_region *VAR_10;
 vm_size_t VAR_11, VAR_12;
 kern_return_t VAR_13;

 FUNC_0(VAR_8->has_corpse_footprint);
 if (!VAR_8->has_corpse_footprint ||
     VAR_8->vmmap_corpse_footprint == ((void*)0)) {
  return;
 }

 VAR_9 = (struct vm_map_corpse_footprint_header *)
  VAR_8->vmmap_corpse_footprint;
 VAR_11 = VAR_9->cf_size;

 VAR_10 = (struct vm_map_corpse_footprint_region *)
  ((char *)VAR_9 +
   VAR_9->cf_last_region);


 FUNC_0(VAR_10->cfr_num_pages >= VAR_9->cf_last_zeroes);
 VAR_10->cfr_num_pages -= VAR_9->cf_last_zeroes;
 VAR_9->cf_last_zeroes = 0;

 VAR_12 = (vm_size_t)(VAR_9->cf_last_region +
      sizeof (*VAR_10) +
      VAR_10->cfr_num_pages);


 VAR_6 =
  (((VAR_6 *
     VAR_5) +
    VAR_12) /
   (VAR_5 + 1));
 VAR_5++;
 if (VAR_12 > VAR_7) {
  VAR_7 = VAR_12;
 }

 VAR_12 = FUNC_2(VAR_12);
 if (VAR_11 > VAR_12) {
  VAR_13 = FUNC_3(VAR_4,
       ((vm_address_t)VAR_9 +
        VAR_12 +
        VAR_2),
       (VAR_11 - VAR_12));
  FUNC_1(VAR_13 == VAR_1,
   "trim: footprint_header %p buf_size 0x%llx actual_size 0x%llx kr=0x%x\n",
   VAR_9,
   (uint64_t) VAR_11,
   (uint64_t) VAR_12,
   VAR_13);
  VAR_13 = FUNC_4(VAR_4,
    ((vm_address_t)VAR_9 +
     VAR_12),
    VAR_2,
    VAR_0,
    VAR_3);
  FUNC_1(VAR_13 == VAR_1,
   "guard: footprint_header %p buf_size 0x%llx actual_size 0x%llx kr=0x%x\n",
   VAR_9,
   (uint64_t) VAR_11,
   (uint64_t) VAR_12,
   VAR_13);
 }

 VAR_9->cf_size = VAR_12;
}
