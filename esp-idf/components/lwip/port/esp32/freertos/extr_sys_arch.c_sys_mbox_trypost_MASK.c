
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sys_mbox_t ;
typedef int err_t ;
struct TYPE_3__ {int os_mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,void**,int ) ;

err_t
FUNC_2(sys_mbox_t *VAR_4, void *VAR_5)
{
  err_t VAR_6;

  if (FUNC_1((*VAR_4)->os_mbox, &VAR_5, 0) == VAR_3) {
    VAR_6 = VAR_1;
  } else {
    FUNC_0(VAR_2, ("trypost mbox=%p fail\n", (*VAR_4)->os_mbox));
    VAR_6 = VAR_0;
  }

  return VAR_6;
}
