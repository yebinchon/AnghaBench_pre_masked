
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int entry; int reserved_req_waitq; int blocked_waitq; int waitq; int fasync; int lock; scalar_t__ blocked; scalar_t__ connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (struct fuse_conn*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct fuse_conn *VAR_3)
{
 FUNC_6(&VAR_3->lock);
 VAR_3->connected = 0;
 VAR_3->blocked = 0;
 FUNC_7(&VAR_3->lock);

 FUNC_2(&VAR_3->fasync, VAR_1, VAR_0);
 FUNC_8(&VAR_3->waitq);
 FUNC_8(&VAR_3->blocked_waitq);
 FUNC_8(&VAR_3->reserved_req_waitq);
 FUNC_4(&VAR_2);
 FUNC_3(&VAR_3->entry);
 FUNC_1(VAR_3);
 FUNC_5(&VAR_2);
 FUNC_0(VAR_3);
}
