
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_sequence {int wait; int lock; } ;
struct nfs_seqid {int list; TYPE_1__* sequence; } ;
struct TYPE_2__ {struct rpc_sequence* sequence; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nfs_seqid *VAR_0)
{
 if (!FUNC_1(&VAR_0->list)) {
  struct rpc_sequence *VAR_1 = VAR_0->sequence->sequence;

  FUNC_3(&VAR_1->lock);
  FUNC_0(&VAR_0->list);
  FUNC_4(&VAR_1->lock);
  FUNC_2(&VAR_1->wait);
 }
}
