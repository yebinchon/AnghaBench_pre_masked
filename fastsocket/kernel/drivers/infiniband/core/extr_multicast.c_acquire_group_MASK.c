
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct mcast_port {int lock; int refcount; } ;
struct TYPE_2__ {union ib_gid mgid; } ;
struct mcast_group {int retries; int refcount; int lock; int work; int active_list; int pending_list; int pkey_index; TYPE_1__ rec; struct mcast_port* port; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mcast_group*) ;
 struct mcast_group* FUNC_4 (int,int ) ;
 struct mcast_group* FUNC_5 (struct mcast_port*,union ib_gid*) ;
 struct mcast_group* FUNC_6 (struct mcast_port*,struct mcast_group*,int) ;
 int VAR_1 ;
 int FUNC_7 (int *,union ib_gid*,int) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static struct mcast_group *FUNC_11(struct mcast_port *VAR_3,
      union ib_gid *VAR_4, gfp_t VAR_5)
{
 struct mcast_group *VAR_6, *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = !FUNC_7(&VAR_2, VAR_4, sizeof VAR_2);
 if (!VAR_9) {
  FUNC_9(&VAR_3->lock, VAR_8);
  VAR_6 = FUNC_5(VAR_3, VAR_4);
  if (VAR_6)
   goto found;
  FUNC_10(&VAR_3->lock, VAR_8);
 }

 VAR_6 = FUNC_4(sizeof *VAR_6, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->retries = 3;
 VAR_6->port = VAR_3;
 VAR_6->rec.mgid = *VAR_4;
 VAR_6->pkey_index = VAR_0;
 FUNC_0(&VAR_6->pending_list);
 FUNC_0(&VAR_6->active_list);
 FUNC_1(&VAR_6->work, VAR_1);
 FUNC_8(&VAR_6->lock);

 FUNC_9(&VAR_3->lock, VAR_8);
 VAR_7 = FUNC_6(VAR_3, VAR_6, VAR_9);
 if (VAR_7) {
  FUNC_3(VAR_6);
  VAR_6 = VAR_7;
 } else
  FUNC_2(&VAR_3->refcount);
found:
 FUNC_2(&VAR_6->refcount);
 FUNC_10(&VAR_3->lock, VAR_8);
 return VAR_6;
}
