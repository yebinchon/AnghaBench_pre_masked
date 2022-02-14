
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_address_t ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,unsigned int) ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int* FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;

vm_map_address_t
FUNC_10(
 vm_map_address_t VAR_12,
 vm_offset_t VAR_13,
 vm_offset_t VAR_14,
 vm_prot_t VAR_15)
{
 pt_entry_t VAR_16;
 pt_entry_t *VAR_17;
 vm_map_address_t VAR_18;
 vm_offset_t VAR_19;


 VAR_16 = FUNC_6(VAR_13)
           | VAR_6 | VAR_2 | VAR_4 | VAR_5
           | FUNC_0((VAR_15 & VAR_10) ? VAR_1 : VAR_0)
           | FUNC_1(VAR_7);




 VAR_18 = VAR_12;
 VAR_19 = VAR_13;
 while (VAR_19 < VAR_14) {

  VAR_17 = FUNC_8(VAR_11, VAR_18);
  if (VAR_17 == VAR_9) {
   FUNC_7("pmap_map_bd");
  }
  FUNC_4(!FUNC_2(*VAR_17));
  FUNC_3(VAR_17, VAR_16);

  FUNC_9(VAR_16);
  VAR_18 += VAR_8;
  VAR_19 += VAR_8;
 }

 if (VAR_14 >= VAR_13)
  FUNC_5(VAR_12, (unsigned)(VAR_14 - VAR_13));

 return (VAR_18);
}
