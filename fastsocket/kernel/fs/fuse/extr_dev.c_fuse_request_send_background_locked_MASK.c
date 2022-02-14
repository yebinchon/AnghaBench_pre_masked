
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int isreply; } ;
struct fuse_conn {int dummy; } ;


 int FUNC_0 (struct fuse_conn*,struct fuse_req*) ;

void FUNC_1(struct fuse_conn *VAR_0,
      struct fuse_req *VAR_1)
{
 VAR_1->isreply = 1;
 FUNC_0(VAR_0, VAR_1);
}
