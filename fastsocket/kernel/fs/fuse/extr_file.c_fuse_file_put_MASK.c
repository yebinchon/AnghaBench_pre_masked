
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int end; } ;
struct fuse_file {int fc; struct fuse_req* reserved_req; int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct fuse_req*) ;
 int FUNC_2 (struct fuse_file*) ;

__attribute__((used)) static void FUNC_3(struct fuse_file *VAR_1)
{
 if (FUNC_0(&VAR_1->count)) {
  struct fuse_req *VAR_2 = VAR_1->reserved_req;

  VAR_2->end = VAR_0;
  FUNC_1(VAR_1->fc, VAR_2);
  FUNC_2(VAR_1);
 }
}
