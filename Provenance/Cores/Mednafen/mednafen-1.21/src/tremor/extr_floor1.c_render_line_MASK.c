
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_int32_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_1, int VAR_2,int VAR_3,int VAR_4,int VAR_5,ogg_int32_t *VAR_6){
  int VAR_7=VAR_5-VAR_4;
  int VAR_8=VAR_3-VAR_2;
  int VAR_9=FUNC_1(VAR_7);
  int VAR_10=VAR_7/VAR_8;
  int VAR_11=(VAR_7<0?VAR_10-1:VAR_10+1);
  int VAR_12=VAR_2;
  int VAR_13=VAR_4;
  int VAR_14=0;

  if(VAR_1>VAR_3)VAR_1=VAR_3;
  VAR_9-=FUNC_1(VAR_10*VAR_8);

  if(VAR_12<VAR_1)
    VAR_6[VAR_12]= FUNC_0(VAR_6[VAR_12],VAR_0[VAR_13]);

  while(++VAR_12<VAR_1){
    VAR_14=VAR_14+VAR_9;
    if(VAR_14>=VAR_8){
      VAR_14-=VAR_8;
      VAR_13+=VAR_11;
    }else{
      VAR_13+=VAR_10;
    }
    VAR_6[VAR_12]= FUNC_0(VAR_6[VAR_12],VAR_0[VAR_13]);
  }
}
