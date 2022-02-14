
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
typedef int vm_map_offset_t ;
typedef TYPE_4__* vm_map_entry_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vm_map_corpse_footprint_region {scalar_t__ cfr_vaddr; int cfr_num_pages; } ;
struct vm_map_corpse_footprint_header {int cf_size; int cf_last_region; int cf_last_zeroes; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_15__ {int vme_start; int vme_end; scalar_t__ iokit_acct; int is_sub_map; } ;
struct TYPE_12__ {int nentries; } ;
struct TYPE_14__ {int has_corpse_footprint; int size; int pmap; struct vm_map_corpse_footprint_header* vmmap_corpse_footprint; TYPE_1__ hdr; } ;
struct TYPE_13__ {scalar_t__ purgable; scalar_t__ internal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int,int ,int,int ) ;
 scalar_t__ FUNC_3 (int,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__*) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int VAR_13 ;
 struct vm_map_corpse_footprint_region* FUNC_8 (struct vm_map_corpse_footprint_header*) ;
 int VAR_14 ;
 int FUNC_9 (TYPE_3__*) ;

kern_return_t
FUNC_10(
 vm_map_t VAR_15,
 vm_map_entry_t VAR_16,
 vm_map_t VAR_17)
{
 vm_map_offset_t VAR_18;
 int VAR_19;
 kern_return_t VAR_20;
 struct vm_map_corpse_footprint_header *VAR_21;
 struct vm_map_corpse_footprint_region *VAR_22;
 struct vm_map_corpse_footprint_region *VAR_23;
 unsigned char *VAR_24;
 uintptr_t VAR_25;
 uint32_t VAR_26;

 VAR_18 = VAR_16->vme_start;

 FUNC_9(VAR_15);
 FUNC_9(VAR_17);

 FUNC_1(VAR_17->has_corpse_footprint);
 FUNC_1(!VAR_15->has_corpse_footprint);
 if (!VAR_17->has_corpse_footprint ||
     VAR_15->has_corpse_footprint) {




  return VAR_0;
 }

 if (VAR_17->vmmap_corpse_footprint == ((void*)0)) {
  vm_offset_t VAR_27;
  vm_size_t VAR_28;

  VAR_27 = 0;
  VAR_28 = (sizeof (*VAR_21) +
       (VAR_15->hdr.nentries
        *
        (sizeof (*VAR_22) +
         + 3))
       +
       ((VAR_15->size / VAR_5)
        *
        sizeof (char)));

  VAR_28 = FUNC_6(VAR_28);
  if (VAR_28 > (8*1024*1024)) {
   VAR_28 = (8*1024*1024);
  }





  VAR_20 = FUNC_2(VAR_12,
         &VAR_27,
         (VAR_28
          + VAR_5),
         0,
         VAR_4 | VAR_3,
         VAR_8);
  if (VAR_20 != VAR_2) {
   VAR_14++;
   return VAR_20;
  }


  VAR_21 = (struct vm_map_corpse_footprint_header *)VAR_27;
  VAR_17->vmmap_corpse_footprint = VAR_21;

  VAR_21->cf_size = VAR_28;
  VAR_21->cf_last_region =
   sizeof (*VAR_21);
  VAR_21->cf_last_zeroes = 0;

  VAR_22 = (struct vm_map_corpse_footprint_region *)
   ((char *)VAR_21 +
    VAR_21->cf_last_region);
  VAR_22->cfr_vaddr = 0;
  VAR_22->cfr_num_pages = 0;
 } else {

  VAR_21 = (struct vm_map_corpse_footprint_header *)
   VAR_17->vmmap_corpse_footprint;
  VAR_22 = (struct vm_map_corpse_footprint_region *)
   ((char *)VAR_21 +
    VAR_21->cf_last_region);
 }
 VAR_25 = ((uintptr_t)VAR_21 +
     VAR_21->cf_size);

 if ((VAR_22->cfr_vaddr +
      (((vm_map_offset_t)VAR_22->cfr_num_pages) *
       VAR_5))
     != VAR_16->vme_start) {
  uint64_t VAR_29;
  uint32_t VAR_30;







  VAR_29 = (((VAR_16->vme_start -
         VAR_22->cfr_vaddr) / VAR_5)
       - VAR_22->cfr_num_pages);

  VAR_30 =
   (sizeof (*VAR_22) +
    FUNC_7((VAR_22->cfr_num_pages -
      VAR_21->cf_last_zeroes),
     sizeof (int)) -
    (VAR_22->cfr_num_pages -
     VAR_21->cf_last_zeroes));

  if (VAR_30 < VAR_29 ||
      FUNC_3(VAR_22->cfr_num_pages,
         (uint32_t) VAR_29,
         1,
         &VAR_26)) {
   VAR_23 =
    FUNC_8(VAR_21);

   if (VAR_23 == ((void*)0)) {
    goto over_the_edge;
   }
   VAR_22 = VAR_23;

   VAR_22->cfr_vaddr = VAR_16->vme_start;
   VAR_22->cfr_num_pages = 0;
  } else {





   for (; VAR_29 > 0; VAR_29--) {
    VAR_24 =
     ((unsigned char *) VAR_22 +
      sizeof (*VAR_22) +
      VAR_22->cfr_num_pages);

    if ((uintptr_t)VAR_24 >= VAR_25) {
     goto over_the_edge;
    }

    VAR_22->cfr_num_pages++;
    *VAR_24 = (unsigned char) 0;
    VAR_21->cf_last_zeroes++;
   }
  }
 }

 for (VAR_18 = VAR_16->vme_start;
      VAR_18 < VAR_16->vme_end;
      VAR_18 += VAR_5) {
  vm_object_t VAR_31;

  VAR_31 = FUNC_0(VAR_16);
  if (!VAR_16->is_sub_map &&
      VAR_16->iokit_acct &&
      VAR_31 != VAR_10 &&
      VAR_31->internal &&
      VAR_31->purgable == VAR_11) {
   VAR_19 = (VAR_7 |
    VAR_6);
  } else {
   VAR_19 = 0;
   FUNC_5(VAR_15->pmap,
          VAR_18,
          &VAR_19);
  }



  if (VAR_19 == 0 && VAR_22->cfr_num_pages == 0) {




   VAR_22->cfr_vaddr += VAR_5;
   continue;
  }


  if (FUNC_4(VAR_22->cfr_num_pages, 1,
        &VAR_26)) {

   VAR_23 =
    FUNC_8(
     VAR_21);
   if (VAR_23 == ((void*)0)) {
    goto over_the_edge;
   }
   VAR_22 = VAR_23;
   VAR_22->cfr_vaddr = VAR_18;
   VAR_22->cfr_num_pages = 0;
  }

  VAR_24 = ((unsigned char *)VAR_22 +
          sizeof (*VAR_22) +
          VAR_22->cfr_num_pages);

  if ((uintptr_t)VAR_24 >= VAR_25) {
   goto over_the_edge;
  }

  *VAR_24 = (unsigned char) VAR_19;
  VAR_22->cfr_num_pages++;

  if (VAR_19 != 0) {

   VAR_21->cf_last_zeroes = 0;

   continue;
  }


  VAR_21->cf_last_zeroes++;
  if ((VAR_21->cf_last_zeroes +
       FUNC_7((VAR_22->cfr_num_pages -
         VAR_21->cf_last_zeroes) &
        (sizeof (int) - 1),
        sizeof (int))) <
      (sizeof (*VAR_21))) {







   continue;
  }




  VAR_23 =
   FUNC_8(VAR_21);
  if (VAR_23 == ((void*)0)) {
   goto over_the_edge;
  }
  VAR_22 = VAR_23;

  VAR_22->cfr_num_pages = 0;

  VAR_22->cfr_vaddr = VAR_18 + VAR_5;
 }

 return VAR_2;

over_the_edge:

 VAR_13++;
 return VAR_1;
}
