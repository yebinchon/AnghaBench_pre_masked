
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqid; } ;
struct nfs4_unlockdata {int ctx; int lsp; TYPE_1__ arg; } ;


 int FUNC_0 (struct nfs4_unlockdata*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct nfs4_unlockdata *VAR_1 = VAR_0;
 FUNC_2(VAR_1->arg.seqid);
 FUNC_1(VAR_1->lsp);
 FUNC_3(VAR_1->ctx);
 FUNC_0(VAR_1);
}
