
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5, VAR_6;

 VAR_4 = FUNC_1() & 0xfc0;

 for (VAR_3 = VAR_1; VAR_3 <= VAR_2; VAR_3++) {
  FUNC_4(VAR_3<<8);
  __asm__ __volatile__(
   ".set\tnoreorder\n\t"
   "tlbr\n\t"
   "nop\n\t"
   ".set\treorder");
  VAR_5 = FUNC_1();
  VAR_6 = FUNC_2();


  if ((VAR_5 & 0xffffe000) != 0x80000000
      && (VAR_5 & 0xfc0) == VAR_4) {



   FUNC_0("Index: %2d ", VAR_3);

   FUNC_0("va=%08lx asid=%08lx"
          "  [pa=%06lx n=%d d=%d v=%d g=%d]",
          (VAR_5 & 0xffffe000),
          VAR_5 & 0xfc0,
          VAR_6 & VAR_0,
          (VAR_6 & (1 << 11)) ? 1 : 0,
          (VAR_6 & (1 << 10)) ? 1 : 0,
          (VAR_6 & (1 << 9)) ? 1 : 0,
          (VAR_6 & (1 << 8)) ? 1 : 0);
  }
 }
 FUNC_0("\n");

 FUNC_3(VAR_4);
}
