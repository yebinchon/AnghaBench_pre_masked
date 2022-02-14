
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
typedef enum pool_type { ____Placeholder_pool_type } pool_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum pool_type FUNC_0(int VAR_8, enum ttm_caching_state VAR_9)
{
 enum pool_type VAR_10 = VAR_3;

 if (VAR_8 & VAR_5)
  VAR_10 |= VAR_1;
 if (VAR_9 == VAR_6)
  VAR_10 |= VAR_0;
 else if (VAR_9 == VAR_7)
  VAR_10 |= VAR_2;
 else
  VAR_10 |= VAR_4;

 return VAR_10;
}
