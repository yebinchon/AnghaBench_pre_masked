
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_rport_priv {int dummy; } ;
struct TYPE_4__ {int disc_mutex; } ;
struct TYPE_3__ {int (* rport_logoff ) (struct fc_rport_priv*) ;} ;
struct fc_lport {TYPE_2__ disc; TYPE_1__ tt; } ;
struct bnx2fc_rport {int tgt_lock; int flags; struct fc_rport_priv* rdata; } ;
struct bnx2fc_cmd {int wait_for_comp; int refcount; int tm_done; struct bnx2fc_rport* tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2fc_cmd*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnx2fc_cmd*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fc_rport_priv*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct fc_lport *VAR_7, struct bnx2fc_cmd *VAR_8)
{
 struct bnx2fc_rport *VAR_9 = VAR_8->tgt;
 struct fc_rport_priv *VAR_10 = VAR_9->rdata;
 int VAR_11;
 int VAR_12 = VAR_5;
 int VAR_13 = 0;

 FUNC_0(VAR_8, "Expl logo - tgt flags = 0x%lx\n",
        VAR_9->flags);
 VAR_11 = FUNC_10(VAR_0,
           &VAR_9->flags);
 VAR_8->wait_for_comp = 1;
 FUNC_1(VAR_8);

 FUNC_8(&VAR_9->tgt_lock);

 FUNC_12(&VAR_8->tm_done);

 VAR_8->wait_for_comp = 0;




  FUNC_3(&VAR_8->refcount, VAR_6);

 if (!VAR_11) {
  FUNC_2(VAR_1, &VAR_9->flags);
  FUNC_5(&VAR_7->disc.disc_mutex);
  VAR_7->tt.rport_logoff(VAR_10);
  FUNC_6(&VAR_7->disc.disc_mutex);
  do {
   FUNC_4(VAR_3);
   if (VAR_13++ > VAR_2) {
    VAR_12 = VAR_4;
    break;
   }
  } while (!FUNC_11(VAR_1, &VAR_9->flags));
 }
 FUNC_7(&VAR_9->tgt_lock);
 return VAR_12;
}
