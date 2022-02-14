
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct dcbx_app_priority_feature {scalar_t__ default_pri; struct dcbx_app_priority_entry* app_pri_tbl; scalar_t__ enabled; } ;
struct dcbx_app_priority_entry {scalar_t__ appBitfield; scalar_t__ app_id; int pri_bitmap; } ;
struct TYPE_3__ {scalar_t__* traffic_type_priority; int enabled; } ;
struct TYPE_4__ {TYPE_1__ app; } ;
struct bnx2x {TYPE_2__ dcbx_port_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_15,
       struct dcbx_app_priority_feature *VAR_16,
       u32 VAR_17) {
 u8 VAR_18;
 u32 *VAR_19 = VAR_15->dcbx_port_params.app.traffic_type_priority;

 if (FUNC_1(VAR_17, VAR_3))
  FUNC_0(VAR_0, "DCBX_LOCAL_APP_ERROR\n");

 if (FUNC_1(VAR_17, VAR_4))
  FUNC_0(VAR_0, "DCBX_LOCAL_APP_MISMATCH\n");

 if (FUNC_1(VAR_17, VAR_6))
  FUNC_0(VAR_0, "DCBX_REMOTE_APP_TLV_NOT_FOUND\n");
 if (VAR_16->enabled &&
     !FUNC_1(VAR_17, VAR_3 | VAR_4 |
         VAR_6)) {

  VAR_15->dcbx_port_params.app.enabled = 1;

  for (VAR_18 = 0 ; VAR_18 < VAR_9; VAR_18++)
   VAR_19[VAR_18] = 0;

  if (VAR_16->default_pri < VAR_13)
   VAR_19[VAR_12] = VAR_16->default_pri;

  for (VAR_18 = 0 ; VAR_18 < VAR_5; VAR_18++) {
   struct dcbx_app_priority_entry *VAR_20 =
       VAR_16->app_pri_tbl;

   if (FUNC_1(VAR_20[VAR_18].appBitfield,
         VAR_1) &&
      VAR_7 == VAR_20[VAR_18].app_id)
    FUNC_2(VAR_15,
      VAR_20[VAR_18].pri_bitmap,
      VAR_10);

   if (FUNC_1(VAR_20[VAR_18].appBitfield,
         VAR_2) &&
      VAR_14 == VAR_20[VAR_18].app_id)
    FUNC_2(VAR_15,
      VAR_20[VAR_18].pri_bitmap,
      VAR_11);
  }
 } else {
  FUNC_0(VAR_0, "DCBX_LOCAL_APP_DISABLED\n");
  VAR_15->dcbx_port_params.app.enabled = 0;
  for (VAR_18 = 0 ; VAR_18 < VAR_9; VAR_18++)
   VAR_19[VAR_18] = VAR_8;
 }
}
