
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int commands_pending; int dev; } ;
struct bc_state {int dummy; } ;
struct at_state_t {int pending_commands; } ;





 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct at_state_t*) ;

__attribute__((used)) static void FUNC_2(struct cardstate *VAR_1, struct bc_state *VAR_2,
    struct at_state_t **VAR_3)
{
 int VAR_4;
 struct at_state_t *VAR_5 = *VAR_3;

 VAR_4 = FUNC_1(VAR_5);
 switch (VAR_4) {
 case 130:
  break;
 default:
  FUNC_0(VAR_1->dev, "internal error: disposition=%d\n", VAR_4);

 case 129:
 case 128:




  VAR_5->pending_commands |= VAR_0;
  VAR_1->commands_pending = 1;
  break;
 }
}
