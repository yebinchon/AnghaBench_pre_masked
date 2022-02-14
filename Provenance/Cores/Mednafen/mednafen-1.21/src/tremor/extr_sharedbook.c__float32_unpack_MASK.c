
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long ogg_int32_t ;


 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static ogg_int32_t FUNC_0(long VAR_2,int *VAR_3){
  long VAR_4=VAR_2&0x1fffff;
  int VAR_5=VAR_2&0x80000000;
  long VAR_6 =(VAR_2&0x7fe00000L)>>VAR_1;

  VAR_6-=(VAR_1-1)+VAR_0;

  if(VAR_4){
    while(!(VAR_4&0x40000000)){
      VAR_4<<=1;
      VAR_6-=1;
    }

    if(VAR_5)VAR_4= -VAR_4;
  }else{
    VAR_5=0;
    VAR_6=-9999;
  }

  *VAR_3=VAR_6;
  return VAR_4;
}
