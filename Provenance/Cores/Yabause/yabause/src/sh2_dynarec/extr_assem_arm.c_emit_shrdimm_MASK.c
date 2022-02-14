
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,unsigned int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int * VAR_0 ;

void FUNC_4(int VAR_1,int VAR_2,unsigned int VAR_3,int VAR_4)
{
  FUNC_0("shrd %%%s,%%%s,%d\n",VAR_0[VAR_4],VAR_0[VAR_2],VAR_3);
  FUNC_1(VAR_3>0);
  FUNC_1(VAR_3<32);

  FUNC_0("lsr %s,%s,#%d\n",VAR_0[VAR_4],VAR_0[VAR_1],VAR_3);
  FUNC_2(0xe1a00020|FUNC_3(VAR_4,0,VAR_1)|(VAR_3<<7));
  FUNC_0("orr %s,%s,%s,lsl #%d\n",VAR_0[VAR_4],VAR_0[VAR_4],VAR_0[VAR_2],32-VAR_3);
  FUNC_2(0xe1800000|FUNC_3(VAR_4,VAR_4,VAR_2)|((32-VAR_3)<<7));
}
