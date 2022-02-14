
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ lm_xid; } ;
struct TYPE_12__ {TYPE_1__ lmr_msg; } ;
typedef TYPE_2__ LOCKD_MSG_REQUEST ;


 int FUNC_0 (int *,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(LOCKD_MSG_REQUEST *VAR_3)
{
 LOCKD_MSG_REQUEST *VAR_4;

 VAR_4 = FUNC_3(&VAR_2, VAR_1);
 if (!VAR_4 || (VAR_3->lmr_msg.lm_xid > VAR_4->lmr_msg.lm_xid)) {

  FUNC_2(&VAR_2, VAR_3, VAR_0);
  return;
 }

 while (VAR_4 && (VAR_3->lmr_msg.lm_xid > VAR_4->lmr_msg.lm_xid)) {
  VAR_4 = FUNC_4(VAR_4, VAR_1, VAR_0);
 }
 if (VAR_4) {
  FUNC_0(&VAR_2, VAR_4, VAR_3, VAR_0);
 } else {
  FUNC_1(&VAR_2, VAR_3, VAR_0);
 }
}
