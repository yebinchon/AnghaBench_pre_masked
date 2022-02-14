
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_func_state_params {int cmd; scalar_t__ ramrod_flags; } ;
struct bnx2x_func_sp_obj {int state; int next_state; scalar_t__ pending; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_func_state { ____Placeholder_bnx2x_func_state } bnx2x_func_state ;
typedef enum bnx2x_func_cmd { ____Placeholder_bnx2x_func_cmd } bnx2x_func_cmd ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;



 int VAR_10 ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_14,
         struct bnx2x_func_sp_obj *VAR_15,
         struct bnx2x_func_state_params *VAR_16)
{
 enum bnx2x_func_state VAR_17 = VAR_15->state, VAR_18 = VAR_9;
 enum bnx2x_func_cmd VAR_19 = VAR_16->cmd;




 if (FUNC_2(VAR_13, &VAR_16->ramrod_flags)) {
  VAR_15->pending = 0;
  VAR_15->next_state = VAR_9;
 }




 if (VAR_15->pending)
  return -VAR_11;

 switch (VAR_17) {
 case 130:
  if (VAR_19 == VAR_2)
   VAR_18 = 131;

  break;
 case 131:
  if (VAR_19 == VAR_4)
   VAR_18 = 129;

  else if (VAR_19 == VAR_3)
   VAR_18 = 130;

  break;
 case 129:
  if (VAR_19 == VAR_5)
   VAR_18 = 131;




  else if ((VAR_19 == VAR_0) &&
    (!FUNC_2(VAR_5, &VAR_15->pending)))
   VAR_18 = 129;

  else if ((VAR_19 == VAR_1) &&
    (!FUNC_2(VAR_5, &VAR_15->pending)))
   VAR_18 = 129;




  else if ((VAR_19 == VAR_6) &&
    (!FUNC_2(VAR_5, &VAR_15->pending)))
   VAR_18 = 129;

  else if (VAR_19 == VAR_8)
   VAR_18 = 128;

  break;
 case 128:
  if ((VAR_19 == VAR_6) &&
      (!FUNC_2(VAR_5, &VAR_15->pending)))
   VAR_18 = 128;

  else if (VAR_19 == VAR_7)
   VAR_18 = 129;

  break;
 default:
  FUNC_0("Unknown state: %d\n", VAR_17);
 }


 if (VAR_18 != VAR_9) {
  FUNC_1(VAR_10, "Good function state transition: %d(%d)->%d\n",
     VAR_17, VAR_19, VAR_18);
  VAR_15->next_state = VAR_18;
  return 0;
 }

 FUNC_1(VAR_10, "Bad function state transition request: %d %d\n",
    VAR_17, VAR_19);

 return -VAR_12;
}
