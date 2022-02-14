
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device_info {scalar_t__ max_avail; scalar_t__ total_avail; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct btrfs_device_info *VAR_2 = VAR_0;
 const struct btrfs_device_info *VAR_3 = VAR_1;

 if (VAR_2->max_avail > VAR_3->max_avail)
  return -1;
 if (VAR_2->max_avail < VAR_3->max_avail)
  return 1;
 if (VAR_2->total_avail > VAR_3->total_avail)
  return -1;
 if (VAR_2->total_avail < VAR_3->total_avail)
  return 1;
 return 0;
}
