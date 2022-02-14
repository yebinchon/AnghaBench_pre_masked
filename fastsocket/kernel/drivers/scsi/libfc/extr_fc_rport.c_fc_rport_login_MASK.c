
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {int rp_state; int rp_mutex; int flags; } ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 int VAR_0 ;


 int FUNC_1 (struct fc_rport_priv*) ;
 int FUNC_2 (struct fc_rport_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fc_rport_priv *VAR_1)
{
 FUNC_3(&VAR_1->rp_mutex);

 VAR_1->flags |= VAR_0;
 switch (VAR_1->rp_state) {
 case 128:
  FUNC_0(VAR_1, "ADISC port\n");
  FUNC_1(VAR_1);
  break;
 case 129:
  FUNC_0(VAR_1, "Restart deleted port\n");
  break;
 default:
  FUNC_0(VAR_1, "Login to port\n");
  FUNC_2(VAR_1);
  break;
 }
 FUNC_4(&VAR_1->rp_mutex);

 return 0;
}
