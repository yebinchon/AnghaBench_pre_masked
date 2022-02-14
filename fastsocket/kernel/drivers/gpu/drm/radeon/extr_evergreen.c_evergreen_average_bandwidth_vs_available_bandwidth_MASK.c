
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evergreen_wm_params {int num_heads; } ;


 int FUNC_0 (struct evergreen_wm_params*) ;
 int FUNC_1 (struct evergreen_wm_params*) ;

__attribute__((used)) static bool FUNC_2(struct evergreen_wm_params *VAR_0)
{
 if (FUNC_1(VAR_0) <=
     (FUNC_0(VAR_0) / VAR_0->num_heads))
  return 1;
 else
  return 0;
}
