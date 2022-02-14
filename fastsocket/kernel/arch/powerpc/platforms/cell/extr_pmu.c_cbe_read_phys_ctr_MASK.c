
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;

u32 FUNC_2(u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6 = 0;

 if (VAR_4 < VAR_0) {
  FUNC_1(VAR_5, VAR_1);


  if (VAR_5 & (1 << VAR_4)) {
   FUNC_1(VAR_6, VAR_2[VAR_4]);
  } else {
   FUNC_0(VAR_6, VAR_2[VAR_4]);
  }
 }

 return VAR_6;
}
