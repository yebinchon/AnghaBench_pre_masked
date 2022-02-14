
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_0 ;

void FUNC_3(unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
  FUNC_0("smull %s, %s, %s, %s\n",VAR_0[VAR_4],VAR_0[VAR_3],VAR_0[VAR_1],VAR_0[VAR_2]);
  FUNC_1(VAR_1<16);
  FUNC_1(VAR_2<16);
  FUNC_1(VAR_3<16);
  FUNC_1(VAR_4<16);
  FUNC_1(VAR_3!=VAR_1&&VAR_3!=VAR_2);
  FUNC_1(VAR_4!=VAR_1&&VAR_4!=VAR_2);
  FUNC_2(0xe0c00090|(VAR_3<<16)|(VAR_4<<12)|(VAR_2<<8)|VAR_1);
}
