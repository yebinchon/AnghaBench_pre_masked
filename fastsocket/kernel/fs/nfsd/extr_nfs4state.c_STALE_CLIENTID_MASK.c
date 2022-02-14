
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cl_boot; int cl_id; } ;
typedef TYPE_1__ clientid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(clientid_t *VAR_1)
{
 if (VAR_1->cl_boot == VAR_0)
  return 0;
 FUNC_0("NFSD stale clientid (%08x/%08x) boot_time %08lx\n",
  VAR_1->cl_boot, VAR_1->cl_id, VAR_0);
 return 1;
}
