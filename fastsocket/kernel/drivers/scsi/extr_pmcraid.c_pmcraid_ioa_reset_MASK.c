
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmcraid_instance {int ioa_reset_in_progress; int ioa_state; void* ioa_shutdown_type; int reset_wait_q; scalar_t__ ioa_bringdown; struct pmcraid_cmd* reset_cmd; scalar_t__ ioa_reset_attempts; int force_ioa_reset; int ioa_unit_check; int pdev; int ioa_status; int ioa_hard_reset; int host; } ;
struct pmcraid_cmd {struct pmcraid_instance* drv_inst; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pmcraid_instance*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pmcraid_instance*) ;
 int FUNC_5 (struct pmcraid_instance*) ;
 int FUNC_6 (struct pmcraid_cmd*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pmcraid_instance*,int ) ;
 int FUNC_9 (struct pmcraid_instance*) ;
 int FUNC_10 (struct pmcraid_cmd*) ;
 int FUNC_11 (struct pmcraid_cmd*) ;
 int FUNC_12 (struct pmcraid_instance*) ;
 int FUNC_13 (struct pmcraid_cmd*) ;
 int FUNC_14 (struct pmcraid_cmd*) ;
 int FUNC_15 (struct pmcraid_cmd*) ;
 int FUNC_16 (struct pmcraid_cmd*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct pmcraid_cmd *VAR_7)
{
 struct pmcraid_instance *VAR_8 = VAR_7->drv_inst;
 u8 VAR_9 = 0;

 VAR_8->ioa_reset_in_progress = 1;

 if (VAR_8->reset_cmd != VAR_7) {
  FUNC_3("reset is called with different command block\n");
  VAR_8->reset_cmd = VAR_7;
 }

 FUNC_7("reset_engine: state = %d, command = %p\n",
        VAR_8->ioa_state, VAR_7);

 switch (VAR_8->ioa_state) {

 case 135:




  FUNC_3("IOA is offline no reset is possible\n");
  VAR_9 = 1;
  break;

 case 134:




  FUNC_2(VAR_8, ~0);
  VAR_8->ioa_state = 131;
  FUNC_11(VAR_7);
  break;

 case 128:



  FUNC_17(VAR_8->host);





  if (VAR_8->ioa_hard_reset == 0) {
   if (FUNC_0(VAR_8->ioa_status) &
       VAR_0) {
    FUNC_7("sticky bit set, bring-up\n");
    VAR_8->ioa_state = 133;
    FUNC_10(VAR_7);
    FUNC_6(VAR_7);
   } else {
    VAR_8->ioa_state = 130;
    FUNC_14(VAR_7);
   }
  } else {



   VAR_8->ioa_state = 131;
   FUNC_11(VAR_7);
  }
  break;

 case 131:





  VAR_8->ioa_state = 132;
  FUNC_15(VAR_7);
  break;

 case 132:
  VAR_8->ioa_reset_attempts++;


  if (VAR_8->ioa_reset_attempts > VAR_1) {
   VAR_8->ioa_reset_attempts = 0;
   FUNC_3("IOA didn't respond marking it as dead\n");
   VAR_8->ioa_state = 135;

   if (VAR_8->ioa_bringdown)
    FUNC_8(VAR_8,
     VAR_4);
   else
    FUNC_8(VAR_8,
      VAR_2);
   VAR_9 = 1;
   break;
  }




  if (FUNC_1(VAR_8->pdev)) {
   FUNC_7("config-space error resetting again\n");
   VAR_8->ioa_state = 131;
   FUNC_11(VAR_7);
   break;
  }


  FUNC_4(VAR_8);


  if (VAR_8->ioa_unit_check) {
   FUNC_7("unit check is active\n");
   VAR_8->ioa_unit_check = 0;
   FUNC_5(VAR_8);
   VAR_8->ioa_reset_attempts--;
   VAR_8->ioa_state = 131;
   FUNC_11(VAR_7);
   break;
  }





  if (VAR_8->ioa_bringdown) {
   FUNC_7("bringing down the adapter\n");
   VAR_8->ioa_shutdown_type = VAR_6;
   VAR_8->ioa_bringdown = 0;
   VAR_8->ioa_state = 128;
   FUNC_8(VAR_8,
     VAR_5);
   VAR_9 = 1;
  } else {




   if (FUNC_12(VAR_8)) {
    VAR_8->ioa_state = 133;
    FUNC_7("bringing up the adapter\n");
    FUNC_10(VAR_7);
    FUNC_6(VAR_7);
   } else {
    VAR_8->ioa_state = 130;
    FUNC_14(VAR_7);
   }
  }
  break;

 case 130:



  FUNC_7("In softreset proceeding with bring-up\n");
  VAR_8->ioa_state = 133;





  FUNC_6(VAR_7);
  break;

 case 133:



  VAR_8->ioa_state = 129;
  VAR_9 = 1;
  break;

 case 129:
 default:





  if (VAR_8->ioa_shutdown_type == VAR_6 &&
      VAR_8->force_ioa_reset == 0) {
   FUNC_8(VAR_8,
      VAR_3);
   VAR_9 = 1;
  } else {
   if (VAR_8->ioa_shutdown_type != VAR_6)
    VAR_8->ioa_state = 134;
   FUNC_10(VAR_7);
   FUNC_16(VAR_7);
  }
  break;
 }






 if (VAR_9) {
  VAR_8->ioa_reset_in_progress = 0;
  VAR_8->ioa_reset_attempts = 0;
  VAR_8->reset_cmd = ((void*)0);
  VAR_8->ioa_shutdown_type = VAR_6;
  VAR_8->ioa_bringdown = 0;
  FUNC_13(VAR_7);




  if (VAR_8->ioa_state == 129)
   FUNC_9(VAR_8);

  FUNC_18(&VAR_8->reset_wait_q);
 }

 return;
}
