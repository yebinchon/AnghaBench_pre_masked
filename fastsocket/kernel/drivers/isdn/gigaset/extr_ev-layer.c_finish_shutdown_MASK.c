
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {scalar_t__ mstate; int waitqueue; scalar_t__ waiting; int cmd_result; scalar_t__ isdn_up; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cardstate*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cardstate *VAR_5)
{
 if (VAR_5->mstate != VAR_2) {
  VAR_5->mstate = VAR_3;
  VAR_5->mode = VAR_4;
 }


 if (VAR_5->isdn_up) {
  VAR_5->isdn_up = 0;
  FUNC_0(VAR_5, VAR_1);
 }



 VAR_5->cmd_result = -VAR_0;
 VAR_5->waiting = 0;
 FUNC_1(&VAR_5->waitqueue);
}
