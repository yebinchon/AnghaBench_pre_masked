
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 () ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_6 (int ) ;
 int* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* FUNC_7 (int) ;

void FUNC_8(u8 *VAR_22)
{
 u32 VAR_23,VAR_24;

 if(!VAR_11) {
  VAR_17 = FUNC_7(31524);
  VAR_18 = FUNC_7(42024);
  VAR_21 = FUNC_7(42000);
  VAR_20 = FUNC_7(63000);
  VAR_19 = FUNC_7(3000);

  VAR_16[VAR_2] &= ~(VAR_1|VAR_0|VAR_4);
  VAR_16[1] = 0;
  VAR_16[3] = 0;

  VAR_16[VAR_2] = (VAR_16[VAR_2]&~VAR_6)|VAR_6;

  VAR_23 = (FUNC_4(VAR_16[VAR_2],6,1))^1;
  if(VAR_23==VAR_5) {
   VAR_16[VAR_2] &= ~VAR_3;
   FUNC_2(VAR_24);
   FUNC_5();
   VAR_16[VAR_2] |= VAR_3;
   FUNC_3(VAR_24);
  }

  VAR_10 = ((void*)0);

  VAR_15 = ((void*)0);

  VAR_14 = VAR_22;

  FUNC_1(VAR_8,VAR_9,((void*)0));
  FUNC_6(FUNC_0(VAR_8));






  VAR_11 = 1;
 }
}
