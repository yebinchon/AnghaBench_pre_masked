
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int status_code; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_fcp_pkt*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_5(struct fc_fcp_pkt *VAR_3, struct fc_frame *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_3))
  return;

 if (VAR_5 == -VAR_1) {
  FUNC_3(VAR_3);
  goto unlock;
 }





 VAR_3->state &= ~VAR_2;
 VAR_3->status_code = VAR_0;
 FUNC_1(VAR_3);
unlock:
 FUNC_4(VAR_3);
}
