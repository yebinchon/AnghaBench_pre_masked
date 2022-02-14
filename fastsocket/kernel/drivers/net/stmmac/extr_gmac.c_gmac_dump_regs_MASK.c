
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 int VAR_1;
 FUNC_0("\t----------------------------------------------\n"
        "\t  GMAC registers (base addr = 0x%8x)\n"
        "\t----------------------------------------------\n",
        (unsigned int)VAR_0);

 for (VAR_1 = 0; VAR_1 < 55; VAR_1++) {
  int VAR_2 = VAR_1 * 4;
  FUNC_0("\tReg No. %d (offset 0x%x): 0x%08x\n", VAR_1,
         VAR_2, FUNC_1(VAR_0 + VAR_2));
 }
 return;
}
