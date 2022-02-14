
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_openclose_args {int local_msgqueue_pa; int local_nentries; int remote_nentries; } ;
struct TYPE_3__ {int local_msgqueue; struct xpc_openclose_args* local_openclose_args; } ;
struct TYPE_4__ {TYPE_1__ sn2; } ;
struct xpc_channel {TYPE_2__ sn; int local_nentries; int remote_nentries; } ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_channel*,int ,unsigned long*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct xpc_channel *VAR_1, unsigned long *VAR_2)
{
 struct xpc_openclose_args *VAR_3 = VAR_1->sn.sn2.local_openclose_args;

 VAR_3->remote_nentries = VAR_1->remote_nentries;
 VAR_3->local_nentries = VAR_1->local_nentries;
 VAR_3->local_msgqueue_pa = FUNC_1(VAR_1->sn.sn2.local_msgqueue);
 FUNC_0(VAR_1, VAR_0, VAR_2);
}
