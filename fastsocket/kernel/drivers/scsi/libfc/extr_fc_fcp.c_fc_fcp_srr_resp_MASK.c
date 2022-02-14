
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct fc_frame_header {scalar_t__ fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {TYPE_2__* lp; int recov_retry; } ;
struct TYPE_3__ {int (* exch_done ) (struct fc_seq*) ;} ;
struct TYPE_4__ {TYPE_1__ tt; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 scalar_t__ FUNC_1 (struct fc_fcp_pkt*) ;
 int FUNC_2 (struct fc_fcp_pkt*,int ) ;
 int FUNC_3 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_4 (struct fc_fcp_pkt*,int ) ;
 int FUNC_5 (struct fc_fcp_pkt*) ;
 int FUNC_6 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_7 (struct fc_frame*) ;
 int FUNC_8 (struct fc_frame*) ;
 int FUNC_9 (struct fc_fcp_pkt*) ;
 int FUNC_10 (struct fc_seq*) ;

__attribute__((used)) static void FUNC_11(struct fc_seq *VAR_2, struct fc_frame *VAR_3, void *VAR_4)
{
 struct fc_fcp_pkt *VAR_5 = VAR_4;
 struct fc_frame_header *VAR_6;

 if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_5, VAR_3);
  return;
 }

 if (FUNC_1(VAR_5))
  goto out;

 VAR_6 = FUNC_7(VAR_3);







 if (VAR_6->fh_type == VAR_1) {
  FUNC_5(VAR_5);
  return;
 }

 switch (FUNC_8(VAR_3)) {
 case 129:
  VAR_5->recov_retry = 0;
  FUNC_4(VAR_5, FUNC_9(VAR_5));
  break;
 case 128:
 default:
  FUNC_2(VAR_5, VAR_0);
  break;
 }
 FUNC_5(VAR_5);
out:
 VAR_5->lp->tt.exch_done(VAR_2);
 FUNC_6(VAR_3);
}
