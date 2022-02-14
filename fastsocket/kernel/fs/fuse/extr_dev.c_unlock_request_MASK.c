
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int waitq; scalar_t__ aborted; scalar_t__ locked; } ;
struct fuse_conn {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fuse_conn *VAR_0, struct fuse_req *VAR_1)
{
 if (VAR_1) {
  FUNC_0(&VAR_0->lock);
  VAR_1->locked = 0;
  if (VAR_1->aborted)
   FUNC_2(&VAR_1->waitq);
  FUNC_1(&VAR_0->lock);
 }
}
