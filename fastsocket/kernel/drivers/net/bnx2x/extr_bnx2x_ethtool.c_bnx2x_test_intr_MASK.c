
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_queue_state_params {int ramrod_flags; int cmd; int * q_obj; int * member_0; } ;
struct bnx2x {TYPE_1__* sp_objs; int dev; } ;
struct TYPE_2__ {int q_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_5)
{
 struct bnx2x_queue_state_params VAR_6 = {((void*)0)};

 if (!FUNC_3(VAR_5->dev)) {
  FUNC_0(VAR_0 | VAR_1,
     "cannot access eeprom when the interface is down\n");
  return -VAR_3;
 }

 VAR_6.q_obj = &VAR_5->sp_objs->q_obj;
 VAR_6.cmd = VAR_2;

 FUNC_1(VAR_4, &VAR_6.ramrod_flags);

 return FUNC_2(VAR_5, &VAR_6);
}
