
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ last_pid; scalar_t__ last_upid; int so_vuuid; int last_uuid; } ;
typedef scalar_t__ proc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(struct socket *VAR_1, proc_t VAR_2)
{
 if (VAR_1->last_pid != 0) {




  if (VAR_2 == VAR_0)
   VAR_2 = FUNC_0();

  if (VAR_1->last_upid != FUNC_4(VAR_2) ||
      VAR_1->last_pid != FUNC_2(VAR_2)) {
   VAR_1->last_upid = FUNC_4(VAR_2);
   VAR_1->last_pid = FUNC_2(VAR_2);
   FUNC_1(VAR_2, VAR_1->last_uuid,
       sizeof (VAR_1->last_uuid));
  }
  FUNC_3(VAR_1->so_vuuid, sizeof(VAR_1->so_vuuid));
 }
}
