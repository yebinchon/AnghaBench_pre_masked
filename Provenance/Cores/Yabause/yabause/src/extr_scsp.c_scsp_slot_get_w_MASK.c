
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static u16 FUNC_2(u32 VAR_2, u32 VAR_3)
{



  u16 VAR_4 = *(u16 *)&VAR_1[VAR_3 ^ 2];

  if ((VAR_3 & 0x1E) == 0x00) return VAR_4 &= 0xEFFF;

  FUNC_0 ("r_w slot %d (%.2X) : reg %.2X = %.4X\n", VAR_2, VAR_3, VAR_3 & 0x1E, VAR_4);

  return VAR_4;
}
