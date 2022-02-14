
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * freelist_elements; } ;
typedef TYPE_1__ btlog_t ;
typedef int btlog_element_t ;


 uintptr_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

btlog_element_t*
FUNC_1(btlog_t *VAR_1)
{
 btlog_element_t *VAR_2 = ((void*)0);

retry:
 VAR_2 = VAR_1->freelist_elements;

 if ((uintptr_t)VAR_2 == VAR_0) {

  FUNC_0(VAR_1, 1);
  goto retry;
 } else {

  uintptr_t VAR_3 = *(uintptr_t*)VAR_2;
  VAR_1->freelist_elements = (btlog_element_t *)VAR_3;
  return VAR_2;
 }
}
