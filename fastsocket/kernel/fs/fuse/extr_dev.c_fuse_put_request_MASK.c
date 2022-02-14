
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {scalar_t__ stolen_file; scalar_t__ waiting; int count; } ;
struct fuse_conn {int num_waiting; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct fuse_req*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;

void FUNC_4(struct fuse_conn *VAR_0, struct fuse_req *VAR_1)
{
 if (FUNC_1(&VAR_1->count)) {
  if (VAR_1->waiting)
   FUNC_0(&VAR_0->num_waiting);

  if (VAR_1->stolen_file)
   FUNC_3(VAR_0, VAR_1);
  else
   FUNC_2(VAR_1);
 }
}
