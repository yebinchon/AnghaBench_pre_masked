
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcdata_descriptor {int dummy; } ;
typedef int kern_return_t ;
typedef int kcdata_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

kern_return_t FUNC_1(kcdata_descriptor_t VAR_2)
{
 if (!VAR_2) {
  return VAR_0;
 }





 FUNC_0(VAR_2, sizeof(struct kcdata_descriptor));
 return VAR_1;
}
