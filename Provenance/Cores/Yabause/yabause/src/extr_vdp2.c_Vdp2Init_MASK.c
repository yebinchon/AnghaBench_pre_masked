
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vdp2 ;


 int * FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;

int FUNC_4(void) {
   if ((VAR_2 = (Vdp2 *) FUNC_3(1, sizeof(Vdp2))) == ((void*)0))
      return -1;

   if ((VAR_1 = FUNC_0(0x80000)) == ((void*)0))
      return -1;

   if ((VAR_0 = FUNC_1(0x1000)) == ((void*)0))
      return -1;

   FUNC_2();
   return 0;
}
