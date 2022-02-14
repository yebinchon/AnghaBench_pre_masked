
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,uintptr_t,...) ;
 int* FUNC_1 (int ,uintptr_t) ;

void FUNC_2(uintptr_t VAR_3) {
 pt_entry_t *VAR_4 = ((void*)0);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_0("pmap_verify_noncacheable: no translation for 0x%lx", VAR_3);
 }

 if (*VAR_4 & (VAR_0))
  return;

 if (*VAR_4 & (VAR_1))
  return;
 FUNC_0("pmap_verify_noncacheable: IO read from a cacheable address? address: 0x%lx, PTE: %p, *PTE: 0x%llx", VAR_3, VAR_4, *VAR_4);
}
