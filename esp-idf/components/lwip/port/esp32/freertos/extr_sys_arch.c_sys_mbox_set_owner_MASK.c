
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sys_mbox_t ;
struct TYPE_3__ {void* owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(sys_mbox_t *VAR_1, void* VAR_2)
{
  if (VAR_1 && *VAR_1) {
    (*VAR_1)->owner = VAR_2;
    FUNC_0(VAR_0, ("set mbox=%p owner=%p", *VAR_1, VAR_2));
  }
}
