
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int * VAR_0 ;

void FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
  FUNC_0("ldrb %s,%s,%s lsl #2\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_0[VAR_2]);
  FUNC_1(0xe7d00000|FUNC_2(VAR_3,VAR_1,VAR_2)|0x100);
}
