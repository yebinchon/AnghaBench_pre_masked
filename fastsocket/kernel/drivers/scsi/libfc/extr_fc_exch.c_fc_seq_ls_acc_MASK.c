
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_els_ls_acc {int la_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 struct fc_els_ls_acc* FUNC_2 (struct fc_frame*,int) ;
 struct fc_lport* FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_els_ls_acc*,int ,int) ;
 int FUNC_5 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_6(struct fc_frame *VAR_2)
{
 struct fc_lport *VAR_3;
 struct fc_els_ls_acc *VAR_4;
 struct fc_frame *VAR_5;

 VAR_3 = FUNC_3(VAR_2);
 VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_4));
 if (!VAR_5)
  return;
 VAR_4 = FUNC_2(VAR_5, sizeof(*VAR_4));
 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->la_cmd = VAR_0;
 FUNC_0(VAR_5, VAR_2, VAR_1, 0);
 VAR_3->tt.frame_send(VAR_3, VAR_5);
}
