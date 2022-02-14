
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_open_context {int dummy; } ;
struct nfs_delegation {int type; int flags; } ;
struct nfs4_state {int inode; } ;
struct TYPE_4__ {int delegation_type; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct nfs4_opendata {TYPE_2__ o_arg; } ;
typedef int fmode_t ;
struct TYPE_6__ {int delegation; } ;


 scalar_t__ FUNC_0 (struct nfs4_opendata*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 int FUNC_3 (struct nfs4_opendata*,struct nfs4_state*) ;
 struct nfs4_opendata* FUNC_4 (struct nfs_open_context*,struct nfs4_state*,int ) ;
 int FUNC_5 (struct nfs4_opendata*) ;
 struct nfs_delegation* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct nfs_open_context *VAR_2, struct nfs4_state *VAR_3)
{
 struct nfs_delegation *VAR_4;
 struct nfs4_opendata *VAR_5;
 fmode_t VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_2, VAR_3,
   VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_5);
 FUNC_7();
 VAR_4 = FUNC_6(FUNC_1(VAR_3->inode)->delegation);
 if (VAR_4 != ((void*)0) && FUNC_9(VAR_1, &VAR_4->flags) != 0)
  VAR_6 = VAR_4->type;
 FUNC_8();
 VAR_5->o_arg.u.delegation_type = VAR_6;
 VAR_7 = FUNC_3(VAR_5, VAR_3);
 FUNC_5(VAR_5);
 return VAR_7;
}
