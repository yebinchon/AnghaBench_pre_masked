
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct afs_server {int usage; TYPE_1__ addr; int cb_break_work; int cb_break_waitq; int cb_lock; void* cb_promises; void* fs_vnodes; int fs_lock; int sem; int grave; int link; struct afs_cell* cell; } ;
struct afs_cell {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 void* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct afs_server*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct afs_server* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_1__*,struct in_addr const*,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct afs_server *FUNC_11(struct afs_cell *VAR_3,
        const struct in_addr *VAR_4)
{
 struct afs_server *VAR_5;

 FUNC_2("");

 VAR_5 = FUNC_8(sizeof(struct afs_server), VAR_0);
 if (VAR_5) {
  FUNC_5(&VAR_5->usage, 1);
  VAR_5->cell = VAR_3;

  FUNC_1(&VAR_5->link);
  FUNC_1(&VAR_5->grave);
  FUNC_6(&VAR_5->sem);
  FUNC_10(&VAR_5->fs_lock);
  VAR_5->fs_vnodes = VAR_1;
  VAR_5->cb_promises = VAR_1;
  FUNC_10(&VAR_5->cb_lock);
  FUNC_7(&VAR_5->cb_break_waitq);
  FUNC_0(&VAR_5->cb_break_work,
      VAR_2);

  FUNC_9(&VAR_5->addr, VAR_4, sizeof(struct in_addr));
  VAR_5->addr.s_addr = VAR_4->s_addr;
 }

 FUNC_3(" = %p{%d}", VAR_5, FUNC_4(&VAR_5->usage));
 return VAR_5;
}
