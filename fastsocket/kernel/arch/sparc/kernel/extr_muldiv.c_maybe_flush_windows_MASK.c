
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned int VAR_0, unsigned int VAR_1,
           unsigned int VAR_2)
{
 if(VAR_1 >= 16 || VAR_0 >= 16 || VAR_2 >= 16) {

  __asm__ __volatile__("save %sp, -0x40, %sp\n\t"
         "save %sp, -0x40, %sp\n\t"
         "save %sp, -0x40, %sp\n\t"
         "save %sp, -0x40, %sp\n\t"
         "save %sp, -0x40, %sp\n\t"
         "save %sp, -0x40, %sp\n\t"
         "save %sp, -0x40, %sp\n\t"
         "restore; restore; restore; restore;\n\t"
         "restore; restore; restore;\n\t");
 }
}
