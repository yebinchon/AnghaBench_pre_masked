
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_priv {scalar_t__ band; scalar_t__ bt_traffic_load; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

u8 FUNC_1(struct iwl_priv *VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7 = VAR_4;

 if (VAR_3->band == VAR_0 &&
     VAR_3->bt_traffic_load >= VAR_1)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2 - 1; VAR_6++) {
  VAR_7 = (VAR_7 + 1) < VAR_2 ? VAR_7 + 1 : 0;
  if (VAR_5 & FUNC_0(VAR_7))
   return VAR_7;
 }
 return VAR_4;
}
