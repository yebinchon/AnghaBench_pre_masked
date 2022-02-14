
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;

int FUNC_4(s32 VAR_1)
{
 u32 VAR_2 = 0;
 s32 VAR_3;
 u16 VAR_4;

 if (FUNC_0(VAR_1, VAR_0, &VAR_2) == 0)
  return 0;

 if (VAR_2 != 0)
  return 0;

 FUNC_3(VAR_1);

 VAR_4 = 0x9000;
 VAR_3 = FUNC_2(VAR_1,&VAR_4);
 if(VAR_3==1 && !(VAR_4&0x0470)) VAR_3 = 0;

 FUNC_1(VAR_1);

 return VAR_3;
}
