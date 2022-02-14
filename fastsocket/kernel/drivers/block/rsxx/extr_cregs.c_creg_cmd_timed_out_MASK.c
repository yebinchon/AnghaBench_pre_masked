
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int creg_timeout; } ;
struct TYPE_4__ {int lock; scalar_t__ active; TYPE_1__ creg_stats; struct creg_cmd* active_cmd; } ;
struct rsxx_cardinfo {TYPE_2__ creg_ctrl; } ;
struct creg_cmd {int (* cb ) (struct rsxx_cardinfo*,struct creg_cmd*,int ) ;} ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rsxx_cardinfo*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct creg_cmd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rsxx_cardinfo*,struct creg_cmd*,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct rsxx_cardinfo *VAR_3 = (struct rsxx_cardinfo *) VAR_2;
 struct creg_cmd *VAR_4;

 FUNC_4(&VAR_3->creg_ctrl.lock);
 VAR_4 = VAR_3->creg_ctrl.active_cmd;
 VAR_3->creg_ctrl.active_cmd = ((void*)0);
 FUNC_5(&VAR_3->creg_ctrl.lock);

 if (VAR_4 == ((void*)0)) {
  VAR_3->creg_ctrl.creg_stats.creg_timeout++;
  FUNC_2(FUNC_0(VAR_3),
   "No active command associated with timeout!\n");
  return;
 }

 if (VAR_4->cb)
  VAR_4->cb(VAR_3, VAR_4, -VAR_0);

 FUNC_3(VAR_1, VAR_4);


 FUNC_4(&VAR_3->creg_ctrl.lock);
 VAR_3->creg_ctrl.active = 0;
 FUNC_1(VAR_3);
 FUNC_5(&VAR_3->creg_ctrl.lock);
}
