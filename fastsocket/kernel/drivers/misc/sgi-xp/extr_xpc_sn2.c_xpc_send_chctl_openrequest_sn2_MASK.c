
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_openclose_args {int local_nentries; int entry_size; } ;
struct TYPE_3__ {struct xpc_openclose_args* local_openclose_args; } ;
struct TYPE_4__ {TYPE_1__ sn2; } ;
struct xpc_channel {int local_nentries; int entry_size; TYPE_2__ sn; } ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_channel*,int ,unsigned long*) ;

__attribute__((used)) static void
FUNC_1(struct xpc_channel *VAR_1, unsigned long *VAR_2)
{
 struct xpc_openclose_args *VAR_3 = VAR_1->sn.sn2.local_openclose_args;

 VAR_3->entry_size = VAR_1->entry_size;
 VAR_3->local_nentries = VAR_1->local_nentries;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}
