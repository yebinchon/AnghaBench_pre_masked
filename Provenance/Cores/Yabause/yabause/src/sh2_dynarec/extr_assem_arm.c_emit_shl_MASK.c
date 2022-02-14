
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int ,unsigned int) ;
 int * VAR_0 ;

void FUNC_4(unsigned int VAR_1,unsigned int VAR_2,unsigned int VAR_3)
{
  FUNC_1(VAR_1<16);
  FUNC_1(VAR_3<16);
  FUNC_1(VAR_2<16);

  FUNC_0("lsl %s,%s,%s\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_0[VAR_2]);
  FUNC_2(0xe1a00000|FUNC_3(VAR_3,0,VAR_1)|0x10|(VAR_2<<8));
}
