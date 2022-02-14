
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sys_mbox_t ;
struct TYPE_3__ {int os_mbox; } ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,void**,int ) ;

void
FUNC_2(sys_mbox_t *VAR_2, void *VAR_3)
{
  BaseType_t VAR_4 = FUNC_1((*VAR_2)->os_mbox, &VAR_3, VAR_1);
  FUNC_0("mbox post failed", VAR_4 == VAR_0);
}
