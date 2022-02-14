
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32_t ;
typedef TYPE_1__* sys_mbox_t ;
struct TYPE_3__ {int os_mbox; } ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,void**,int ) ;

u32_t
FUNC_2(sys_mbox_t *VAR_3, void **VAR_4)
{
  BaseType_t VAR_5;
  void *VAR_6;

  if (VAR_4 == ((void*)0)) {
    VAR_4 = &VAR_6;
  }
  VAR_5 = FUNC_1((*VAR_3)->os_mbox, &(*VAR_4), 0);
  if (VAR_5 == VAR_1) {
    *VAR_4 = ((void*)0);
    return VAR_0;
  }
  FUNC_0("mbox fetch failed", VAR_5 == VAR_2);

  return 0;
}
