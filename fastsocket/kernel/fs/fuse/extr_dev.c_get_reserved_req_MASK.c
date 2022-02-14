
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {struct file* stolen_file; } ;
struct fuse_file {struct fuse_req* reserved_req; } ;
struct fuse_conn {int lock; int reserved_req_waitq; } ;
struct file {struct fuse_file* private_data; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct fuse_req*) ;

__attribute__((used)) static struct fuse_req *FUNC_4(struct fuse_conn *VAR_0,
      struct file *VAR_1)
{
 struct fuse_req *VAR_2 = ((void*)0);
 struct fuse_file *VAR_3 = VAR_1->private_data;

 do {
  FUNC_3(VAR_0->reserved_req_waitq, VAR_3->reserved_req);
  FUNC_1(&VAR_0->lock);
  if (VAR_3->reserved_req) {
   VAR_2 = VAR_3->reserved_req;
   VAR_3->reserved_req = ((void*)0);
   FUNC_0(VAR_1);
   VAR_2->stolen_file = VAR_1;
  }
  FUNC_2(&VAR_0->lock);
 } while (!VAR_2);

 return VAR_2;
}
