
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int dvdcmdblk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int * VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static dvdcmdblk* FUNC_4()
{
 u32 VAR_1,VAR_2;
 dvdcmdblk *VAR_3 = ((void*)0);
 FUNC_0(VAR_2);
 for(VAR_1=0;VAR_1<4;VAR_1++) {
  if(!FUNC_3(&VAR_0[VAR_1])) {
   FUNC_1(VAR_2);
   VAR_3 = FUNC_2(VAR_1);
   return VAR_3;
  }
 }
 FUNC_1(VAR_2);
 return ((void*)0);
}
