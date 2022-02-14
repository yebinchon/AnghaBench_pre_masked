
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl1271 {int rate_policies_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_2, u8 *VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_2->rate_policies_map,
     VAR_1);
 if (VAR_4 >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_2->rate_policies_map);
 *VAR_3 = VAR_4;
 return 0;
}
