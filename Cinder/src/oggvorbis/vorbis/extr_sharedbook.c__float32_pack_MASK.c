
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (double) ;
 int FUNC_1 (float,int) ;
 double FUNC_2 (float) ;
 long FUNC_3 (int ) ;

long FUNC_4(float VAR_2){
  int VAR_3=0;
  long VAR_4;
  long VAR_5;
  if(VAR_2<0){
    VAR_3=0x80000000;
    VAR_2= -VAR_2;
  }
  VAR_4= FUNC_0(FUNC_2(VAR_2)/FUNC_2(2.f)+.001);
  VAR_5=FUNC_3(FUNC_1(VAR_2,(VAR_1-1)-VAR_4));
  VAR_4=(VAR_4+VAR_0)<<VAR_1;

  return(VAR_3|VAR_4|VAR_5);
}
