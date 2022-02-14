
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int lo; int hi; } ;
struct TYPE_5__ {int member_0; } ;
struct event_ring_data {int sb_id; int index_id; int producer; TYPE_4__ base_addr; TYPE_1__ member_0; } ;
struct cmng_struct_per_port {int dummy; } ;
struct bnx2x_func_init_params {int func_flgs; int pf_id; int func_id; int spq_prod; int spq_map; int member_0; } ;
struct TYPE_7__ {scalar_t__ pmf; } ;
struct TYPE_6__ {int line_speed; } ;
struct bnx2x {int flags; int eq_prod; int eq_mapping; int cmng; TYPE_3__ port; TYPE_2__ link_vars; int spq_prod_idx; int spq_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct bnx2x*,scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bnx2x*,int,int ) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_func_init_params*) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct bnx2x*,int *,int ) ;
 int FUNC_13 (struct bnx2x*,struct event_ring_data*,int) ;

__attribute__((used)) static void FUNC_14(struct bnx2x *VAR_11)
{
 struct bnx2x_func_init_params VAR_12 = {0};
 struct event_ring_data VAR_13 = { 0 };
 u16 VAR_14;

 if (!FUNC_3(VAR_11)) {


  FUNC_5(VAR_11, VAR_8 +
      VAR_1*4 +
      (FUNC_4(VAR_11) ?
    FUNC_0(VAR_11) : FUNC_2(VAR_11))*4, 0);

  FUNC_5(VAR_11, VAR_8 +
      VAR_1*4 +
      VAR_0*4 +
      (FUNC_4(VAR_11) ?
    FUNC_0(VAR_11) : FUNC_2(VAR_11))*4, 0);
 }


 VAR_14 = (VAR_5 | VAR_3 | VAR_4);




 VAR_14 |= (VAR_11->flags & VAR_10) ? VAR_6 : 0;

 VAR_12.func_flgs = VAR_14;
 VAR_12.pf_id = FUNC_0(VAR_11);
 VAR_12.func_id = FUNC_0(VAR_11);
 VAR_12.spq_map = VAR_11->spq_mapping;
 VAR_12.spq_prod = VAR_11->spq_prod_idx;

 FUNC_9(VAR_11, &VAR_12);

 FUNC_11(&(VAR_11->cmng), 0, sizeof(struct cmng_struct_per_port));







 VAR_11->link_vars.line_speed = VAR_9;
 FUNC_8(VAR_11, 1, FUNC_10(VAR_11));


 if (VAR_11->port.pmf)
  FUNC_12(VAR_11, &VAR_11->cmng, FUNC_1(VAR_11));


 VAR_13.base_addr.hi = FUNC_6(VAR_11->eq_mapping);
 VAR_13.base_addr.lo = FUNC_7(VAR_11->eq_mapping);
 VAR_13.producer = VAR_11->eq_prod;
 VAR_13.index_id = VAR_7;
 VAR_13.sb_id = VAR_2;
 FUNC_13(VAR_11, &VAR_13, FUNC_0(VAR_11));
}
