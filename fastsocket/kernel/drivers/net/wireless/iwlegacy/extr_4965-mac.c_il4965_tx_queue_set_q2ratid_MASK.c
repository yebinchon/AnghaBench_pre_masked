
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct il_priv {int scd_base_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct il_priv*,int) ;
 int FUNC_2 (struct il_priv*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u16 VAR_6;

 VAR_6 = VAR_2 & VAR_0;

 VAR_4 =
     VAR_1->scd_base_addr + FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_1, VAR_4);

 if (VAR_3 & 0x1)
  VAR_5 = (VAR_6 << 16) | (VAR_5 & 0x0000FFFF);
 else
  VAR_5 = VAR_6 | (VAR_5 & 0xFFFF0000);

 FUNC_2(VAR_1, VAR_4, VAR_5);

 return 0;
}
