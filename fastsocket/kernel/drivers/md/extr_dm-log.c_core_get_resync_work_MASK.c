
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {scalar_t__ sync_search; scalar_t__ region_count; int recovering_bits; scalar_t__ sync_bits; } ;
struct dm_dirty_log {scalar_t__ context; } ;
typedef scalar_t__ region_t ;


 scalar_t__ FUNC_0 (unsigned long*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct log_c*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dm_dirty_log *VAR_0, region_t *VAR_1)
{
 struct log_c *VAR_2 = (struct log_c *) VAR_0->context;

 if (VAR_2->sync_search >= VAR_2->region_count)
  return 0;

 do {
  *VAR_1 = FUNC_0(
          (unsigned long *) VAR_2->sync_bits,
          VAR_2->region_count,
          VAR_2->sync_search);
  VAR_2->sync_search = *VAR_1 + 1;

  if (*VAR_1 >= VAR_2->region_count)
   return 0;

 } while (FUNC_2(VAR_2->recovering_bits, *VAR_1));

 FUNC_1(VAR_2, VAR_2->recovering_bits, *VAR_1);
 return 1;
}
