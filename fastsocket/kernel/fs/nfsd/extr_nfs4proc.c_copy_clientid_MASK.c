
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cl_id; int cl_boot; } ;
struct nfsd4_sessionid {TYPE_2__ clientid; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct nfsd4_session {TYPE_1__ se_sessionid; } ;
struct TYPE_7__ {int cl_id; int cl_boot; } ;
typedef TYPE_3__ clientid_t ;



__attribute__((used)) static void
FUNC_0(clientid_t *VAR_0, struct nfsd4_session *VAR_1)
{
 struct nfsd4_sessionid *VAR_2 =
   (struct nfsd4_sessionid *)VAR_1->se_sessionid.data;

 VAR_0->cl_boot = VAR_2->clientid.cl_boot;
 VAR_0->cl_id = VAR_2->clientid.cl_id;
}
