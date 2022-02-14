
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* exch_done ) (int *) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_fcp_pkt {int status_code; int * seq_ptr; struct fc_lport* lp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fc_fcp_pkt *VAR_0, int VAR_1)
{
 struct fc_lport *VAR_2 = VAR_0->lp;

 if (VAR_0->seq_ptr) {
  VAR_2->tt.exch_done(VAR_0->seq_ptr);
  VAR_0->seq_ptr = ((void*)0);
 }
 VAR_0->status_code = VAR_1;
}
