
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opcode; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {int force; TYPE_2__ in; } ;
struct fuse_conn {struct fuse_req* destroy_req; scalar_t__ conn_init; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_1 (struct fuse_conn*,struct fuse_req*) ;

__attribute__((used)) static void FUNC_2(struct fuse_conn *VAR_1)
{
 struct fuse_req *VAR_2 = VAR_1->destroy_req;
 if (VAR_2 && VAR_1->conn_init) {
  VAR_1->destroy_req = ((void*)0);
  VAR_2->in.h.opcode = VAR_0;
  VAR_2->force = 1;
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_2);
 }
}
