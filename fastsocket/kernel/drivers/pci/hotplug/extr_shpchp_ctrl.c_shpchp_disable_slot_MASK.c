
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct slot {struct controller* ctrl; TYPE_1__* hpc_ops; } ;
struct controller {int crit_sect; } ;
struct TYPE_2__ {int (* get_adapter_status ) (struct slot*,scalar_t__*) ;int (* get_latch_status ) (struct slot*,scalar_t__*) ;int (* get_power_status ) (struct slot*,scalar_t__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct controller*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct slot*) ;
 int FUNC_4 (struct slot*) ;
 int FUNC_5 (struct slot*,scalar_t__*) ;
 int FUNC_6 (struct slot*,scalar_t__*) ;
 int FUNC_7 (struct slot*,scalar_t__*) ;
 int FUNC_8 (struct slot*) ;

__attribute__((used)) static int FUNC_9 (struct slot *VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3, VAR_4 = -VAR_0;
 struct controller *VAR_5 = VAR_1->ctrl;

 if (!VAR_1->ctrl)
  return -VAR_0;


 FUNC_1(&VAR_1->ctrl->crit_sect);

 VAR_3 = VAR_1->hpc_ops->get_adapter_status(VAR_1, &VAR_2);
 if (VAR_3 || !VAR_2) {
  FUNC_0(VAR_5, "No adapter on slot(%s)\n", FUNC_4(VAR_1));
  goto out;
 }
 VAR_3 = VAR_1->hpc_ops->get_latch_status(VAR_1, &VAR_2);
 if (VAR_3 || VAR_2) {
  FUNC_0(VAR_5, "Latch open on slot(%s)\n", FUNC_4(VAR_1));
  goto out;
 }
 VAR_3 = VAR_1->hpc_ops->get_power_status(VAR_1, &VAR_2);
 if (VAR_3 || !VAR_2) {
  FUNC_0(VAR_5, "Already disabled on slot(%s)\n",
     FUNC_4(VAR_1));
  goto out;
 }

 VAR_4 = FUNC_3(VAR_1);
 FUNC_8(VAR_1);
 out:
 FUNC_2(&VAR_1->ctrl->crit_sect);
 return VAR_4;
}
