
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct log_c {int region_size; } ;
struct dm_dirty_log {struct log_c* context; } ;



__attribute__((used)) static uint32_t FUNC_0(struct dm_dirty_log *VAR_0)
{
 struct log_c *VAR_1 = VAR_0->context;

 return VAR_1->region_size;
}
