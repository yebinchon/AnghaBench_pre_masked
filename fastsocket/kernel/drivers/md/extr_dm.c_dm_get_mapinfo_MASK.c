
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union map_info {int dummy; } map_info ;
struct dm_target_io {union map_info info; } ;
struct bio {scalar_t__ bi_private; } ;



union map_info *FUNC_0(struct bio *VAR_0)
{
 if (VAR_0 && VAR_0->bi_private)
  return &((struct dm_target_io *)VAR_0->bi_private)->info;
 return ((void*)0);
}
