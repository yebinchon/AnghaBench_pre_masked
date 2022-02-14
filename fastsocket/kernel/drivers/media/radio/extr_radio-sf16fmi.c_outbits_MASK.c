
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, unsigned int VAR_1, int VAR_2)
{
 while (VAR_0--) {
  if (VAR_1 & 1) {
   FUNC_0(5, VAR_2);
   FUNC_1(6);
   FUNC_0(7, VAR_2);
   FUNC_1(6);
  } else {
   FUNC_0(1, VAR_2);
   FUNC_1(6);
   FUNC_0(3, VAR_2);
   FUNC_1(6);
  }
  VAR_1 >>= 1;
 }
}
