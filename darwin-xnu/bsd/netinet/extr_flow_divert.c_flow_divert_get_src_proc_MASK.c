
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct socket {int so_flags; scalar_t__ e_pid; int e_uuid; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_8__ {scalar_t__ p_pid; int p_uuid; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_2, proc_t *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->so_flags & VAR_1) {
  if ((*VAR_3)->p_pid != VAR_2->e_pid) {
   *VAR_3 = FUNC_2(VAR_2->e_pid);
   VAR_4 = 1;
  } else if (FUNC_4((*VAR_3)->p_uuid, VAR_2->e_uuid)) {
   *VAR_3 = FUNC_1(VAR_2->e_uuid);
   VAR_4 = 1;
  }
 } else if (*VAR_3 == VAR_0) {
  *VAR_3 = FUNC_0();
 }

 if (*VAR_3 != VAR_0) {
  if ((*VAR_3)->p_pid == 0) {
   if (VAR_4) {
    FUNC_3(*VAR_3);
   }
   VAR_4 = 0;
   *VAR_3 = VAR_0;
  }
 }

 return VAR_4;
}
