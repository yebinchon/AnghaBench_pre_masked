
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __vxge_hw_device {int* tim_int_mask0; int* tim_int_mask1; TYPE_1__* common_reg; } ;
struct TYPE_2__ {int tim_int_status1; int tim_int_status0; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct __vxge_hw_device *VAR_2)
{

 if ((VAR_2->tim_int_mask0[VAR_1] != 0) ||
    (VAR_2->tim_int_mask0[VAR_0] != 0)) {
  FUNC_1((VAR_2->tim_int_mask0[VAR_1] |
     VAR_2->tim_int_mask0[VAR_0]),
    &VAR_2->common_reg->tim_int_status0);
 }

 if ((VAR_2->tim_int_mask1[VAR_1] != 0) ||
    (VAR_2->tim_int_mask1[VAR_0] != 0)) {
  FUNC_0(
    (VAR_2->tim_int_mask1[VAR_1] |
     VAR_2->tim_int_mask1[VAR_0]),
    &VAR_2->common_reg->tim_int_status1);
 }

 return;
}
