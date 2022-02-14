
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* upl_t ;
typedef int upl_page_info_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int *,int ,int *) ;

kern_return_t
FUNC_1(
 upl_t VAR_2,
 upl_page_info_t *VAR_3,
 mach_msg_type_number_t VAR_4)
{
 boolean_t VAR_5;

 if (VAR_2 == VAR_1)
  return VAR_0;

 return FUNC_0(VAR_2, 0, VAR_2->size, 0, VAR_3, VAR_4, &VAR_5);
}
