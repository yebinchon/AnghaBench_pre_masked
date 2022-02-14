
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int) ;
 int * VAR_0 ;

void FUNC_5(int VAR_1,unsigned int VAR_2)
{
  FUNC_0("mov $%d,%%%s\n",VAR_1,VAR_0[VAR_2]);
  FUNC_1(VAR_2<16);
  if(VAR_2>=8) FUNC_3(0,0,0,1);
  FUNC_2(0xB8+(VAR_2&7));
  FUNC_4(VAR_1);
}
