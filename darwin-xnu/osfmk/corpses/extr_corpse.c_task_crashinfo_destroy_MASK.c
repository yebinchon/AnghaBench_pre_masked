
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_4__ {int kcd_user_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

kern_return_t
FUNC_2(kcdata_descriptor_t VAR_2)
{
 if (!VAR_2) {
  return VAR_1;
 }
 if (VAR_2->kcd_user_flags & VAR_0) {
  FUNC_1(VAR_2->kcd_user_flags);
 }
 return FUNC_0(VAR_2);
}
