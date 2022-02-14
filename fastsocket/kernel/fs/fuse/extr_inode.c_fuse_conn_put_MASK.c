
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int (* release ) (struct fuse_conn*) ;int inst_mutex; scalar_t__ destroy_req; int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fuse_conn*) ;

void FUNC_4(struct fuse_conn *VAR_0)
{
 if (FUNC_0(&VAR_0->count)) {
  if (VAR_0->destroy_req)
   FUNC_1(VAR_0->destroy_req);
  FUNC_2(&VAR_0->inst_mutex);
  VAR_0->release(VAR_0);
 }
}
