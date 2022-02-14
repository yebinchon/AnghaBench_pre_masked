
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ l_owner; scalar_t__ l_pid; } ;
struct nfs_lock_context {TYPE_1__ lockowner; } ;



__attribute__((used)) static bool FUNC_0(const struct nfs_lock_context *VAR_0,
  const struct nfs_lock_context *VAR_1)
{
 return VAR_0->lockowner.l_owner == VAR_1->lockowner.l_owner
  && VAR_0->lockowner.l_pid == VAR_1->lockowner.l_pid;
}
