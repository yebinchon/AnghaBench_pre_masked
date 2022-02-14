
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pt_desc_t ;
typedef int pmap_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,unsigned int,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *,int ) ;

void
FUNC_11(
 pmap_t VAR_4,
 pt_entry_t *VAR_5,
 vm_offset_t VAR_6,
 unsigned int VAR_7,
 boolean_t VAR_8)
{
 pt_desc_t *VAR_9 = ((void*)0);
 vm_offset_t *VAR_10;

 VAR_10 = (vm_offset_t *)(FUNC_4(FUNC_3(FUNC_2((vm_offset_t)VAR_5))));

 if (FUNC_9(VAR_10, VAR_2)) {
  if (VAR_8) {





   VAR_9 = FUNC_6(VAR_4);
   FUNC_10(VAR_10, VAR_9, VAR_3);
  } else {
   FUNC_5("pmap_init_pte_page(): pte_p %p", VAR_5);
  }
 } else if (FUNC_9(VAR_10, VAR_3)) {
  VAR_9 = (pt_desc_t*)(FUNC_8(VAR_10));
 } else {
  FUNC_5("pmap_init_pte_page(): invalid PVH type for pte_p %p", VAR_5);
 }

 FUNC_1(VAR_5, VAR_0);


 FUNC_0(VAR_1);
 FUNC_7(VAR_9, VAR_4, VAR_6, VAR_7, VAR_5);
}
