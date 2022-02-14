
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ttm_tt*,int) ;

int FUNC_1(struct ttm_tt *VAR_5, uint32_t VAR_6)
{
 enum ttm_caching_state VAR_7;

 if (VAR_6 & VAR_1)
  VAR_7 = VAR_4;
 else if (VAR_6 & VAR_0)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_2;

 return FUNC_0(VAR_5, VAR_7);
}
