
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sys_mbox_t ;
struct sys_mbox_s {int dummy; } ;
typedef int err_t ;
struct TYPE_5__ {int * os_mbox; int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int * FUNC_3 (int,int) ;

err_t
FUNC_4(sys_mbox_t *VAR_3, int VAR_4)
{
  *VAR_3 = FUNC_2(sizeof(struct sys_mbox_s));
  if (*VAR_3 == ((void*)0)){
    FUNC_0(VAR_2, ("fail to new *mbox\n"));
    return VAR_0;
  }

  (*VAR_3)->os_mbox = FUNC_3(VAR_4, sizeof(void *));

  if ((*VAR_3)->os_mbox == ((void*)0)) {
    FUNC_0(VAR_2, ("fail to new (*mbox)->os_mbox\n"));
    FUNC_1(*VAR_3);
    return VAR_0;
  }





  FUNC_0(VAR_2, ("new *mbox ok mbox=%p os_mbox=%p\n", *VAR_3, (*VAR_3)->os_mbox));
  return VAR_1;
}
