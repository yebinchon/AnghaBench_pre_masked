
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_op {int dummy; } ;
struct TYPE_2__ {int op_flags; } ;


 TYPE_1__* FUNC_0 (struct nfsd4_op*) ;
 int VAR_0 ;

bool FUNC_1(struct nfsd4_op *VAR_1)
{
 return FUNC_0(VAR_1)->op_flags & VAR_0;
}
