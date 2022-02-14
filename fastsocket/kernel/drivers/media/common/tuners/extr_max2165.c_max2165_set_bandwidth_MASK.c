
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct max2165_priv {int bb_filter_8mhz_cfg; int bb_filter_7mhz_cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max2165_priv*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct max2165_priv *VAR_2, u32 VAR_3)
{
 u8 VAR_4;

 if (VAR_3 == VAR_0)
  VAR_4 = VAR_2->bb_filter_8mhz_cfg;
 else
  VAR_4 = VAR_2->bb_filter_7mhz_cfg;

 FUNC_0(VAR_2, VAR_1, 0xF0, VAR_4 << 4);

 return 0;
}
