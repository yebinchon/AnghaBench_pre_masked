
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_1(int *VAR_1, int *VAR_2)
{
 u8 VAR_3 = 0, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_3, 1, &VAR_4, 1, 1);
 if (VAR_5 < 0)
  return -1;

 if (VAR_1)
  *VAR_1 = !!(VAR_4 & 8);

 if (VAR_2)
  *VAR_2 = !!(VAR_4 & 128);

 return 0;
}
