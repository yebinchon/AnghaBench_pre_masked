
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_map_address_t ;
typedef int uint64_t ;
typedef int tt_entry_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int* FUNC_2 (int ,scalar_t__) ;
 size_t FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static inline pt_entry_t *
FUNC_4(
  pmap_t VAR_6,
  vm_map_address_t VAR_7)
{
 pt_entry_t *VAR_8;
 tt_entry_t *VAR_9;
 tt_entry_t VAR_10;

 VAR_9 = FUNC_2(VAR_6, VAR_7);
 if (VAR_9 == VAR_5)
  return (VAR_5);

 VAR_10 = *VAR_9;





 if ((VAR_10 & (VAR_2 | VAR_4)) != (VAR_3 | VAR_4)) {
  return (VAR_5);
 }


 VAR_8 = &(((pt_entry_t*) FUNC_1(VAR_10 & VAR_0))[FUNC_3(VAR_6, VAR_7)]);
 return (VAR_8);
}
