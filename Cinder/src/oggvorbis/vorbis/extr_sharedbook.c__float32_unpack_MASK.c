
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 float FUNC_0 (double,long) ;

float FUNC_1(long VAR_2){
  double VAR_3=VAR_2&0x1fffff;
  int VAR_4=VAR_2&0x80000000;
  long VAR_5 =(VAR_2&0x7fe00000L)>>VAR_1;
  if(VAR_4)VAR_3= -VAR_3;
  return(FUNC_0(VAR_3,VAR_5-(VAR_1-1)-VAR_0));
}
