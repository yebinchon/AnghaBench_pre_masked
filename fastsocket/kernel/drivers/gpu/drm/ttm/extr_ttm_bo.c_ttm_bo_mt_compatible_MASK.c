
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_mem_type_manager {int available_caching; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct ttm_mem_type_manager *VAR_1,
     uint32_t VAR_2,
     uint32_t VAR_3,
     uint32_t *VAR_4)
{
 uint32_t VAR_5 = FUNC_0(VAR_2);

 if ((VAR_5 & VAR_3 & VAR_0) == 0)
  return 0;

 if ((VAR_3 & VAR_1->available_caching) == 0)
  return 0;

 VAR_5 |= (VAR_3 & VAR_1->available_caching);

 *VAR_4 = VAR_5;
 return 1;
}
