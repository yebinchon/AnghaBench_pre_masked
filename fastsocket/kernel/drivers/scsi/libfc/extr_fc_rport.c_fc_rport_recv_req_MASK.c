
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq_els_data {int explan; int reason; } ;
struct TYPE_2__ {int (* seq_els_rsp_send ) (struct fc_frame*,int ,struct fc_seq_els_data*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;



 int VAR_0 ;


 int VAR_1 ;




 int VAR_2 ;


 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_3 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_4 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_5 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_6 (struct fc_frame*,int ,struct fc_seq_els_data*) ;

__attribute__((used)) static void FUNC_7(struct fc_lport *VAR_3, struct fc_frame *VAR_4)
{
 struct fc_seq_els_data VAR_5;







 switch (FUNC_1(VAR_4)) {
 case 135:
  FUNC_3(VAR_3, VAR_4);
  break;
 case 133:
  FUNC_5(VAR_3, VAR_4);
  break;
 case 134:
  FUNC_4(VAR_3, VAR_4);
  break;
 case 132:
 case 131:
 case 136:
 case 128:
 case 130:
 case 129:
  FUNC_2(VAR_3, VAR_4);
  break;
 default:
  VAR_5.reason = VAR_2;
  VAR_5.explan = VAR_0;
  VAR_3->tt.seq_els_rsp_send(VAR_4, VAR_1, &VAR_5);
  FUNC_0(VAR_4);
  break;
 }
}
