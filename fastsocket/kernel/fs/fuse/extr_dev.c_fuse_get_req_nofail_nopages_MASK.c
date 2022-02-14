
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int waiting; } ;
struct fuse_conn {int blocked; int blocked_waitq; int num_waiting; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (int ) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*,struct file*) ;
 int FUNC_4 (int ,int) ;

struct fuse_req *FUNC_5(struct fuse_conn *VAR_0,
          struct file *VAR_1)
{
 struct fuse_req *VAR_2;

 FUNC_0(&VAR_0->num_waiting);
 FUNC_4(VAR_0->blocked_waitq, !VAR_0->blocked);
 VAR_2 = FUNC_2(0);
 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_0, VAR_1);

 FUNC_1(VAR_2);
 VAR_2->waiting = 1;
 return VAR_2;
}
