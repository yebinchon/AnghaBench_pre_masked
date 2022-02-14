
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (int) ;
 int * VAR_0 ;

void FUNC_6(int VAR_1,int VAR_2,int VAR_3)
{
  if(VAR_1==VAR_3) {
    if(VAR_2!=0) {
      FUNC_0("add $%d,%%%s\n",VAR_2,VAR_0[VAR_3]);
      if(VAR_2<128&&VAR_2>=-128) {
        FUNC_4(1,0,0,VAR_3>>3);
        FUNC_2(0x83);
        FUNC_3(3,VAR_3&7,0);
        FUNC_2(VAR_2);
      }
      else
      {
        FUNC_4(1,0,0,VAR_3>>3);
        FUNC_2(0x81);
        FUNC_3(3,VAR_3&7,0);
        FUNC_5(VAR_2);
      }
    }
  }
  else {
    if(VAR_2!=0) {
      FUNC_0("lea %d(%%%s),%%%s\n",VAR_2,VAR_0[VAR_1],VAR_0[VAR_3]);
      FUNC_4(1,VAR_3>>3,0,VAR_1>>3);
      FUNC_2(0x8D);
      if(VAR_2<128&&VAR_2>=-128) {
        FUNC_3(1,VAR_1&7,VAR_3&7);
        FUNC_2(VAR_2);
      }else{
        FUNC_3(2,VAR_1&7,VAR_3&7);
        FUNC_5(VAR_2);
      }
    }else{
      FUNC_1(VAR_1,VAR_3);
    }
  }
}
