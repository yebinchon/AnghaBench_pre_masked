
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sys_mbox_t ;
typedef scalar_t__ UBaseType_t ;
struct TYPE_4__ {int os_mbox; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(sys_mbox_t *VAR_0)
{
  if ((((void*)0) == VAR_0) || (((void*)0) == *VAR_0)) {
    return;
  }
  UBaseType_t VAR_1 = FUNC_2((*VAR_0)->os_mbox);
  FUNC_0("mbox quence not empty", VAR_1 == 0);

  FUNC_3((*VAR_0)->os_mbox);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
}
