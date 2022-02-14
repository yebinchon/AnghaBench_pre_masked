
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ft_sess {TYPE_3__* tport; } ;
struct ft_cmd {int work; struct fc_frame* req_frame; int seq; struct ft_sess* sess; } ;
struct TYPE_4__ {int (* seq_assign ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct TYPE_6__ {TYPE_2__* tpg; struct fc_lport* lport; } ;
struct TYPE_5__ {int workqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_lport*,struct fc_frame*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ft_sess*) ;
 int FUNC_4 (struct ft_cmd*) ;
 struct ft_cmd* FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_9(struct ft_sess *VAR_3, struct fc_frame *VAR_4)
{
 struct ft_cmd *VAR_5;
 struct fc_lport *VAR_6 = VAR_3->tport->lport;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto busy;
 VAR_5->sess = VAR_3;
 VAR_5->seq = VAR_6->tt.seq_assign(VAR_6, VAR_4);
 if (!VAR_5->seq) {
  FUNC_4(VAR_5);
  goto busy;
 }
 VAR_5->req_frame = VAR_4;

 FUNC_0(&VAR_5->work, VAR_2);
 FUNC_7(VAR_3->tport->tpg->workqueue, &VAR_5->work);
 return;

busy:
 FUNC_6("cmd or seq allocation failure - sending BUSY\n");
 FUNC_2(VAR_6, VAR_4, VAR_1, 0);
 FUNC_1(VAR_4);
 FUNC_3(VAR_3);
}
