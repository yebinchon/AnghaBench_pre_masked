
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_space_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct btrfs_space_info *VAR_2)
{
 return ((VAR_2->flags & VAR_1) &&
  (VAR_2->flags & VAR_0));
}
