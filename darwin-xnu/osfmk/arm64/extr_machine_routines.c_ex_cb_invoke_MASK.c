
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ ex_cb_state_t ;
struct TYPE_6__ {int refcon; int (* cb ) (size_t,int ,TYPE_1__*) ;} ;
typedef TYPE_2__ ex_cb_info_t ;
typedef size_t ex_cb_class_t ;
typedef int ex_cb_action_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (size_t,int ,TYPE_1__*) ;

ex_cb_action_t FUNC_2(
 ex_cb_class_t VAR_3,
 vm_offset_t VAR_4)
{
 ex_cb_info_t *VAR_5 = &VAR_2[VAR_3];
 ex_cb_state_t VAR_6 = {VAR_4};

 if (VAR_3 >= VAR_1)
 {
  FUNC_0("Invalid exception callback class 0x%x\n", VAR_3);
 }

 if (VAR_5->cb)
 {
  return VAR_5->cb(VAR_3, VAR_5->refcon, &VAR_6);
 }
 return VAR_0;
}
