
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; int gid; int uid; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ in; } ;
struct TYPE_6__ {int pid; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct fuse_req *VAR_1)
{
 VAR_1->in.h.uid = FUNC_1();
 VAR_1->in.h.gid = FUNC_0();
 VAR_1->in.h.pid = VAR_0->pid;
}
