
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int blocked; int attr_version; int scramble_key; scalar_t__ reqctr; int polled_files; scalar_t__ khctr; int congestion_threshold; int max_background; int num_waiting; int entry; int bg_queue; int interrupts; int io; int processing; int pending; int reserved_req_waitq; int blocked_waitq; int waitq; int count; int killsb; int inst_mutex; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fuse_conn*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct fuse_conn *VAR_3)
{
 FUNC_5(VAR_3, 0, sizeof(*VAR_3));
 FUNC_7(&VAR_3->lock);
 FUNC_6(&VAR_3->inst_mutex);
 FUNC_3(&VAR_3->killsb);
 FUNC_1(&VAR_3->count, 1);
 FUNC_4(&VAR_3->waitq);
 FUNC_4(&VAR_3->blocked_waitq);
 FUNC_4(&VAR_3->reserved_req_waitq);
 FUNC_0(&VAR_3->pending);
 FUNC_0(&VAR_3->processing);
 FUNC_0(&VAR_3->io);
 FUNC_0(&VAR_3->interrupts);
 FUNC_0(&VAR_3->bg_queue);
 FUNC_0(&VAR_3->entry);
 FUNC_1(&VAR_3->num_waiting, 0);
 VAR_3->max_background = VAR_1;
 VAR_3->congestion_threshold = VAR_0;
 VAR_3->khctr = 0;
 VAR_3->polled_files = VAR_2;
 VAR_3->reqctr = 0;
 VAR_3->blocked = 1;
 VAR_3->attr_version = 1;
 FUNC_2(&VAR_3->scramble_key, sizeof(VAR_3->scramble_key));
}
