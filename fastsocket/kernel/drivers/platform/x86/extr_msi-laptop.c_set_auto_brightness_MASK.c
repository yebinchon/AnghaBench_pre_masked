
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 u8 VAR_2[2], VAR_3;
 int VAR_4;

 VAR_2[0] = 4;

 VAR_4 = FUNC_0(VAR_0, VAR_2, 1, &VAR_3, 1, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2[0] = 0x84;
 VAR_2[1] = (VAR_3 & 0xF7) | (VAR_1 ? 8 : 0);

 return FUNC_0(VAR_0, VAR_2, 2, ((void*)0), 0, 1);
}
