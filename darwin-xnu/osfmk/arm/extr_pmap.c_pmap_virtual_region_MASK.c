
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_size_t ;
typedef int vm_map_offset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

boolean_t
FUNC_0(
 unsigned int VAR_12,
 vm_map_offset_t *VAR_13,
 vm_map_size_t *VAR_14
)
{
 boolean_t VAR_15 = VAR_1;
 if (VAR_12 == 0) {





  if (!VAR_4) {
   *VAR_13 = VAR_10 & 0xFFFFFFFFFE000000;
   *VAR_14 = ((VAR_11-(VAR_10 & 0xFFFFFFFFFE000000)) + ~0xFFFFFFFFFE000000) & 0xFFFFFFFFFE000000;
  } else {
   *VAR_13 = VAR_10 & 0xFFFFFFFFFF800000;
   *VAR_14 = ((VAR_11-(VAR_10 & 0xFFFFFFFFFF800000)) + ~0xFFFFFFFFFF800000) & 0xFFFFFFFFFF800000;
  }

  VAR_15 = VAR_5;
 }
 if (VAR_12 == 1) {
  *VAR_13 = VAR_9;
  *VAR_14 = VAR_8;
  VAR_15 = VAR_5;
 }
 return VAR_15;
}
