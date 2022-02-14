
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_info_t ;
typedef int thread_flavor_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_7__ {scalar_t__ inspection; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(
 thread_t VAR_3,
 thread_flavor_t VAR_4,
 thread_info_t VAR_5,
 mach_msg_type_number_t *VAR_6)
{
 kern_return_t VAR_7;

 if (VAR_3 == VAR_2)
  return (VAR_0);

 FUNC_1(VAR_3);

 if (VAR_3->active || VAR_3->inspection)
  VAR_7 = FUNC_0(
      VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_7 = VAR_1;

 FUNC_2(VAR_3);

 return (VAR_7);
}
