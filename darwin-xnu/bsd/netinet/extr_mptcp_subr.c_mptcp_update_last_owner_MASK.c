
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ last_pid; scalar_t__ last_upid; int last_uuid; } ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct socket *VAR_0, struct socket *VAR_1)
{
 if (VAR_0->last_pid != VAR_1->last_pid ||
     VAR_0->last_upid != VAR_1->last_upid) {
  VAR_0->last_upid = VAR_1->last_upid;
  VAR_0->last_pid = VAR_1->last_pid;
  FUNC_1(VAR_0->last_uuid, VAR_1->last_uuid);
 }
 FUNC_0(VAR_0);
}
