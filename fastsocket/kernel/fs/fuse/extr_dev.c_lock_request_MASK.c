
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int locked; scalar_t__ aborted; } ;
struct fuse_conn {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fuse_conn *VAR_1, struct fuse_req *VAR_2)
{
 int VAR_3 = 0;
 if (VAR_2) {
  FUNC_0(&VAR_1->lock);
  if (VAR_2->aborted)
   VAR_3 = -VAR_0;
  else
   VAR_2->locked = 1;
  FUNC_1(&VAR_1->lock);
 }
 return VAR_3;
}
