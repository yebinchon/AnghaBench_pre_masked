
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct fc_frame_header {scalar_t__ fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {TYPE_2__* lp; int * seq_ptr; int wait_for_comp; } ;
struct TYPE_3__ {int (* exch_done ) (struct fc_seq*) ;} ;
struct TYPE_4__ {TYPE_1__ tt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 scalar_t__ FUNC_1 (struct fc_fcp_pkt*) ;
 int FUNC_2 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (struct fc_seq*) ;

__attribute__((used)) static void FUNC_7(struct fc_seq *VAR_1, struct fc_frame *VAR_2, void *VAR_3)
{
 struct fc_fcp_pkt *VAR_4 = VAR_3;
 struct fc_frame_header *VAR_5;

 if (FUNC_0(VAR_2)) {






  return;
 }

 if (FUNC_1(VAR_4))
  goto out;




 if (!VAR_4->seq_ptr || !VAR_4->wait_for_comp)
  goto out_unlock;

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5->fh_type != VAR_0)
  FUNC_2(VAR_4, VAR_2);
 VAR_4->seq_ptr = ((void*)0);
 VAR_4->lp->tt.exch_done(VAR_1);
out_unlock:
 FUNC_3(VAR_4);
out:
 FUNC_4(VAR_2);
}
