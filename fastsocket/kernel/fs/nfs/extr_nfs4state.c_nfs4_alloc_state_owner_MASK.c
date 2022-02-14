
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; int lock; int wait; } ;
struct TYPE_3__ {TYPE_2__* sequence; } ;
struct nfs4_state_owner {int so_lru; int so_delegreturn_mutex; int so_reclaim_seqcount; int so_count; TYPE_2__ so_sequence; TYPE_1__ so_seqid; int so_states; int so_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct nfs4_state_owner* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nfs4_state_owner *
FUNC_7(void)
{
 struct nfs4_state_owner *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1),VAR_0);
 if (!VAR_1)
  return ((void*)0);
 FUNC_6(&VAR_1->so_lock);
 FUNC_0(&VAR_1->so_states);
 FUNC_4(&VAR_1->so_sequence.wait, "Seqid_waitqueue");
 VAR_1->so_seqid.sequence = &VAR_1->so_sequence;
 FUNC_6(&VAR_1->so_sequence.lock);
 FUNC_0(&VAR_1->so_sequence.list);
 FUNC_1(&VAR_1->so_count, 1);
 FUNC_5(&VAR_1->so_reclaim_seqcount);
 FUNC_3(&VAR_1->so_delegreturn_mutex);
 FUNC_0(&VAR_1->so_lru);
 return VAR_1;
}
