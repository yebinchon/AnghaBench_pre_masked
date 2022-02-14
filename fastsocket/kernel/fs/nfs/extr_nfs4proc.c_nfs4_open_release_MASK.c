
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_state {int dummy; } ;
struct TYPE_4__ {int fmode; } ;
struct TYPE_3__ {int rflags; } ;
struct nfs4_opendata {scalar_t__ cancelled; scalar_t__ rpc_status; TYPE_2__ o_arg; TYPE_1__ o_res; int rpc_done; } ;


 int FUNC_0 (struct nfs4_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs4_state*,int ) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 struct nfs4_state* FUNC_3 (struct nfs4_opendata*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct nfs4_opendata *VAR_2 = VAR_1;
 struct nfs4_state *VAR_3 = ((void*)0);


 if (VAR_2->cancelled == 0)
  goto out_free;

 if (VAR_2->rpc_status != 0 || !VAR_2->rpc_done)
  goto out_free;

 if (VAR_2->o_res.rflags & VAR_0)
  goto out_free;
 VAR_3 = FUNC_3(VAR_2);
 if (!FUNC_0(VAR_3))
  FUNC_1(VAR_3, VAR_2->o_arg.fmode);
out_free:
 FUNC_2(VAR_2);
}
