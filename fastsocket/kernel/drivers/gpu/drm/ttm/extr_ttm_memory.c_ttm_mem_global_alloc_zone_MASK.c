
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_zone {int dummy; } ;
struct ttm_mem_global {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ttm_mem_global*,struct ttm_mem_zone*,int,int) ;
 int FUNC_1 (struct ttm_mem_global*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ttm_mem_global *VAR_2,
         struct ttm_mem_zone *VAR_3,
         uint64_t VAR_4,
         bool VAR_5, bool VAR_6)
{
 int VAR_7 = VAR_1;

 while (FUNC_2(FUNC_0(VAR_2,
            VAR_3,
            VAR_4, 1)
   != 0)) {
  if (VAR_5)
   return -VAR_0;
  if (FUNC_2(VAR_7-- == 0))
   return -VAR_0;
  FUNC_1(VAR_2, 0, VAR_4 + (VAR_4 >> 2) + 16);
 }

 return 0;
}
