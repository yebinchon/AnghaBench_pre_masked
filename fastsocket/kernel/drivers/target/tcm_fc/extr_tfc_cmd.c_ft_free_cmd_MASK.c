
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ft_cmd {int sess; struct fc_frame* req_frame; } ;
struct TYPE_2__ {int (* seq_release ) (scalar_t__) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;


 int FUNC_0 (struct fc_frame*) ;
 struct fc_lport* FUNC_1 (struct fc_frame*) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ft_cmd*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ft_cmd *VAR_0)
{
 struct fc_frame *VAR_1;
 struct fc_lport *VAR_2;

 if (!VAR_0)
  return;
 VAR_1 = VAR_0->req_frame;
 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_1))
  VAR_2->tt.seq_release(FUNC_2(VAR_1));
 FUNC_0(VAR_1);
 FUNC_3(VAR_0->sess);
 FUNC_4(VAR_0);
}
