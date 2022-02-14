
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;
 int * VAR_1 ;

void FUNC_4(int VAR_2, int VAR_3)
{
  FUNC_0("movzbl %x,%%%s\n",VAR_2,VAR_1[VAR_3]);
  FUNC_1(0x0F);
  FUNC_1(0xB6);
  FUNC_2(0,5,VAR_3);
  FUNC_3(VAR_2-(int)VAR_0-4);
}
