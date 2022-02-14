
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_ordered_extent {scalar_t__ file_offset; scalar_t__ len; } ;



__attribute__((used)) static u64 FUNC_0(struct btrfs_ordered_extent *VAR_0)
{
 if (VAR_0->file_offset + VAR_0->len < VAR_0->file_offset)
  return (u64)-1;
 return VAR_0->file_offset + VAR_0->len;
}
