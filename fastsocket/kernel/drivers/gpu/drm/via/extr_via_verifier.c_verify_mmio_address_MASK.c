
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __inline__ int FUNC_1(uint32_t VAR_0)
{
 if ((VAR_0 > 0x3FF) && (VAR_0 < 0xC00)) {
  FUNC_0("Invalid VIDEO DMA command. "
     "Attempt to access 3D- or command burst area.\n");
  return 1;
 } else if ((VAR_0 > 0xCFF) && (VAR_0 < 0x1300)) {
  FUNC_0("Invalid VIDEO DMA command. "
     "Attempt to access PCI DMA area.\n");
  return 1;
 } else if (VAR_0 > 0x13FF) {
  FUNC_0("Invalid VIDEO DMA command. "
     "Attempt to access VGA registers.\n");
  return 1;
 }
 return 0;
}
