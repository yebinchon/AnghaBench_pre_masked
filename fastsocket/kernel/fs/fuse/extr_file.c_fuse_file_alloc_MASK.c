
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file {scalar_t__ kh; int poll_wait; int polled_node; int count; int write_entry; int reserved_req; struct fuse_conn* fc; } ;
struct fuse_conn {int lock; scalar_t__ khctr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fuse_file*) ;
 struct fuse_file* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

struct fuse_file *FUNC_10(struct fuse_conn *VAR_1)
{
 struct fuse_file *VAR_2;

 VAR_2 = FUNC_6(sizeof(struct fuse_file), VAR_0);
 if (FUNC_9(!VAR_2))
  return ((void*)0);

 VAR_2->fc = VAR_1;
 VAR_2->reserved_req = FUNC_3(0);
 if (FUNC_9(!VAR_2->reserved_req)) {
  FUNC_5(VAR_2);
  return ((void*)0);
 }

 FUNC_0(&VAR_2->write_entry);
 FUNC_2(&VAR_2->count, 0);
 FUNC_1(&VAR_2->polled_node);
 FUNC_4(&VAR_2->poll_wait);

 FUNC_7(&VAR_1->lock);
 VAR_2->kh = ++VAR_1->khctr;
 FUNC_8(&VAR_1->lock);

 return VAR_2;
}
