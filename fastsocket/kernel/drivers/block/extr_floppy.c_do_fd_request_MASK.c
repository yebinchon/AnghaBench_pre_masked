
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_3__ {int cmd_flags; int cmd_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct request_queue * VAR_5)
{
 if (VAR_3 == 0) {
  FUNC_3("VFS: do_fd_request called on non-open device\n");
  return;
 }

 if (VAR_4 == 0) {
  FUNC_3("warning: usage count=0, current_req=%p exiting\n",
         VAR_1);
  FUNC_3("sect=%ld type=%x flags=%x\n",
         (long)FUNC_0(VAR_1), VAR_1->cmd_type,
         VAR_1->cmd_flags);
  return;
 }
 if (FUNC_5(0, &VAR_2)) {


  FUNC_1("do fd request, old request running");
  return;
 }
 FUNC_2(VAR_0, 0);
 FUNC_4();
 FUNC_1("do fd request");
}
