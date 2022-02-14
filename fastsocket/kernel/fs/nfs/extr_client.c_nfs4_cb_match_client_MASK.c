
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sockaddr {int dummy; } ;
struct nfs_client {scalar_t__ cl_cons_state; scalar_t__ cl_minorversion; TYPE_1__* rpc_ops; int cl_addr; } ;
struct TYPE_2__ {int version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr const*,struct sockaddr*) ;

bool
FUNC_1(const struct sockaddr *VAR_2, struct nfs_client *VAR_3,
       u32 VAR_4)
{
 struct sockaddr *VAR_5 = (struct sockaddr *)&VAR_3->cl_addr;


 if (!(VAR_3->cl_cons_state == VAR_0 ||
     VAR_3->cl_cons_state == VAR_1))
  return 0;


 if (VAR_3->rpc_ops->version != 4 ||
     VAR_3->cl_minorversion != VAR_4)
  return 0;


 if (!FUNC_0(VAR_2, VAR_5))
  return 0;

 return 1;
}
