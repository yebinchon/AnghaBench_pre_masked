
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int ctl; } ;
struct dst_node {struct dst_state* state; } ;
struct dst_network_ctl {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_state*) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 struct dst_state* FUNC_3 (struct dst_node*) ;
 int FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dst_state*) ;
 int FUNC_6 (struct dst_state*) ;
 int FUNC_7 (struct dst_state*) ;
 int FUNC_8 (int *,struct dst_network_ctl*,int) ;

int FUNC_9(struct dst_node *VAR_1, struct dst_network_ctl *VAR_2)
{
 struct dst_state *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto err_out_exit;
 }
 FUNC_8(&VAR_3->ctl, VAR_2, sizeof(struct dst_network_ctl));

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  goto err_out_free_data;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err_out_exit_connected;
 VAR_1->state = VAR_3;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto err_out_exit_connected;

 return 0;

err_out_exit_connected:
 FUNC_4(VAR_3);
err_out_free_data:
 FUNC_5(VAR_3);
err_out_exit:
 VAR_1->state = ((void*)0);
 return VAR_4;
}
