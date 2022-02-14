
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_frame_header {int fh_r_ctl; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int tm_done; scalar_t__ wait_for_comp; int state; } ;
struct fc_ba_rjt {int br_reason; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_fcp_pkt*) ;
 struct fc_frame_header* FUNC_2 (struct fc_frame*) ;
 struct fc_ba_rjt* FUNC_3 (struct fc_frame*,int) ;

__attribute__((used)) static void FUNC_4(struct fc_fcp_pkt *VAR_3, struct fc_frame *VAR_4)
{
 int VAR_5 = 1;
 struct fc_ba_rjt *VAR_6;
 struct fc_frame_header *VAR_7;

 VAR_7 = FUNC_2(VAR_4);
 switch (VAR_7->fh_r_ctl) {
 case 129:
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_6));
  if (VAR_6 && VAR_6->br_reason == VAR_0)
   break;

 default:





  VAR_5 = 0;
 }

 if (VAR_5) {
  VAR_3->state |= VAR_1;
  VAR_3->state &= ~VAR_2;

  if (VAR_3->wait_for_comp)
   FUNC_0(&VAR_3->tm_done);
  else
   FUNC_1(VAR_3);
 }
}
