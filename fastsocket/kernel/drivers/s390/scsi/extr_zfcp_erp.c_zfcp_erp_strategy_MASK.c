
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_erp_action {int status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; int erp_low_mem_count; int erp_total_count; } ;
struct TYPE_2__ {int config_lock; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (struct zfcp_erp_action*,int) ;
 int FUNC_6 (struct zfcp_erp_action*) ;
 int FUNC_7 (struct zfcp_erp_action*) ;
 int FUNC_8 (struct zfcp_erp_action*) ;
 int FUNC_9 (struct zfcp_erp_action*,int) ;
 int FUNC_10 (struct zfcp_erp_action*) ;
 int FUNC_11 (struct zfcp_erp_action*) ;
 int FUNC_12 (struct zfcp_erp_action*) ;
 int FUNC_13 (struct zfcp_erp_action*) ;
 int FUNC_14 (struct zfcp_erp_action*,int) ;

__attribute__((used)) static int FUNC_15(struct zfcp_erp_action *VAR_8)
{
 int VAR_9;
 struct zfcp_adapter *VAR_10 = VAR_8->adapter;
 unsigned long VAR_11;

 FUNC_1(&VAR_7.config_lock, VAR_11);
 FUNC_3(&VAR_10->erp_lock);

 FUNC_8(VAR_8);

 if (VAR_8->status & VAR_4) {
  FUNC_6(VAR_8);
  VAR_9 = VAR_0;
  goto unlock;
 }

 if (VAR_8->status & VAR_6) {
  VAR_9 = VAR_2;
  goto check_target;
 }

 FUNC_7(VAR_8);


 FUNC_4(&VAR_10->erp_lock);
 FUNC_2(&VAR_7.config_lock, VAR_11);
 VAR_9 = FUNC_10(VAR_8);
 FUNC_1(&VAR_7.config_lock, VAR_11);
 FUNC_3(&VAR_10->erp_lock);

 if (VAR_8->status & VAR_4)
  VAR_9 = 129;

 switch (VAR_9) {
 case 128:
  if (!(VAR_8->status & VAR_5)) {
   ++VAR_10->erp_low_mem_count;
   VAR_8->status |= VAR_5;
  }
  if (VAR_10->erp_total_count == VAR_10->erp_low_mem_count)
   FUNC_0(VAR_10, 0, "erstgy1", ((void*)0));
  else {
   FUNC_13(VAR_8);
   VAR_9 = 129;
  }
  goto unlock;

 case 129:
  if (VAR_8->status & VAR_5) {
   --VAR_10->erp_low_mem_count;
   VAR_8->status &= ~VAR_5;
  }
  goto unlock;
 }

check_target:
 VAR_9 = FUNC_9(VAR_8, VAR_9);
 FUNC_6(VAR_8);
 VAR_9 = FUNC_14(VAR_8, VAR_9);
 if (VAR_9 == VAR_1)
  goto unlock;
 if (VAR_9 == VAR_3)
  FUNC_12(VAR_8);
 if (VAR_9 == VAR_2)
  FUNC_11(VAR_8);

 unlock:
 FUNC_4(&VAR_10->erp_lock);
 FUNC_2(&VAR_7.config_lock, VAR_11);

 if (VAR_9 != 129)
  FUNC_5(VAR_8, VAR_9);

 return VAR_9;
}
