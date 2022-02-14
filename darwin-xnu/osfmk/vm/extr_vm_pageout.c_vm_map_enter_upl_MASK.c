
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


typedef int* wpl_array_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef TYPE_3__* vm_map_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_4__* upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_t ;
typedef scalar_t__ upl_offset_t ;
struct upl {int dummy; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_39__ {int flags; int size; int offset; scalar_t__ kaddr; int ref_count; TYPE_2__* map_object; } ;
struct TYPE_38__ {scalar_t__ pmap; } ;
struct TYPE_37__ {int vo_shadow_offset; int paging_offset; int wimg_bits; int copy_strategy; void* can_persist; void* pageout; struct TYPE_37__* shadow; scalar_t__ phys_contiguous; } ;
struct TYPE_36__ {int vmp_fictitious; void* vmp_pmapped; void* vmp_absent; void* vmp_busy; int vmp_wanted; void* vmp_free_when_done; void* vmp_private; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,scalar_t__,TYPE_1__*,int ,int ,int ,void*,scalar_t__) ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_22 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__*,int,void*,int ,int ,int ,TYPE_3__**) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_4__*,scalar_t__*,int *) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*,scalar_t__) ;
 TYPE_4__* FUNC_13 (TYPE_4__*,int) ;
 scalar_t__ FUNC_14 (TYPE_3__*,scalar_t__*,int,scalar_t__,int ,int ,int ,TYPE_2__*,int,void*,int ,int ,int ) ;
 TYPE_2__* FUNC_15 (int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*,int,int ) ;
 int FUNC_21 () ;
 TYPE_1__* FUNC_22 (TYPE_2__*,int) ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_1__*,int ,void*) ;

