
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
typedef scalar_t__ vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int vmp_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(
 vm_object_t VAR_4,
 vm_object_offset_t VAR_5,
 vm_object_size_t VAR_6)
{
 vm_object_size_t VAR_7;

 VAR_7 = FUNC_2(VAR_6);
        FUNC_1(VAR_4);
 while (VAR_7) {
     vm_page_t VAR_8;





     while (VAR_3 ==
    (VAR_8 = FUNC_4(VAR_4, VAR_5))) {
  FUNC_3(VAR_4);
  FUNC_0();
  FUNC_1(VAR_4);
     }
     VAR_8->vmp_busy = VAR_0;

     VAR_7 -= VAR_2;
     VAR_5 += VAR_2;
 }
 FUNC_3(VAR_4);
 return VAR_1;
}
