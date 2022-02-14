
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
struct task_pend_token {int tpt_update_live_donor; } ;
typedef int * ipc_port_t ;
struct TYPE_18__ {int trp_tal_enabled; int trp_apptype; int trp_role; int trp_qos_clamp; } ;
struct TYPE_19__ {TYPE_1__ requested_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,int ,int ,int,int ) ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_2__*,int *,int*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct task_pend_token*) ;
 int FUNC_12 (TYPE_2__*,struct task_pend_token*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;

void
FUNC_16(task_t VAR_10, int VAR_11, int VAR_12, int VAR_13,
                          ipc_port_t * VAR_14, int VAR_15)
{
 struct task_pend_token VAR_16 = {};

 FUNC_1(VAR_4,
      (FUNC_0(VAR_3, VAR_11)) | VAR_1,
      FUNC_10(VAR_10), FUNC_14(VAR_10), FUNC_15(VAR_10),
      VAR_11, 0);

 switch (VAR_11) {
  case 133:
  case 134:

   FUNC_5(VAR_10, VAR_2);
   FUNC_6(VAR_10, VAR_8);
   FUNC_7(VAR_10, VAR_2);




   FUNC_4(VAR_10, VAR_8);

   break;

  case 130:
   FUNC_5(VAR_10, VAR_8);
   FUNC_6(VAR_10, VAR_2);
   FUNC_7(VAR_10, VAR_9);
   FUNC_4(VAR_10, VAR_2);
   break;

  case 129:
   FUNC_5(VAR_10, VAR_8);
   FUNC_6(VAR_10, VAR_2);
   FUNC_7(VAR_10, VAR_2);
   FUNC_4(VAR_10, VAR_2);
   break;

  case 132:
   FUNC_5(VAR_10, VAR_2);
   FUNC_6(VAR_10, VAR_2);
   FUNC_7(VAR_10, VAR_8);
   FUNC_4(VAR_10, VAR_2);
   break;

  case 131:
   FUNC_5(VAR_10, VAR_2);
   FUNC_6(VAR_10, VAR_2);
   FUNC_7(VAR_10, VAR_2);
   FUNC_4(VAR_10, VAR_2);
   break;

  case 128:
   break;
 }

 if (VAR_14 != ((void*)0) && VAR_11 == 132) {
  int VAR_17 = 0;

  for (int VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
   ipc_port_t VAR_19 = ((void*)0);

   if ((VAR_19 = VAR_14[VAR_18]) != ((void*)0)) {
    int VAR_20 = 0;
    FUNC_2(VAR_10, VAR_19, &VAR_20);
    VAR_17 += VAR_20;
   }
  }

  if (VAR_17 > 0) {
   FUNC_3(VAR_10, VAR_17);
  }
 }

 FUNC_9(VAR_10);

 if (VAR_11 == 133) {

  VAR_10->requested_policy.trp_tal_enabled = 1;
 }

 if (VAR_11 != 128) {
  VAR_10->requested_policy.trp_apptype = VAR_11;
 }







 if (VAR_13 != VAR_6) {
  VAR_10->requested_policy.trp_role = VAR_13;
 }

 if (VAR_12 != VAR_7) {
  VAR_10->requested_policy.trp_qos_clamp = VAR_12;
 }

 FUNC_12(VAR_10, &VAR_16);

 FUNC_13(VAR_10);


 VAR_16.tpt_update_live_donor = 1;

 FUNC_11(VAR_10, &VAR_16);

 FUNC_1(VAR_4,
      (FUNC_0(VAR_3, VAR_11)) | VAR_0,
      FUNC_10(VAR_10), FUNC_14(VAR_10), FUNC_15(VAR_10),
      FUNC_8(VAR_10), 0);
}
