
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int) ;
 int * VAR_2 ;

void FUNC_7(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  FUNC_1(VAR_5>=0);
  if(VAR_5<0) FUNC_2(VAR_3, VAR_4, VAR_6);
  else {

    FUNC_0("mov %x(%%%s,%%%s,4),%%%s\n",VAR_3,VAR_2[VAR_4],VAR_2[VAR_5],VAR_2[VAR_6]);
    FUNC_1(VAR_4!=VAR_1);

    FUNC_3(0x8B);
    if(VAR_3==0&&VAR_4!=VAR_0) {
      FUNC_4(0,4,VAR_6);
      FUNC_5(2,VAR_5,VAR_4);
    }
    else if(VAR_3<128&&VAR_3>=-128) {
      FUNC_4(1,4,VAR_6);
      FUNC_5(2,VAR_5,VAR_4);
      FUNC_3(VAR_3);
    }
    else
    {
      FUNC_4(2,4,VAR_6);
      FUNC_5(2,VAR_5,VAR_4);
      FUNC_6(VAR_3);
    }
  }
}
