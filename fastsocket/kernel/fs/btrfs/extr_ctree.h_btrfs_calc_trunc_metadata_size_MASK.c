
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int leafsize; int nodesize; } ;


 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(struct btrfs_root *VAR_1,
       unsigned VAR_2)
{
 return (VAR_1->leafsize + VAR_1->nodesize * (VAR_0 - 1)) *
  VAR_2;
}
