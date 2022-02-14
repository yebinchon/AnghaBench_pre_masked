
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,...) ;
 unsigned long FUNC_3 () ;
 unsigned long long FUNC_4 () ;
 unsigned long long FUNC_5 () ;
 unsigned int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static void FUNC_11(int VAR_2, int VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 unsigned long long VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_4 = FUNC_3();
 VAR_9 = FUNC_6();
 VAR_6 = VAR_4 & 0xff;

 for (VAR_13 = VAR_2; VAR_13 <= VAR_3; VAR_13++) {
  FUNC_10(VAR_13);
  FUNC_0();
  FUNC_8();
  FUNC_0();
  VAR_10 = FUNC_7();
  VAR_5 = FUNC_3();
  VAR_7 = FUNC_4();
  VAR_8 = FUNC_5();


  if ((VAR_5 & ~0x1ffffUL) != VAR_0
      && (VAR_5 & 0xff) == VAR_6) {



   int VAR_14 = 11;




   FUNC_2("Index: %2d pgmask=%s ", VAR_13, FUNC_1(VAR_10));

   VAR_11 = (VAR_7 >> 3) & 7;
   VAR_12 = (VAR_8 >> 3) & 7;

   FUNC_2("va=%0*lx asid=%02lx\n",
          VAR_14, (VAR_5 & ~0x1fffUL),
          VAR_5 & 0xff);
   FUNC_2("\t[pa=%0*llx c=%d d=%d v=%d g=%d] ",
          VAR_14,
          (VAR_7 << 6) & VAR_1, VAR_11,
          (VAR_7 & 4) ? 1 : 0,
          (VAR_7 & 2) ? 1 : 0,
          (VAR_7 & 1) ? 1 : 0);
   FUNC_2("[pa=%0*llx c=%d d=%d v=%d g=%d]\n",
          VAR_14,
          (VAR_8 << 6) & VAR_1, VAR_12,
          (VAR_8 & 4) ? 1 : 0,
          (VAR_8 & 2) ? 1 : 0,
          (VAR_8 & 1) ? 1 : 0);
  }
 }
 FUNC_2("\n");

 FUNC_9(VAR_4);
 FUNC_10(VAR_9);
}
