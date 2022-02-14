
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_offset_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_2 (int ,int) ;

boolean_t FUNC_3(pmap_t VAR_5, vm_map_offset_t *VAR_6, vm_map_offset_t *VAR_7) {
 pd_entry_t *VAR_8;
 boolean_t VAR_9 = VAR_0;

 if (!VAR_4)
  return VAR_9;

 FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_5, *VAR_6);
 if (VAR_8 && (*VAR_8 & VAR_1)) {
  *VAR_6 &= ~(VAR_2 -1);
  VAR_9 = VAR_3;
 }

 VAR_8 = FUNC_2(VAR_5, *VAR_7);
 if (VAR_8 && (*VAR_8 & VAR_1)) {
  *VAR_7 = ((*VAR_7 + VAR_2) & ~(VAR_2 -1));
  VAR_9 = VAR_3;
 }

 FUNC_1(VAR_5);

 return VAR_9;
}
