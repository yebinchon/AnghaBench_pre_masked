
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct bstp_state {int bs_protover; } ;
struct bstp_port {int bp_flags; int bp_path_cost; int bp_infois; int bp_rtagetask; int bp_statetask; int bp_priority; struct bstp_state* bp_bs; struct ifnet* bp_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bstp_state*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,struct bstp_port*) ;
 int VAR_6 ;
 int FUNC_2 (struct bstp_state*) ;
 int FUNC_3 (struct bstp_port*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bstp_port*,int ) ;
 int FUNC_5 (struct bstp_port*,int ) ;
 int FUNC_6 (struct bstp_port*,int ) ;
 int FUNC_7 (struct bstp_port*,int ) ;
 int FUNC_8 (struct bstp_port*,int) ;

int
FUNC_9(struct bstp_state *VAR_9, struct bstp_port *VAR_10, struct ifnet *VAR_11)
{
 FUNC_8(VAR_10, sizeof(struct bstp_port));

 FUNC_0(VAR_9);
 VAR_10->bp_ifp = VAR_11;
 VAR_10->bp_bs = VAR_9;
 VAR_10->bp_priority = VAR_0;
 FUNC_1(&VAR_10->bp_statetask, VAR_8, VAR_10);
 FUNC_1(&VAR_10->bp_rtagetask, VAR_7, VAR_10);


 VAR_10->bp_infois = VAR_2;
 VAR_10->bp_flags = VAR_3|VAR_4;
 FUNC_6(VAR_10, VAR_1);
 FUNC_4(VAR_10, VAR_9->bs_protover);
 FUNC_5(VAR_10, VAR_5);
 FUNC_7(VAR_10, VAR_6);
 VAR_10->bp_path_cost = FUNC_3(VAR_10);
 FUNC_2(VAR_9);
 return (0);
}
