
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union map_info {int dummy; } map_info ;
struct request {scalar_t__ end_io_data; } ;
struct dm_rq_target_io {union map_info info; } ;



union map_info *FUNC_0(struct request *VAR_0)
{
 if (VAR_0 && VAR_0->end_io_data)
  return &((struct dm_rq_target_io *)VAR_0->end_io_data)->info;
 return ((void*)0);
}
