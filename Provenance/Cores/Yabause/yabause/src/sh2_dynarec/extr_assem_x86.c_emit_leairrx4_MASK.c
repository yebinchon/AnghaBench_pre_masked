
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 int * VAR_1 ;

void FUNC_5(int VAR_2,int VAR_3,int VAR_4,int VAR_5)
{
  FUNC_0("lea %x(%%%s,%%%s,4),%%%s\n",VAR_2,VAR_1[VAR_3],VAR_1[VAR_4],VAR_1[VAR_5]);
  FUNC_1(0x8D);
  if(VAR_2!=0||VAR_3==VAR_0) {
    FUNC_2(2,4,VAR_5);
    FUNC_3(2,VAR_4,VAR_3);
    FUNC_4(VAR_2);
  }else{
    FUNC_2(0,4,VAR_5);
    FUNC_3(2,VAR_4,VAR_3);
  }
}
