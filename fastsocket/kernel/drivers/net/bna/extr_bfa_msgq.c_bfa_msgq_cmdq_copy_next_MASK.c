
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_cmdq {scalar_t__ bytes_to_copy; } ;


 int bfa_msgq_cmdq_copy_rsp (struct bfa_msgq_cmdq*) ;

__attribute__((used)) static void
bfa_msgq_cmdq_copy_next(void *arg)
{
 struct bfa_msgq_cmdq *cmdq = (struct bfa_msgq_cmdq *)arg;

 if (cmdq->bytes_to_copy)
  bfa_msgq_cmdq_copy_rsp(cmdq);
}
