
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kern_return_t ;
typedef int * ex_cb_t ;
struct TYPE_3__ {void* refcon; int * cb; } ;
typedef TYPE_1__ ex_cb_info_t ;
typedef size_t ex_cb_class_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

kern_return_t FUNC_0(
 ex_cb_class_t VAR_5,
 ex_cb_t VAR_6,
 void *VAR_7)
{
 ex_cb_info_t *VAR_8 = &VAR_4[VAR_5];

 if ((((void*)0) == VAR_6) || (VAR_5 >= VAR_0))
 {
  return VAR_2;
 }

 if (((void*)0) == VAR_8->cb)
 {
  VAR_8->cb = VAR_6;
  VAR_8->refcon = VAR_7;
  return VAR_3;
 }
 return VAR_1;
}
