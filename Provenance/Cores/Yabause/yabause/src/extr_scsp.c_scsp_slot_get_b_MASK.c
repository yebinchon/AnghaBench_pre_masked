
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static u8
FUNC_2 (u32 VAR_2, u32 VAR_3)
{



  u8 VAR_4 = VAR_1[VAR_3 ^ 3];


  if ((VAR_3 & 0x1F) == 0x00) VAR_4 &= 0xEF;

  FUNC_0 ("r_b slot %d (%.2X) : reg %.2X = %.2X\n", VAR_2, VAR_3, VAR_3 & 0x1F, VAR_4);

  return VAR_4;
}
