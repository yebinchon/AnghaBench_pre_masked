
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btrfs_root {int nodesize; int leafsize; } ;



__attribute__((used)) static inline u32 FUNC_0(struct btrfs_root *VAR_0, int VAR_1)
{
 if (VAR_1 == 0)
  return VAR_0->leafsize;
 return VAR_0->nodesize;
}
