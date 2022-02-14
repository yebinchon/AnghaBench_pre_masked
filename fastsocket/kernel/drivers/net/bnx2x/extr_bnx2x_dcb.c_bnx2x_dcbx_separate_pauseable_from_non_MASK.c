
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct dcbx_ets_feature {int pg_bw_tbl; } ;
struct cos_help_data {TYPE_3__* data; } ;
struct TYPE_4__ {int* traffic_type_priority; } ;
struct TYPE_5__ {TYPE_1__ app; } ;
struct bnx2x {TYPE_2__ dcbx_port_params; } ;
struct TYPE_6__ {int pausable; int pri_join_mask; int strict; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,size_t) ;
 size_t VAR_2 ;
 int FUNC_3 (struct bnx2x*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_3,
   struct cos_help_data *VAR_4,
   u32 *VAR_5,
   struct dcbx_ets_feature *VAR_6)
{
 u32 VAR_7 = 0;
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = VAR_2;

 VAR_4->data[0].pausable = 1;
 VAR_4->data[1].pausable = 0;
 VAR_4->data[0].pri_join_mask = VAR_4->data[1].pri_join_mask = 0;

 for (VAR_8 = 0 ; VAR_8 < VAR_11 ; VAR_8++) {
  VAR_7 = 1 << VAR_3->dcbx_port_params.
     app.traffic_type_priority[VAR_8];

  if (VAR_7 & FUNC_1(VAR_3)) {
   VAR_4->data[1].pri_join_mask |= VAR_7;
   VAR_9 = 1;
  } else {
   VAR_4->data[0].pri_join_mask |= VAR_7;
   VAR_9 = 0;
  }
  VAR_10 = (u8)VAR_5[VAR_3->dcbx_port_params.
      app.traffic_type_priority[VAR_8]];

  if (VAR_10 < VAR_1)
   FUNC_3(VAR_3, &VAR_4->data[VAR_9],
    FUNC_2(VAR_6->pg_bw_tbl, VAR_10));
  else



   VAR_4->data[VAR_9].strict =
      VAR_0;
 }
 if ((0 == VAR_4->data[0].pri_join_mask) &&
     (0 == VAR_4->data[1].pri_join_mask))
  FUNC_0("dcbx error: Both groups must have priorities\n");
}
