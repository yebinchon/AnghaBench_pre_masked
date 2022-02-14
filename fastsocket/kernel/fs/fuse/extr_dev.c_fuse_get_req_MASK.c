
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int waiting; } ;
struct fuse_conn {int num_waiting; int connected; int blocked; int blocked_waitq; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fuse_req* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fuse_req*) ;
 struct fuse_req* FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

struct fuse_req *FUNC_8(struct fuse_conn *VAR_3, unsigned VAR_4)
{
 struct fuse_req *VAR_5;
 sigset_t VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_2(&VAR_3->num_waiting);
 FUNC_3(&VAR_6);
 VAR_7 = FUNC_7(VAR_3->blocked_waitq, !VAR_3->blocked);
 FUNC_6(&VAR_6);
 VAR_8 = -VAR_0;
 if (VAR_7)
  goto out;

 VAR_8 = -VAR_2;
 if (!VAR_3->connected)
  goto out;

 VAR_5 = FUNC_5(VAR_4);
 VAR_8 = -VAR_1;
 if (!VAR_5)
  goto out;

 FUNC_4(VAR_5);
 VAR_5->waiting = 1;
 return VAR_5;

 out:
 FUNC_1(&VAR_3->num_waiting);
 return FUNC_0(VAR_8);
}
