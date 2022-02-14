
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 int VAR_2;
 FUNC_1(" DMA registers\n");
 for (VAR_2 = 0; VAR_2 < 22; VAR_2++) {
  if ((VAR_2 < 9) || (VAR_2 > 17)) {
   int VAR_3 = VAR_2 * 4;
   FUNC_0("\t Reg No. %d (offset 0x%x): 0x%08x\n", VAR_2,
          (VAR_0 + VAR_3),
          FUNC_2(VAR_1 + VAR_0 + VAR_3));
  }
 }
 return;
}
