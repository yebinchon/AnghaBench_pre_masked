
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int * VAR_1 ;

void FUNC_5(int VAR_2,int VAR_3,int VAR_4)
{
  FUNC_1(VAR_4<128&&VAR_4>=0);
  FUNC_1(VAR_3>=0&&VAR_3<16);
  FUNC_0("ldrb lr,%s,%s lsr #12\n",VAR_1[VAR_2],VAR_1[VAR_3]);
  FUNC_3(0xe7d00000|FUNC_4(VAR_0,VAR_2,VAR_3)|0x620);
  FUNC_2(VAR_0,VAR_4);
}
