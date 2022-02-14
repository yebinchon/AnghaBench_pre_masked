
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl1271 {int rate_policies_map; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct wl1271 *VAR_1, u8 *VAR_2)
{
 if (FUNC_0(*VAR_2 >= VAR_0))
  return;

 FUNC_1(*VAR_2, VAR_1->rate_policies_map);
 *VAR_2 = VAR_0;
}
