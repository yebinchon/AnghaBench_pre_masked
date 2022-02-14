
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct nfs4_state {int inode; } ;
struct TYPE_3__ {int delegation; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct nfs4_opendata {TYPE_2__ o_arg; } ;
typedef int nfs4_stateid ;


 scalar_t__ FUNC_0 (struct nfs4_opendata*) ;
 int VAR_0 ;
 struct nfs_server* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 int FUNC_3 (struct nfs_server*,struct nfs4_state*,int const*,int) ;
 int FUNC_4 (struct nfs4_opendata*,struct nfs4_state*) ;
 struct nfs4_opendata* FUNC_5 (struct nfs_open_context*,struct nfs4_state*,int ) ;
 int FUNC_6 (struct nfs4_opendata*) ;
 int FUNC_7 (int *,int const*) ;

int FUNC_8(struct nfs_open_context *VAR_1, struct nfs4_state *VAR_2, const nfs4_stateid *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_1(VAR_2->inode);
 struct nfs4_opendata *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_1, VAR_2,
   VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_5);
 FUNC_7(&VAR_5->o_arg.u.delegation, VAR_3);
 VAR_6 = FUNC_4(VAR_5, VAR_2);
 FUNC_6(VAR_5);
 return FUNC_3(VAR_4, VAR_2, VAR_3, VAR_6);
}
