
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;

void FUNC_2(int VAR_6)
{
 if (!VAR_4 || !VAR_5) return;
 if (VAR_0&0x08) return;
 if ((VAR_3 & 0x70) == 0x60 ) {
  int VAR_7 = 0;
  int VAR_8;
  for (VAR_8=0;VAR_8<8;VAR_8++) {
   VAR_7 += ((!!(VAR_6&(1<<VAR_8)))<<(7-VAR_8));
  }



  FUNC_0(VAR_7);
 }
}
