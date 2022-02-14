
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (char*,int,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int ,int*) ;

void FUNC_2(u64 VAR_0, char *VAR_1, int VAR_2)
{
 u8 VAR_3[8];

 FUNC_1(VAR_0, VAR_3);
 FUNC_0(VAR_1, VAR_2, "%02x%02x%02x%02x%02x%02x%02x%02x",
   VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3],
   VAR_3[4], VAR_3[5], VAR_3[6], VAR_3[7]);
}
