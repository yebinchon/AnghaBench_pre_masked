
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_1(uint32_t const **VAR_4, const uint32_t * VAR_5)
{
 uint32_t VAR_6;
 const uint32_t *VAR_7 = *VAR_4;
 verifier_state_t VAR_8 = VAR_2;

 while (VAR_7 < VAR_5) {
  VAR_6 = *VAR_7;
  if ((VAR_6 > ((0x3FF >> 2) | VAR_0)) &&
      (VAR_6 < ((0xC00 >> 2) | VAR_0))) {
   if ((VAR_6 & VAR_1) != VAR_0)
    break;
   FUNC_0("Invalid HALCYON_HEADER1 command. "
      "Attempt to access 3D- or command burst area.\n");
   VAR_8 = VAR_3;
   break;
  } else if (VAR_6 > ((0xCFF >> 2) | VAR_0)) {
   if ((VAR_6 & VAR_1) != VAR_0)
    break;
   FUNC_0("Invalid HALCYON_HEADER1 command. "
      "Attempt to access VGA registers.\n");
   VAR_8 = VAR_3;
   break;
  } else {
   VAR_7 += 2;
  }
 }
 *VAR_4 = VAR_7;
 return VAR_8;
}
