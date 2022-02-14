
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_fcp_pkt {int status_code; scalar_t__ io_status; int state; int * seq_ptr; TYPE_2__* lp; } ;
struct TYPE_3__ {int (* exch_done ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ tt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_fcp_pkt*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fc_fcp_pkt *VAR_2)
{
 if (VAR_2->seq_ptr) {
  VAR_2->lp->tt.exch_done(VAR_2->seq_ptr);
  VAR_2->seq_ptr = ((void*)0);
 }

 VAR_2->state &= ~VAR_1;
 VAR_2->io_status = 0;
 VAR_2->status_code = VAR_0;
 FUNC_0(VAR_2);
}
