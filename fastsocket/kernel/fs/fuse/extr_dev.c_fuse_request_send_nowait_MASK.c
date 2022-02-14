
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ out; } ;
struct fuse_conn {int lock; scalar_t__ connected; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_1 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fuse_conn *VAR_1, struct fuse_req *VAR_2)
{
 FUNC_2(&VAR_1->lock);
 if (VAR_1->connected) {
  FUNC_0(VAR_1, VAR_2);
  FUNC_3(&VAR_1->lock);
 } else {
  VAR_2->out.h.error = -VAR_0;
  FUNC_1(VAR_1, VAR_2);
 }
}
