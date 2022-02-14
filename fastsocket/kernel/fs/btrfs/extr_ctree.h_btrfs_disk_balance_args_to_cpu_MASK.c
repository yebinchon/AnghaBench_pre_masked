
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_disk_balance_args {int flags; int target; int vend; int vstart; int pend; int pstart; int devid; int usage; int profiles; } ;
struct btrfs_balance_args {void* flags; void* target; void* vend; void* vstart; void* pend; void* pstart; void* devid; void* usage; void* profiles; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_balance_args*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct btrfs_balance_args *VAR_0,
          struct btrfs_disk_balance_args *VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->profiles = FUNC_0(VAR_1->profiles);
 VAR_0->usage = FUNC_0(VAR_1->usage);
 VAR_0->devid = FUNC_0(VAR_1->devid);
 VAR_0->pstart = FUNC_0(VAR_1->pstart);
 VAR_0->pend = FUNC_0(VAR_1->pend);
 VAR_0->vstart = FUNC_0(VAR_1->vstart);
 VAR_0->vend = FUNC_0(VAR_1->vend);
 VAR_0->target = FUNC_0(VAR_1->target);
 VAR_0->flags = FUNC_0(VAR_1->flags);
}
