
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s16 ;
typedef int Result ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int,int,int,int,int,int) ;
 int FUNC_4 (float,float) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (void*) ;

Result FUNC_7(int VAR_7, u32 VAR_8, float VAR_9, float VAR_10,
      void* VAR_11, void* VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;
   u32 VAR_15 = 0;
 int VAR_16 = (VAR_8 >> 12) & 3;
 int VAR_17 = (VAR_8 >> 10) & 3;

 if (!(VAR_6 & FUNC_0(VAR_7)))
  return 1;

 if (!VAR_17)
      VAR_8 |= VAR_5;

 if (VAR_16 != VAR_1)
 {
  if (VAR_11)
         VAR_14 = FUNC_6(VAR_11);
  if (VAR_12)
         VAR_15 = FUNC_6(VAR_12);

  if (VAR_11 && VAR_16 == VAR_0)
  {
   int VAR_18 = ((s16*)VAR_11)[-2];
   int VAR_19 = ((u8*)VAR_11)[-2];
   FUNC_1(VAR_7, 0, VAR_18, VAR_19);
  }
 }

 VAR_8 &= ~0xFFFF001F;
 VAR_8 |= VAR_4 | FUNC_5(VAR_7) | (VAR_3 << 16);

 u32 VAR_20 = FUNC_4(VAR_9, VAR_10);
 FUNC_3(VAR_8, VAR_14, VAR_15, VAR_13, VAR_20, VAR_20);

 if (VAR_17 == VAR_2 && VAR_15 > VAR_14)
 {


  VAR_13 -= VAR_15 - VAR_14;
  FUNC_2(VAR_7, 1, VAR_15, VAR_13);
 }

 return 0;
}
