
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sys_mbox_t ;
typedef int err_t ;
struct TYPE_3__ {int os_mbox; } ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,void**,scalar_t__*) ;

err_t
FUNC_2(sys_mbox_t *VAR_6, void *VAR_7)
{
  BaseType_t VAR_8;
  BaseType_t VAR_9 = VAR_4;

  VAR_8 = FUNC_1((*VAR_6)->os_mbox, &VAR_7, &VAR_9);
  if (VAR_8 == VAR_5) {
    if (VAR_9 == VAR_5) {
      return VAR_1;
    }
    return VAR_2;
  } else {
    FUNC_0("mbox trypost failed", VAR_8 == VAR_3);
    return VAR_0;
  }
}
