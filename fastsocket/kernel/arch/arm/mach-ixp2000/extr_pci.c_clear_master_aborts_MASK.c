
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int volatile) ;
 int FUNC_1 (int*,int volatile) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

int
FUNC_4(void)
{
 volatile u32 VAR_2;
 unsigned long VAR_3;

 FUNC_3(VAR_3);
 VAR_2 = *(VAR_1);
 if (VAR_2 & ((1 << 8) | (1 << 5))) {
  FUNC_0(VAR_1, VAR_2);
 }

 VAR_2 = *(VAR_0);
 if (VAR_2 & (1 << 29)) {
  while (VAR_2 & (1 << 29)) {
   FUNC_1(VAR_0, VAR_2);
   VAR_2 = *(VAR_0);
  }
 }
 FUNC_2(VAR_3);

 return 0;
}
