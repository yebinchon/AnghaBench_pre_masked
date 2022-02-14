
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ q_start; scalar_t__ q_end; } ;
struct cfe_buf {scalar_t__ cfe_peek_offset; scalar_t__ cfe_pass_offset; scalar_t__ cfe_peeked; TYPE_1__ cfe_ctl_q; TYPE_1__ cfe_pending_q; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct cfe_buf *VAR_0)
{
 FUNC_0(&VAR_0->cfe_ctl_q);
 FUNC_0(&VAR_0->cfe_pending_q);


 FUNC_1(VAR_0->cfe_ctl_q.q_start >= VAR_0->cfe_pending_q.q_end);


 FUNC_1(VAR_0->cfe_peek_offset >= VAR_0->cfe_pass_offset);


 FUNC_1(VAR_0->cfe_ctl_q.q_start <= VAR_0->cfe_peeked);
}
