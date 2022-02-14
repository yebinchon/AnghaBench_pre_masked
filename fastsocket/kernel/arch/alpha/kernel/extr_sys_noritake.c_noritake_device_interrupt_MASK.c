
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_0)
{
 unsigned long VAR_1;
 unsigned int VAR_2;


 VAR_1 = (((unsigned long) FUNC_3(0x54c) << 32)
        | ((unsigned long) FUNC_3(0x54a) << 16)
        | ((unsigned long) FUNC_2(0xa0) << 8)
        | FUNC_2(0x20));





 while (VAR_1) {
  VAR_2 = FUNC_0(~VAR_1);
  VAR_1 &= VAR_1 - 1;
  if (VAR_2 < 16) {
   FUNC_4(VAR_0);
  } else {
   FUNC_1(VAR_2);
  }
 }
}
