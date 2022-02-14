
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {int rp_state; int flags; int retries; } ;
struct fc_frame {int dummy; } ;


 int FUNC_0 (struct fc_rport_priv*,char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int VAR_1 ;
 int FUNC_3 (struct fc_rport_priv*,int ) ;
 int FUNC_4 (struct fc_rport_priv*) ;
 int FUNC_5 (struct fc_rport_priv*) ;
 int FUNC_6 (struct fc_rport_priv*) ;

__attribute__((used)) static void FUNC_7(struct fc_rport_priv *VAR_2, struct fc_frame *VAR_3)
{
 FUNC_0(VAR_2, "Error %ld in state %s, retries %d\n",
       FUNC_1(VAR_3) ? -FUNC_2(VAR_3) : 0,
       FUNC_6(VAR_2), VAR_2->retries);

 switch (VAR_2->rp_state) {
 case 134:
 case 132:
  VAR_2->flags &= ~VAR_0;
  FUNC_3(VAR_2, VAR_1);
  break;
 case 128:
  FUNC_5(VAR_2);
  break;
 case 130:
 case 136:
  FUNC_4(VAR_2);
  break;
 case 131:
 case 135:
 case 129:
 case 133:
  break;
 }
}
