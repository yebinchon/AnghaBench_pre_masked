
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(s32 VAR_0)
{
 u8 VAR_1[2];
 s32 VAR_2=0;

 FUNC_4(VAR_0);

 if (FUNC_2(VAR_0) &&FUNC_1(VAR_0, 0, VAR_1+0) &&
     FUNC_1(VAR_0, 1, VAR_1+1) && VAR_1[0] == 0xBF && VAR_1[1] == 0xD7 &&
     FUNC_3(VAR_0))
  VAR_2 = 1;

 FUNC_0(VAR_0);

 return VAR_2;
}
