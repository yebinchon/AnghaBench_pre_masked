
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct timer_list {int dummy; } ;
struct nodepda_s {TYPE_3__* bte_if; struct timer_list bte_recovery_timer; } ;
typedef int nasid_t ;
struct TYPE_13__ {int i_b0_esd; int i_b1_esd; } ;
struct TYPE_17__ {void* ii_imem_regval; TYPE_2__ ii_imem_fld_s; } ;
typedef TYPE_6__ ii_imem_u_t ;
struct TYPE_15__ {int i_e_bte_0; int i_e_bte_1; } ;
struct TYPE_18__ {void* ii_ieclr_regval; TYPE_4__ ii_ieclr_fld_s; } ;
typedef TYPE_7__ ii_ieclr_u_t ;
struct TYPE_19__ {scalar_t__ d_bteop; void* ii_icrb0_d_regval; } ;
typedef TYPE_8__ ii_icrb0_d_u_t ;
struct TYPE_12__ {scalar_t__ i_crb_mark; int i_crb_vld; } ;
struct TYPE_20__ {TYPE_1__ ii_icmr_fld_s; void* ii_icmr_regval; } ;
typedef TYPE_9__ ii_icmr_u_t ;
struct TYPE_16__ {int i_soft_reset; } ;
struct TYPE_11__ {void* ii_ibcr_regval; TYPE_5__ ii_ibcr_fld_s; } ;
typedef TYPE_10__ ii_ibcr_u_t ;
struct TYPE_14__ {scalar_t__ bh_error; int bte_cnode; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct timer_list*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct timer_list*,scalar_t__) ;
 int FUNC_7 () ;

int FUNC_8(unsigned long VAR_8)
{
 struct nodepda_s *VAR_9 = (struct nodepda_s *)VAR_8;
 struct timer_list *VAR_10 = &VAR_9->bte_recovery_timer;
 nasid_t VAR_11;
 int VAR_12;
 int VAR_13;
 ii_imem_u_t VAR_14;
 ii_icrb0_d_u_t VAR_15;
 ii_ibcr_u_t VAR_16;
 ii_icmr_u_t VAR_17;
 ii_ieclr_u_t VAR_18;

 FUNC_0(("shub1_bte_error_handler(%p) - %d\n", VAR_9,
      FUNC_7()));

 if ((VAR_9->bte_if[0].bh_error == VAR_0) &&
     (VAR_9->bte_if[1].bh_error == VAR_0)) {
  FUNC_0(("eh:%p:%d Nothing to do.\n", VAR_9,
       FUNC_7()));
  return 1;
 }


 VAR_11 = FUNC_4(VAR_9->bte_if[0].bte_cnode);
 VAR_17.ii_icmr_regval = FUNC_2(VAR_11, VAR_3);
 if (VAR_17.ii_icmr_fld_s.i_crb_mark != 0) {




  FUNC_6(VAR_10, VAR_7 + (VAR_1 * 5));
  FUNC_0(("eh:%p:%d Marked Giving up\n", VAR_9,
       FUNC_7()));
  return 1;
 }
 if (VAR_17.ii_icmr_fld_s.i_crb_vld != 0) {

  VAR_13 = VAR_17.ii_icmr_fld_s.i_crb_vld;

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   if (!((1 << VAR_12) & VAR_13)) {

    continue;
   }
   VAR_15.ii_icrb0_d_regval =
       FUNC_2(VAR_11, FUNC_1(VAR_12));
   if (VAR_15.d_bteop) {
    FUNC_6(VAR_10, VAR_7 + (VAR_1 * 5));
    FUNC_0(("eh:%p:%d Valid %d, Giving up\n",
         VAR_9, FUNC_7(),
         VAR_12));
    return 1;
   }
  }
 }

 FUNC_0(("eh:%p:%d Cleaning up\n", VAR_9, FUNC_7()));

 VAR_14.ii_imem_regval = FUNC_2(VAR_11, VAR_5);
 VAR_14.ii_imem_fld_s.i_b0_esd = VAR_14.ii_imem_fld_s.i_b1_esd = 1;
 FUNC_3(VAR_11, VAR_5, VAR_14.ii_imem_regval);


 VAR_18.ii_ieclr_regval = 0;
 if (VAR_9->bte_if[0].bh_error != VAR_0)
  VAR_18.ii_ieclr_fld_s.i_e_bte_0 = 1;
 if (VAR_9->bte_if[1].bh_error != VAR_0)
  VAR_18.ii_ieclr_fld_s.i_e_bte_1 = 1;
 FUNC_3(VAR_11, VAR_4, VAR_18.ii_ieclr_regval);


 VAR_16.ii_ibcr_regval = FUNC_2(VAR_11, VAR_2);
 VAR_16.ii_ibcr_fld_s.i_soft_reset = 1;
 FUNC_3(VAR_11, VAR_2, VAR_16.ii_ibcr_regval);

 FUNC_5(VAR_10);
 return 0;
}
