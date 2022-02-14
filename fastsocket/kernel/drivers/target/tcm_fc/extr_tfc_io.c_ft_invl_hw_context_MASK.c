
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ft_cmd {scalar_t__ was_ddp_setup; int write_data_len; struct fc_seq* seq; } ;
struct fc_seq {int dummy; } ;
struct TYPE_2__ {int (* ddp_done ) (struct fc_lport*,scalar_t__) ;} ;
struct fc_lport {scalar_t__ lro_xid; TYPE_1__ tt; } ;
struct fc_exch {scalar_t__ xid; struct fc_lport* lp; } ;


 int FUNC_0 (int) ;
 struct fc_exch* FUNC_1 (struct fc_seq*) ;
 int FUNC_2 (struct fc_lport*,scalar_t__) ;

void FUNC_3(struct ft_cmd *VAR_0)
{
 struct fc_seq *VAR_1;
 struct fc_exch *VAR_2 = ((void*)0);
 struct fc_lport *VAR_3 = ((void*)0);

 FUNC_0(!VAR_0);
 VAR_1 = VAR_0->seq;


 if (VAR_0->was_ddp_setup && VAR_1) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2) {
   VAR_3 = VAR_2->lp;
   if (VAR_3 && (VAR_2->xid <= VAR_3->lro_xid))




    VAR_0->write_data_len = VAR_3->tt.ddp_done(VAR_3,
              VAR_2->xid);







    VAR_0->was_ddp_setup = 0;
  }
 }
}