kern_return_t
FUNC_25(
 vm_map_t VAR_27,
 upl_t VAR_28,
 vm_map_offset_t *VAR_29)
{
 vm_map_size_t VAR_30;
 vm_object_offset_t VAR_31;
 vm_map_offset_t VAR_32;
 vm_page_t VAR_33;
 kern_return_t VAR_34;
 int VAR_35 = 0, VAR_36=0;
 upl_t VAR_37 = ((void*)0);
 vm_offset_t VAR_38 = 0;
 vm_map_t VAR_39 = ((void*)0);
 upl_offset_t VAR_40 = 0;
 upl_size_t VAR_41 = 0;

 if (VAR_28 == VAR_13)
  return VAR_2;

 if((VAR_35 = FUNC_11(VAR_28))) {
  int VAR_42=0,VAR_43=0;
  VAR_37 = VAR_28;

  FUNC_8(VAR_37);
  for(VAR_36=0; VAR_36 < VAR_4; VAR_36++) {
   VAR_28 = FUNC_13(VAR_37, VAR_36 );
   if(VAR_28 == ((void*)0))
    continue;
   VAR_43++;
   if (VAR_14 & VAR_28->flags)
    VAR_42++;
  }

  if(VAR_42) {
   if(VAR_42 != VAR_43)
    FUNC_7("Only %d of the %d sub-upls within the Vector UPL are alread mapped\n", VAR_42, VAR_43);
   else {
    FUNC_9(VAR_37);
    return VAR_1;
   }
  }

  VAR_34 = FUNC_6(VAR_27, &VAR_38, VAR_37->size, VAR_0,
               VAR_16, VAR_21, VAR_19,
               &VAR_39);
  if( VAR_34 != VAR_3 )
   FUNC_7("Vector UPL submap allocation failed\n");
  VAR_27 = VAR_39;
  FUNC_12(VAR_37, VAR_39, VAR_38);
  VAR_36=0;
 }
 else
  FUNC_8(VAR_28);

process_upl_to_enter:
 if(VAR_35){
  if(VAR_36 == VAR_4) {
   *VAR_29 = VAR_38;
   FUNC_9(VAR_37);
   return VAR_3;
  }
  VAR_28 = FUNC_13(VAR_37, VAR_36++ );
  if(VAR_28 == ((void*)0))
   goto process_upl_to_enter;

  FUNC_10(VAR_37, VAR_28, &VAR_40, &VAR_41);
  *VAR_29 = (vm_map_offset_t)(VAR_38 + (vm_map_offset_t)VAR_40);
 } else {



  if (VAR_14 & VAR_28->flags) {
   FUNC_9(VAR_28);
   return VAR_1;
  }
 }
 if ((!(VAR_28->flags & VAR_15)) &&
     ((VAR_28->flags & VAR_10) ||
      !((VAR_28->flags & (VAR_9 | VAR_12)) || (VAR_28->map_object->phys_contiguous)))) {

  vm_object_t VAR_44;
  vm_page_t VAR_45;
  vm_object_offset_t VAR_46;
  unsigned int VAR_47;
  wpl_array_t VAR_48;

  if (VAR_28->flags & VAR_11) {
   VAR_48 = (wpl_array_t)
    ((((uintptr_t)VAR_28) + sizeof(struct upl))
     + ((VAR_28->size/VAR_6) * sizeof(upl_page_info_t)));
  } else {
          VAR_48 = (wpl_array_t)(((uintptr_t)VAR_28) + sizeof(struct upl));
  }
  VAR_44 = VAR_28->map_object;
  VAR_28->map_object = FUNC_15(VAR_28->size);

  FUNC_17(VAR_28->map_object);

  VAR_28->map_object->shadow = VAR_44;
  VAR_28->map_object->pageout = VAR_8;
  VAR_28->map_object->can_persist = VAR_0;
  VAR_28->map_object->copy_strategy = VAR_5;
  VAR_28->map_object->vo_shadow_offset = VAR_28->offset - VAR_44->paging_offset;
  VAR_28->map_object->wimg_bits = VAR_44->wimg_bits;
  VAR_31 = VAR_28->map_object->vo_shadow_offset;
  VAR_46 = 0;
  VAR_30 = VAR_28->size;

  VAR_28->flags |= VAR_15;

  while (VAR_30) {
   VAR_47 = (unsigned int) (VAR_46 / VAR_6);
   FUNC_4(VAR_47 == VAR_46 / VAR_6);

   if (VAR_48[VAR_47>>5] & (1 << (VAR_47 & 31))) {

    FUNC_2(VAR_45);

    FUNC_17(VAR_44);

    VAR_33 = FUNC_22(VAR_44, VAR_31);
    if (VAR_33 == VAR_22) {
            FUNC_7("vm_upl_map: page missing\n");
    }





    FUNC_4(VAR_45->vmp_fictitious);
    VAR_45->vmp_fictitious = VAR_0;
    VAR_45->vmp_private = VAR_8;
    VAR_45->vmp_free_when_done = VAR_8;






    FUNC_3(VAR_45, FUNC_1(VAR_33));

           FUNC_19(VAR_44);

    FUNC_21();
    FUNC_24(VAR_45, VAR_19, VAR_8);
    FUNC_23();

    FUNC_20(VAR_45, VAR_28->map_object, VAR_46, VAR_19);

    FUNC_4(!VAR_45->vmp_wanted);
    VAR_45->vmp_busy = VAR_0;
    VAR_45->vmp_absent = VAR_0;
   }
   VAR_30 -= VAR_6;
   VAR_31 += VAR_7;
   VAR_46 += VAR_7;
  }
  FUNC_19(VAR_28->map_object);
 }
 if (VAR_28->flags & VAR_15)
         VAR_31 = 0;
 else
         VAR_31 = VAR_28->offset - VAR_28->map_object->paging_offset;

 VAR_30 = VAR_28->size;

 FUNC_18(VAR_28->map_object);

 if(!VAR_35) {
  *VAR_29 = 0;



  VAR_34 = FUNC_14(VAR_27, VAR_29, (vm_map_size_t)VAR_30, (vm_map_offset_t) 0,
      VAR_16, VAR_21, VAR_20,
      VAR_28->map_object, VAR_31, VAR_0,
      VAR_24, VAR_23, VAR_18);

  if (VAR_34 != VAR_3) {
   FUNC_16(VAR_28->map_object);
   FUNC_9(VAR_28);
   return(VAR_34);
  }
 }
 else {
  VAR_34 = FUNC_14(VAR_27, VAR_29, (vm_map_size_t)VAR_30, (vm_map_offset_t) 0,
      VAR_17, VAR_21, VAR_20,
      VAR_28->map_object, VAR_31, VAR_0,
      VAR_24, VAR_23, VAR_18);
  if(VAR_34)
   FUNC_7("vm_map_enter failed for a Vector UPL\n");
 }
 FUNC_17(VAR_28->map_object);

 for (VAR_32 = *VAR_29; VAR_30 > 0; VAR_30 -= VAR_6, VAR_32 += VAR_6) {
  VAR_33 = FUNC_22(VAR_28->map_object, VAR_31);

  if (VAR_33) {
   VAR_33->vmp_pmapped = VAR_8;





   FUNC_4(VAR_27->pmap == VAR_26);

   FUNC_0(VAR_27->pmap, VAR_32, VAR_33, VAR_24, VAR_25, 0, VAR_8, VAR_34);

   FUNC_4(VAR_34 == VAR_3);



  }
  VAR_31 += VAR_7;
 }
 FUNC_19(VAR_28->map_object);




 VAR_28->ref_count++;
 VAR_28->flags |= VAR_14;
 VAR_28->kaddr = (vm_offset_t) *VAR_29;
 FUNC_4(VAR_28->kaddr == *VAR_29);

 if(VAR_35)
  goto process_upl_to_enter;

 FUNC_9(VAR_28);

 return VAR_3;
}
