
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int) ;
 int * VAR_0 ;

void FUNC_6(int VAR_1, int VAR_2, int VAR_3)
{
  if(VAR_2<0) FUNC_1(VAR_1, VAR_3);
  else
  {
    FUNC_0("movzwl (%x,%%%s,4),%%%s\n",VAR_1,VAR_0[VAR_2],VAR_0[VAR_3]);
    FUNC_2(0x0F);
    FUNC_2(0xB7);
    FUNC_3(0,4,VAR_3);
    FUNC_4(2,VAR_2,5);
    FUNC_5(VAR_1);
  }
}
