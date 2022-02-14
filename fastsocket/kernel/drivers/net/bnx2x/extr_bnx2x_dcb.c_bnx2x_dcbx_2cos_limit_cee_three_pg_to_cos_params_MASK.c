
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pg_help_data {int dummy; } ;
struct dcbx_ets_feature {int pg_bw_tbl; } ;
struct cos_help_data {TYPE_3__* data; } ;
struct TYPE_4__ {int* traffic_type_priority; } ;
struct TYPE_5__ {TYPE_1__ app; } ;
struct bnx2x {TYPE_2__ dcbx_port_params; } ;
struct TYPE_6__ {int pri_join_mask; int strict; int pausable; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int) ;
 size_t VAR_2 ;
 int FUNC_3 (struct bnx2x*,TYPE_3__*,int ) ;
 int FUNC_4 (struct bnx2x*,struct cos_help_data*,int*,struct dcbx_ets_feature*) ;

__attribute__((used)) static void FUNC_5(
         struct bnx2x *VAR_3,
         struct pg_help_data *VAR_4,
         struct dcbx_ets_feature *VAR_5,
         struct cos_help_data *VAR_6,
         u32 *VAR_7,
         u32 VAR_8,
         u8 VAR_9)
{
 u8 VAR_10 = 0;
 u32 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 bool VAR_14 = 0;
 u8 VAR_15 = VAR_2;

 VAR_6->data[0].pri_join_mask = VAR_6->data[1].pri_join_mask = 0;




 if (FUNC_1(VAR_3, VAR_8))
  FUNC_4(VAR_3,
    VAR_6, VAR_7, VAR_5);
 else {
  VAR_6->data[0].pausable = VAR_6->data[1].pausable =
   FUNC_2(VAR_3, VAR_8);

  for (VAR_10 = 0 ; VAR_10 < VAR_15; VAR_10++) {
   VAR_11 = 1 << VAR_3->dcbx_port_params.
    app.traffic_type_priority[VAR_10];
   VAR_13 = (u8)VAR_7[VAR_3->
    dcbx_port_params.app.traffic_type_priority[VAR_10]];

   if (VAR_13 < VAR_1) {
    VAR_12 = 0;

    if (VAR_10 == (VAR_15-1) &&
        0 == VAR_14)




     VAR_12 = 1;
    VAR_6->data[VAR_12].pri_join_mask |=
        VAR_11;
    FUNC_3(VAR_3,
     &VAR_6->data[VAR_12],
     FUNC_0(VAR_5->pg_bw_tbl,
             VAR_13));
   } else {
    VAR_14 = 1;
    VAR_6->data[1].pri_join_mask |= VAR_11;



    VAR_6->data[1].strict =
     VAR_0;
   }
  }
 }
}
