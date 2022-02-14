
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1,int VAR_2,int VAR_3,int VAR_4,int *VAR_5){
  int VAR_6=VAR_4-VAR_3;
  int VAR_7=VAR_2-VAR_1;
  int VAR_8=FUNC_0(VAR_6);
  int VAR_9=VAR_6/VAR_7;
  int VAR_10=(VAR_6<0?VAR_9-1:VAR_9+1);
  int VAR_11=VAR_1;
  int VAR_12=VAR_3;
  int VAR_13=0;

  VAR_8-=FUNC_0(VAR_9*VAR_7);

  if(VAR_0>VAR_2)VAR_0=VAR_2;

  if(VAR_11<VAR_0)
    VAR_5[VAR_11]=VAR_12;

  while(++VAR_11<VAR_0){
    VAR_13=VAR_13+VAR_8;
    if(VAR_13>=VAR_7){
      VAR_13-=VAR_7;
      VAR_12+=VAR_10;
    }else{
      VAR_12+=VAR_9;
    }
    VAR_5[VAR_11]=VAR_12;
  }
}
