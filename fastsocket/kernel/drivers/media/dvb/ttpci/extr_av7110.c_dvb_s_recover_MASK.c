
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ msg_len; } ;
struct av7110 {int saved_fe_params; int fe; int saved_tone; int saved_minicmd; TYPE_1__ saved_master_cmd; int saved_voltage; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct av7110* VAR_0)
{
 FUNC_2(VAR_0->fe);

 FUNC_5(VAR_0->fe, VAR_0->saved_voltage);
 if (VAR_0->saved_master_cmd.msg_len) {
  FUNC_6(20);
  FUNC_1(VAR_0->fe, &VAR_0->saved_master_cmd);
 }
 FUNC_6(20);
 FUNC_0(VAR_0->fe, VAR_0->saved_minicmd);
 FUNC_6(20);
 FUNC_4(VAR_0->fe, VAR_0->saved_tone);

 FUNC_3(VAR_0->fe, &VAR_0->saved_fe_params);
}
