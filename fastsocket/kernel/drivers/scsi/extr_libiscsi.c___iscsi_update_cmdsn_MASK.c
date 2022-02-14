
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct iscsi_session {scalar_t__ exp_cmdsn; scalar_t__ max_cmdsn; TYPE_1__* leadconn; } ;
struct TYPE_2__ {int mgmtqueue; int cmdqueue; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iscsi_session *VAR_0,
     uint32_t VAR_1, uint32_t VAR_2)
{




 if (FUNC_1(VAR_2, VAR_1 - 1))
  return;

 if (VAR_1 != VAR_0->exp_cmdsn &&
     !FUNC_1(VAR_1, VAR_0->exp_cmdsn))
  VAR_0->exp_cmdsn = VAR_1;

 if (VAR_2 != VAR_0->max_cmdsn &&
     !FUNC_1(VAR_2, VAR_0->max_cmdsn)) {
  VAR_0->max_cmdsn = VAR_2;




  if (!FUNC_2(&VAR_0->leadconn->cmdqueue) ||
      !FUNC_2(&VAR_0->leadconn->mgmtqueue))
   FUNC_0(VAR_0->leadconn);
 }
}
