
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int tape_state; char const* first_minor; int state_change_wq; } ;
typedef enum tape_state { ____Placeholder_tape_state } tape_state ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct tape_device *VAR_3, enum tape_state VAR_4)
{
 const char *VAR_5;

 if (VAR_3->tape_state == VAR_0) {
  FUNC_0(3, "ts_set err: not oper\n");
  return;
 }
 FUNC_0(4, "ts. dev:	%x\n", VAR_3->first_minor);
 FUNC_0(4, "old ts:\t\n");
 if (VAR_3->tape_state < VAR_1 && VAR_3->tape_state >=0 )
  VAR_5 = VAR_2[VAR_3->tape_state];
 else
  VAR_5 = "UNKNOWN TS";
 FUNC_0(4, "%s\n", VAR_5);
 FUNC_0(4, "new ts:\t\n");
 if (VAR_4 < VAR_1 && VAR_4 >= 0)
  VAR_5 = VAR_2[VAR_4];
 else
  VAR_5 = "UNKNOWN TS";
 FUNC_0(4, "%s\n", VAR_5);
 VAR_3->tape_state = VAR_4;
 FUNC_1(&VAR_3->state_change_wq);
}
