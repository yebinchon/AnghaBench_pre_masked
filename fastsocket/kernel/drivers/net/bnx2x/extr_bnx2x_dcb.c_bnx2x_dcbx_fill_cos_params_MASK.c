
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pg_help_data {size_t num_of_pg; TYPE_1__* data; } ;
struct dcbx_ets_feature {int dummy; } ;
struct cos_help_data {int num_of_cos; TYPE_4__* data; } ;
struct bnx2x_dcbx_cos_params {scalar_t__ strict; scalar_t__ bw_tbl; scalar_t__ pri_bitmask; int pauseable; } ;
struct TYPE_6__ {size_t num_of_cos; struct bnx2x_dcbx_cos_params* cos_params; } ;
struct TYPE_7__ {TYPE_2__ ets; } ;
struct bnx2x {TYPE_3__ dcbx_port_params; } ;
typedef int cos_data ;
struct TYPE_8__ {scalar_t__ pri_join_mask; int pausable; scalar_t__ strict; scalar_t__ cos_bw; } ;
struct TYPE_5__ {scalar_t__ pg; scalar_t__ num_of_dif_pri; int pg_priority; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,size_t,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (struct bnx2x*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct bnx2x*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,size_t,scalar_t__) ;
 int FUNC_8 (struct bnx2x*,struct pg_help_data*,struct dcbx_ets_feature*,struct cos_help_data*,int *,int ,size_t) ;
 int FUNC_9 (struct bnx2x*,struct pg_help_data*,struct dcbx_ets_feature*,struct cos_help_data*,int ) ;
 int FUNC_10 (struct cos_help_data*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_5,
           struct pg_help_data *VAR_6,
           struct dcbx_ets_feature *VAR_7,
           u32 *VAR_8)
{
 struct cos_help_data VAR_9;
 u8 VAR_10 = 0;
 u32 VAR_11 = 0;
 u8 VAR_12 = 0;

 FUNC_10(&VAR_9, 0, sizeof(VAR_9));


 for (VAR_10 = 0; VAR_10 < VAR_6->num_of_pg ; VAR_10++) {
  if (VAR_4 != VAR_6->data[VAR_10].pg &&
      VAR_3 <= VAR_6->data[VAR_10].pg)
   FUNC_1("Invalid pg[%d] data %x\n", VAR_10,
      VAR_6->data[VAR_10].pg);
  VAR_11 |= VAR_6->data[VAR_10].pg_priority;
  VAR_12 += VAR_6->data[VAR_10].num_of_dif_pri;
 }


 VAR_9.num_of_cos = 1;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9.data); VAR_10++) {
  VAR_9.data[VAR_10].pri_join_mask = 0;
  VAR_9.data[VAR_10].pausable = 0;
  VAR_9.data[VAR_10].strict = VAR_0;
  VAR_9.data[VAR_10].cos_bw = VAR_2;
 }

 if (FUNC_4(VAR_5))
  FUNC_9(VAR_5, VAR_6, VAR_7,
            &VAR_9, VAR_11);
 else
  FUNC_8(VAR_5,
         VAR_6, VAR_7,
         &VAR_9,
         VAR_8,
         VAR_11,
         VAR_12);

 for (VAR_10 = 0; VAR_10 < VAR_9.num_of_cos ; VAR_10++) {
  struct bnx2x_dcbx_cos_params *VAR_13 =
   &VAR_5->dcbx_port_params.ets.cos_params[VAR_10];

  VAR_13->strict = VAR_9.data[VAR_10].strict;
  VAR_13->bw_tbl = VAR_9.data[VAR_10].cos_bw;
  VAR_13->pri_bitmask = VAR_9.data[VAR_10].pri_join_mask;
  VAR_13->pauseable = VAR_9.data[VAR_10].pausable;


  if (VAR_13->bw_tbl != VAR_2 ||
      VAR_13->strict != VAR_0) {
   if (VAR_13->pri_bitmask == 0)
    FUNC_1("Invalid pri_bitmask for %d\n", VAR_10);

   if (FUNC_2(VAR_5) || FUNC_3(VAR_5)) {

    if (VAR_13->pauseable &&
        FUNC_5(VAR_5,
      VAR_13->pri_bitmask) != 0)
     FUNC_1("Inconsistent config for pausable COS %d\n",
        VAR_10);

    if (!VAR_13->pauseable &&
        FUNC_6(VAR_5,
      VAR_13->pri_bitmask) != 0)
     FUNC_1("Inconsistent config for nonpausable COS %d\n",
        VAR_10);
   }
  }

  if (VAR_13->pauseable)
   FUNC_7(VAR_1, "COS %d PAUSABLE prijoinmask 0x%x\n",
      VAR_10, VAR_9.data[VAR_10].pri_join_mask);
  else
   FUNC_7(VAR_1,
      "COS %d NONPAUSABLE prijoinmask 0x%x\n",
      VAR_10, VAR_9.data[VAR_10].pri_join_mask);
 }

 VAR_5->dcbx_port_params.ets.num_of_cos = VAR_9.num_of_cos ;
}
