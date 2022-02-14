
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {scalar_t__ sync_search; } ;
struct dm_dirty_log {scalar_t__ context; } ;



__attribute__((used)) static int FUNC_0(struct dm_dirty_log *VAR_0)
{
 struct log_c *VAR_1 = (struct log_c *) VAR_0->context;
 VAR_1->sync_search = 0;
 return 0;
}
