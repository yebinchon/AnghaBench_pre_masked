
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_netobj {int data; int len; } ;
struct nfs4_secinfo_flavors {int num_flavors; struct nfs4_secinfo_flavor* flavors; } ;
struct TYPE_3__ {int data; int len; } ;
struct TYPE_4__ {int service; TYPE_1__ sec_oid4; } ;
struct nfs4_secinfo_flavor {scalar_t__ flavor; TYPE_2__ gss; } ;
struct gss_api_mech {int dummy; } ;
typedef scalar_t__ rpc_authflavor_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gss_api_mech* FUNC_0 (struct xdr_netobj*) ;
 int FUNC_1 (struct gss_api_mech*) ;
 scalar_t__ FUNC_2 (struct gss_api_mech*,int ) ;

rpc_authflavor_t FUNC_3(struct nfs4_secinfo_flavors *VAR_3)
{
 struct gss_api_mech *VAR_4;
 struct xdr_netobj VAR_5;
 int VAR_6;
 rpc_authflavor_t VAR_7 = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_flavors; VAR_6++) {
  struct nfs4_secinfo_flavor *VAR_8;
  VAR_8 = &VAR_3->flavors[VAR_6];

  if (VAR_8->flavor == VAR_1 || VAR_8->flavor == VAR_2) {
   VAR_7 = VAR_8->flavor;
   break;
  } else if (VAR_8->flavor == VAR_0) {
   VAR_5.len = VAR_8->gss.sec_oid4.len;
   VAR_5.data = VAR_8->gss.sec_oid4.data;
   VAR_4 = FUNC_0(&VAR_5);
   if (!VAR_4)
    continue;
   VAR_7 = FUNC_2(VAR_4, VAR_8->gss.service);
   FUNC_1(VAR_4);
   break;
  }
 }

 return VAR_7;
}
