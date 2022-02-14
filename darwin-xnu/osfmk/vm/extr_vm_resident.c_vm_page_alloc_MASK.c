
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef TYPE_1__* vm_object_t ;
typedef int vm_object_offset_t ;
struct TYPE_5__ {scalar_t__ can_grab_secluded; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int ) ;

vm_page_t
FUNC_3(
 vm_object_t VAR_2,
 vm_object_offset_t VAR_3)
{
 vm_page_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_2);
 VAR_5 = 0;





 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 == VAR_1)
  return VAR_1;

 FUNC_2(VAR_4, VAR_2, VAR_3);

 return(VAR_4);
}
