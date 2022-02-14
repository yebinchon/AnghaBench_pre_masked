
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 scalar_t__* FUNC_9 (int ,scalar_t__) ;

vm_map_address_t
FUNC_10(
 vm_offset_t VAR_19,
 vm_size_t VAR_20,
 vm_prot_t VAR_21)
{
 pt_entry_t *VAR_22, VAR_23;




 vm_map_address_t VAR_24 = VAR_17;
 vm_map_address_t VAR_25 = VAR_17 + VAR_16;

 vm_map_address_t VAR_26;
 vm_map_address_t VAR_27;
 vm_size_t VAR_28;

 VAR_28 = VAR_19 & VAR_10;
 VAR_19 -= VAR_28;
 VAR_20 += VAR_28;

 if (VAR_20 > (VAR_25 - VAR_24)) {
  FUNC_8("pmap_map_high_window_bd: area too large\n");
 }

scan:
 for ( ; VAR_24 < VAR_25; VAR_24 += VAR_11) {
  VAR_22 = FUNC_9(VAR_18, VAR_24);
  FUNC_5(!FUNC_2(*VAR_22));
  if (*VAR_22 == VAR_8)
   break;
 }
 if (VAR_24 > VAR_25) {
  FUNC_8("pmap_map_high_window_bd: insufficient pages\n");
 }

 for (VAR_26 = VAR_24 + VAR_11; VAR_26 < VAR_24 + VAR_20; VAR_26 += VAR_11) {
  VAR_22 = FUNC_9(VAR_18, VAR_26);
  FUNC_5(!FUNC_2(*VAR_22));
  if (*VAR_22 != VAR_8) {
   VAR_24 = VAR_26 + VAR_11;
   goto scan;
  }
 }

 for (VAR_27 = VAR_24; VAR_27 < VAR_26; VAR_27 += VAR_11, VAR_19 += VAR_11) {
  VAR_22 = FUNC_9(VAR_18, VAR_27);
  VAR_23 = FUNC_7(VAR_19)
           | VAR_7 | VAR_2 | VAR_4 | VAR_5
        | FUNC_0((VAR_21 & VAR_15) ? VAR_1 : VAR_0)
           | FUNC_1(VAR_9);



  VAR_23 |= VAR_6;




  FUNC_4(VAR_22, VAR_23);
 }
 FUNC_3(VAR_18, VAR_24, VAR_24 + VAR_20);



 return VAR_24;
}
