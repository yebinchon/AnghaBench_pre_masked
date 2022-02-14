
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Elf32_Rela ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, int VAR_2)
{
 uint32_t *VAR_3, *VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = (uint32_t *)VAR_0;
 VAR_3 = (uint32_t *)VAR_1;

 for (VAR_6 = 0; VAR_6 < sizeof(Elf32_Rela) / sizeof(uint32_t); VAR_6++) {
  VAR_5 = VAR_3[VAR_6];
  VAR_3[VAR_6] = VAR_4[VAR_6];
  VAR_4[VAR_6] = VAR_5;
 }
}
