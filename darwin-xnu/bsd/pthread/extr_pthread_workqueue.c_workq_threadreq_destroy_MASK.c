
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
typedef int proc_t ;
struct TYPE_5__ {int tr_flags; int tr_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(proc_t VAR_4, workq_threadreq_t VAR_5)
{
 VAR_5->tr_state = VAR_2;
 if (VAR_5->tr_flags & (VAR_1 | VAR_0)) {
  FUNC_0(VAR_4, VAR_5);
 } else {
  FUNC_1(VAR_3, VAR_5);
 }
}
