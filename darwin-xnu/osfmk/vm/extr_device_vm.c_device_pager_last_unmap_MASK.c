
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int memory_object_t ;
typedef int kern_return_t ;
typedef TYPE_1__* device_pager_t ;
typedef void* boolean_t ;
struct TYPE_5__ {scalar_t__ ref_count; void* is_mapped; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

kern_return_t
FUNC_5(
 memory_object_t VAR_3)
{
 device_pager_t VAR_4;
 boolean_t VAR_5;

 VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_4);
 FUNC_0(VAR_4->ref_count > 0);
 if (VAR_4->is_mapped) {
  VAR_4->is_mapped = VAR_0;
  VAR_5 = VAR_2;
 } else {
  VAR_5 = VAR_0;
 }
 FUNC_4(VAR_4);

 if (VAR_5) {
  FUNC_1(VAR_3);
 }

 return VAR_1;
}
