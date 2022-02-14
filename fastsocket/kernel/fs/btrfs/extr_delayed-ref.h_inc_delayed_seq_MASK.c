
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_delayed_ref_root {int seq; int lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u64 FUNC_1(struct btrfs_delayed_ref_root *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 ++VAR_0->seq;
 return VAR_0->seq;
}
