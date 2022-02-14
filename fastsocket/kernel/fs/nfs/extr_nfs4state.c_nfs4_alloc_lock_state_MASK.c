
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_server {int lockowner_id; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_lock; } ;
struct nfs4_state {TYPE_1__* owner; } ;
struct TYPE_9__ {int posix_owner; int flock_owner; } ;
struct TYPE_10__ {unsigned int lo_type; TYPE_4__ lo_u; } ;
struct TYPE_8__ {int list; int lock; int wait; } ;
struct TYPE_7__ {TYPE_3__* sequence; } ;
struct nfs4_lock_state {int ls_locks; int ls_id; TYPE_5__ ls_owner; struct nfs4_state* ls_state; int ls_count; TYPE_3__ ls_sequence; TYPE_2__ ls_seqid; } ;
typedef int pid_t ;
typedef int fl_owner_t ;
struct TYPE_6__ {struct nfs_server* so_server; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct nfs4_lock_state*) ;
 struct nfs4_lock_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct nfs4_lock_state *FUNC_9(struct nfs4_state *VAR_1, fl_owner_t VAR_2, pid_t VAR_3, unsigned int VAR_4)
{
 struct nfs4_lock_state *VAR_5;
 struct nfs_server *VAR_6 = VAR_1->owner->so_server;
 struct nfs_client *VAR_7 = VAR_6->nfs_client;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_5(&VAR_5->ls_sequence.wait, "lock_seqid_waitqueue");
 FUNC_7(&VAR_5->ls_sequence.lock);
 FUNC_0(&VAR_5->ls_sequence.list);
 VAR_5->ls_seqid.sequence = &VAR_5->ls_sequence;
 FUNC_1(&VAR_5->ls_count, 1);
 VAR_5->ls_state = VAR_1;
 VAR_5->ls_owner.lo_type = VAR_4;
 switch (VAR_5->ls_owner.lo_type) {
 case 129:
  VAR_5->ls_owner.lo_u.flock_owner = VAR_3;
  break;
 case 128:
  VAR_5->ls_owner.lo_u.posix_owner = VAR_2;
  break;
 default:
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 FUNC_6(&VAR_7->cl_lock);
 FUNC_4(&VAR_6->lockowner_id, &VAR_5->ls_id, 1, 64);
 FUNC_8(&VAR_7->cl_lock);
 FUNC_0(&VAR_5->ls_locks);
 return VAR_5;
}
