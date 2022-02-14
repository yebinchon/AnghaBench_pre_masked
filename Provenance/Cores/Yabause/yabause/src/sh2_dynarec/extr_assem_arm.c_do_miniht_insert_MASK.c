
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_6(u32 VAR_4,int VAR_5,int VAR_6) {

  FUNC_1(VAR_4,VAR_5);
  FUNC_0((int)VAR_2,VAR_4,1);
  FUNC_4(VAR_6);
  if(VAR_3) FUNC_5(VAR_5,(int)&VAR_1[(VAR_4&0xFF)>>3][0]);
  else FUNC_5(VAR_5,(int)&VAR_0[(VAR_4&0xFF)>>3][0]);
  if(VAR_3) FUNC_5(VAR_6,(int)&VAR_1[(VAR_4&0xFF)>>3][1]);
  else FUNC_5(VAR_6,(int)&VAR_0[(VAR_4&0xFF)>>3][1]);
}
