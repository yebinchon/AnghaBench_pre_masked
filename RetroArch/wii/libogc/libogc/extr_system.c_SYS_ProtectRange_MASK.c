
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int* VAR_2 ;

void FUNC_8(u32 VAR_3,void *VAR_4,u32 VAR_5,u32 VAR_6)
{
 u16 VAR_7;
 u32 VAR_8,VAR_9,VAR_10;

 if(VAR_3<VAR_0) {
  VAR_8 = ((u32)VAR_4)&~0x3ff;
  VAR_9 = ((((u32)VAR_4)+VAR_5)+1023)&~0x3ff;
  FUNC_0((void*)VAR_8,(VAR_9-VAR_8));

  FUNC_2(VAR_10);

  FUNC_7(FUNC_1(VAR_3));
  VAR_2[VAR_3<<2] = FUNC_5(VAR_8,10,16);
  VAR_2[(VAR_3<<2)+1] = FUNC_5(VAR_9,10,16);

  VAR_7 = VAR_2[8];
  VAR_7 = (VAR_7&~(FUNC_4(3,(VAR_3<<1),2)))|(FUNC_4(VAR_6,(VAR_3<<1),2));
  VAR_2[8] = VAR_7;

  if(VAR_6==VAR_1)
   FUNC_6(FUNC_1(VAR_3));

  FUNC_3(VAR_10);
 }
}
