
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct pv_rooted_entry {int dummy; } ;
struct pv_hashed_entry_t {int dummy; } ;
struct pv_hashed_entry {int dummy; } ;
struct pmap {int dummy; } ;
typedef TYPE_1__* pv_rooted_entry_t ;
typedef int pv_hashed_entry_t ;
typedef size_t ppnum_t ;
struct TYPE_10__ {scalar_t__ type; size_t base; size_t end; } ;
typedef TYPE_2__ pmap_memory_region_t ;
struct TYPE_11__ {int * pm_obj; int * pm_obj_pdpt; int * pm_obj_pml4; } ;
struct TYPE_9__ {int qlink; TYPE_5__* pmap; scalar_t__ va_and_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int,int *) ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 size_t FUNC_3 (int ) ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,int,int ,int,int ) ;
 TYPE_5__* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 int FUNC_5 (char*,int ,int) ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 TYPE_1__* FUNC_6 (size_t) ;
 int FUNC_7 (char*) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_8 (TYPE_5__*,int ,int ) ;
 size_t FUNC_9 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_41 ;
 unsigned int VAR_42 ;
 TYPE_2__* VAR_43 ;
 scalar_t__ VAR_44 ;
 char* VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 char* VAR_48 ;
 int FUNC_10 (int) ;
 int * VAR_49 ;
 int VAR_50 ;
 TYPE_1__* VAR_51 ;
 char* VAR_52 ;
 int FUNC_11 (long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int VAR_53 ;
 int FUNC_14 (int ,int ) ;
 int VAR_54 ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int,int,int,char*) ;
 int FUNC_17 (int ,int ,scalar_t__) ;

void
FUNC_18(void)
{
 long VAR_55;
 vm_offset_t VAR_56;
 vm_size_t VAR_57, VAR_58;
 vm_map_offset_t VAR_59;
 ppnum_t VAR_60;


 VAR_29->pm_obj_pml4 = &VAR_31;
 FUNC_2((vm_object_size_t)VAR_12 * VAR_13, &VAR_31);

 VAR_29->pm_obj_pdpt = &VAR_30;
 FUNC_2((vm_object_size_t)VAR_11 * VAR_13, &VAR_30);

 VAR_29->pm_obj = &VAR_32;
 FUNC_2((vm_object_size_t)VAR_10 * VAR_13, &VAR_32);
 VAR_55 = FUNC_3(VAR_24);



 VAR_57 = (vm_size_t) (sizeof(struct pv_rooted_entry) * VAR_55
    + (sizeof (struct pv_hashed_entry_t *) * (VAR_36))
    + FUNC_11(VAR_55)
    + FUNC_10((VAR_36))
    + VAR_55);
 VAR_57 = FUNC_13(VAR_57);
 if (FUNC_4(VAR_28, &VAR_56, VAR_57, 0,
       VAR_5 | VAR_6, VAR_18)
     != VAR_4)
  FUNC_7("pmap_init");

 FUNC_5((char *)VAR_56, 0, VAR_57);

 VAR_59 = VAR_56;
 VAR_58 = VAR_57;
 VAR_51 = (pv_rooted_entry_t) VAR_56;
 VAR_56 = (vm_offset_t) (VAR_51 + VAR_55);

 VAR_49 = (pv_hashed_entry_t *)VAR_56;
 VAR_56 = (vm_offset_t) (VAR_49 + (VAR_36));

 VAR_52 = (char *) VAR_56;
 VAR_56 = (vm_offset_t) (VAR_52 + FUNC_11(VAR_55));

 VAR_48 = (char *) VAR_56;
 VAR_56 = (vm_offset_t) (VAR_48 + FUNC_10((VAR_36)));

 VAR_45 = (char *) VAR_56;

 ppnum_t VAR_61 = FUNC_3(VAR_24);
        unsigned int VAR_62;
 pmap_memory_region_t *VAR_63 = VAR_43;
 for (VAR_62 = 0; VAR_62 < VAR_42; VAR_62++, VAR_63++) {
  if (VAR_63->type != VAR_27)
   continue;
  ppnum_t VAR_64;
  for (VAR_64 = VAR_63->base; VAR_64 <= VAR_63->end; VAR_64++) {
   if (VAR_64 < VAR_61) {
    VAR_45[VAR_64] |= VAR_14;

    if (VAR_64 > VAR_33)
     VAR_33 = VAR_64;

    if (VAR_64 >= VAR_34 && VAR_64 <= VAR_26)
     VAR_45[VAR_64] |= VAR_15;
   }
  }
 }
 while (VAR_58) {
  VAR_60 = FUNC_9(VAR_29, VAR_59);

  VAR_45[VAR_60] |= VAR_15;

  VAR_59 += VAR_13;
  VAR_58 -= VAR_13;
 }




 VAR_57 = (vm_size_t) sizeof(struct pmap);
 VAR_47 = FUNC_16(VAR_57, 400*VAR_57, 4096, "pmap");
        FUNC_17(VAR_47, VAR_23, VAR_17);

 VAR_38 = FUNC_16(VAR_13, VAR_53, VAR_13, "pagetable anchors");
 FUNC_17(VAR_38, VAR_23, VAR_17);






 FUNC_17(VAR_38, VAR_21, VAR_17);



 VAR_46 = FUNC_16(VAR_13, VAR_53, VAR_13, "pagetable user anchors");
 FUNC_17(VAR_46, VAR_23, VAR_17);






 FUNC_17(VAR_46, VAR_21, VAR_17);

 VAR_57 = (vm_size_t) sizeof(struct pv_hashed_entry);
 VAR_50 = FUNC_16(VAR_57, 10000*VAR_57 ,
     4096 * 3 , "pv_list");
 FUNC_17(VAR_50, VAR_23, VAR_17);
 FUNC_17(VAR_50, VAR_22, VAR_17);





 VAR_59 = (vm_map_offset_t) VAR_19;
 for (VAR_60 = VAR_20; VAR_60 < FUNC_3(VAR_25); VAR_60++) {
  pv_rooted_entry_t VAR_65;

  VAR_65 = FUNC_6(VAR_60);
  VAR_65->va_and_flags = VAR_59;
  VAR_59 += VAR_13;
  VAR_65->pmap = VAR_29;
  FUNC_12(&VAR_65->qlink);
 }
 VAR_41 = VAR_17;

 VAR_35 = FUNC_14((uint64_t)VAR_7, VAR_54);





 FUNC_8(VAR_29, VAR_3, VAR_16);





}
