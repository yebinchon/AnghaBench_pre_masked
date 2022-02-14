
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {scalar_t__ rp_state; int rp_mutex; int flags; } ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct fc_rport_priv*,int ) ;
 int FUNC_2 (struct fc_rport_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fc_rport_priv *VAR_3)
{
 FUNC_3(&VAR_3->rp_mutex);

 FUNC_0(VAR_3, "Remove port\n");

 VAR_3->flags &= ~VAR_0;
 if (VAR_3->rp_state == VAR_2) {
  FUNC_0(VAR_3, "Port in Delete state, not removing\n");
  goto out;
 }
 FUNC_2(VAR_3);





 FUNC_1(VAR_3, VAR_1);
out:
 FUNC_4(&VAR_3->rp_mutex);
 return 0;
}
