
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_priv {scalar_t__ retries; int retry_work; TYPE_1__* local_port; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_rport_retry_count; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ,int ) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_3 (struct fc_rport_priv*) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct fc_rport_priv *VAR_3,
     struct fc_frame *VAR_4)
{
 unsigned long VAR_5 = VAR_0;


 if (FUNC_1(VAR_4) == -VAR_1)
  goto out;

 if (VAR_3->retries < VAR_3->local_port->max_rport_retry_count) {
  FUNC_0(VAR_3, "Error %ld in state %s, retrying\n",
        FUNC_1(VAR_4), FUNC_3(VAR_3));
  VAR_3->retries++;

  if (FUNC_1(VAR_4) == -VAR_2)
   VAR_5 = 0;
  FUNC_4(&VAR_3->retry_work, VAR_5);
  return;
 }

out:
 FUNC_2(VAR_3, VAR_4);
}
