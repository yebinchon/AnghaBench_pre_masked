
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_state {int dummy; } ;
struct TYPE_2__ {int fmode; } ;
struct nfs4_opendata {scalar_t__ cancelled; TYPE_1__ o_arg; int rpc_done; } ;


 int FUNC_0 (struct nfs4_state*) ;
 int FUNC_1 (struct nfs4_state*,int ) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 struct nfs4_state* FUNC_3 (struct nfs4_opendata*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct nfs4_opendata *VAR_1 = VAR_0;
 struct nfs4_state *VAR_2 = ((void*)0);


 if (VAR_1->cancelled == 0)
  goto out_free;

 if (!VAR_1->rpc_done)
  goto out_free;
 VAR_2 = FUNC_3(VAR_1);
 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_2, VAR_1->o_arg.fmode);
out_free:
 FUNC_2(VAR_1);
}
