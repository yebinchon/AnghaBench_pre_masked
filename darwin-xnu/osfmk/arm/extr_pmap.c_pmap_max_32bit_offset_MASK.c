
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_offset_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (char*,unsigned int) ;

vm_map_offset_t FUNC_2(
 unsigned int VAR_9)
{
 vm_map_offset_t VAR_10 = 0;

 if (VAR_9 == VAR_0) {
  VAR_10 = VAR_7;
 } else if (VAR_9 == VAR_4) {
  VAR_10 = 0x66000000;
 } else if (VAR_9 == VAR_3) {
  VAR_10 = VAR_6;
 } else if (VAR_9 == VAR_1) {
  if (VAR_7) {
   VAR_10 = VAR_7;
  } else if (VAR_8 > 0x20000000) {
   VAR_10 = 0x80000000;
  } else {
   VAR_10 = 0x66000000;
  }
 } else if (VAR_9 == VAR_2) {
  VAR_10 = 0x80000000;
 } else {
  FUNC_1("pmap_max_32bit_offset illegal option 0x%x\n", VAR_9);
 }

 FUNC_0(VAR_10 <= VAR_5);
 return VAR_10;
}
