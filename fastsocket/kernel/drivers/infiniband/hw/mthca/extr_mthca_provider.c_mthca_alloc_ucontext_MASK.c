
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ib_ucontext {int dummy; } ;
struct mthca_ucontext {struct ib_ucontext ibucontext; scalar_t__ reg_mr_warned; int uar; int db_tab; } ;
struct mthca_alloc_ucontext_resp {scalar_t__ uarc_size; int qp_tab_size; } ;
struct ib_udata {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ uarc_size; } ;
struct TYPE_9__ {int num_qps; } ;
struct TYPE_11__ {TYPE_2__ uar_table; TYPE_1__ limits; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_ucontext* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ib_udata*,struct mthca_alloc_ucontext_resp*,int) ;
 int FUNC_4 (struct mthca_ucontext*) ;
 struct mthca_ucontext* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mthca_alloc_ucontext_resp*,int ,int) ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_12 (struct ib_device*) ;

__attribute__((used)) static struct ib_ucontext *FUNC_13(struct ib_device *VAR_4,
      struct ib_udata *VAR_5)
{
 struct mthca_alloc_ucontext_resp VAR_6;
 struct mthca_ucontext *VAR_7;
 int VAR_8;

 if (!(FUNC_12(VAR_4)->active))
  return FUNC_0(-VAR_0);

 FUNC_6(&VAR_6, 0, sizeof VAR_6);

 VAR_6.qp_tab_size = FUNC_12(VAR_4)->limits.num_qps;
 if (FUNC_9(FUNC_12(VAR_4)))
  VAR_6.uarc_size = FUNC_12(VAR_4)->uar_table.uarc_size;
 else
  VAR_6.uarc_size = 0;

 VAR_7 = FUNC_5(sizeof *VAR_7, VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_2);

 VAR_8 = FUNC_10(FUNC_12(VAR_4), &VAR_7->uar);
 if (VAR_8) {
  FUNC_4(VAR_7);
  return FUNC_0(VAR_8);
 }

 VAR_7->db_tab = FUNC_8(FUNC_12(VAR_4));
 if (FUNC_1(VAR_7->db_tab)) {
  VAR_8 = FUNC_2(VAR_7->db_tab);
  FUNC_11(FUNC_12(VAR_4), &VAR_7->uar);
  FUNC_4(VAR_7);
  return FUNC_0(VAR_8);
 }

 if (FUNC_3(VAR_5, &VAR_6, sizeof VAR_6)) {
  FUNC_7(FUNC_12(VAR_4), &VAR_7->uar, VAR_7->db_tab);
  FUNC_11(FUNC_12(VAR_4), &VAR_7->uar);
  FUNC_4(VAR_7);
  return FUNC_0(-VAR_1);
 }

 VAR_7->reg_mr_warned = 0;

 return &VAR_7->ibucontext;
}
