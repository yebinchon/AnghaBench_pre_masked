
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int sync_count; } ;
struct dm_dirty_log {scalar_t__ context; } ;
typedef int region_t ;



__attribute__((used)) static region_t FUNC_0(struct dm_dirty_log *VAR_0)
{
        struct log_c *VAR_1 = (struct log_c *) VAR_0->context;

        return VAR_1->sync_count;
}
