
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ cl_id; int cl_boot; } ;
struct nfs4_client {TYPE_1__ cl_clientid; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nfs4_client *VAR_1)
{
 static u32 VAR_2 = 1;

 VAR_1->cl_clientid.cl_boot = VAR_0;
 VAR_1->cl_clientid.cl_id = VAR_2++;
}
