
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef scalar_t__ uint32_t ;
typedef int kern_return_t ;
struct TYPE_7__ {scalar_t__ slide; } ;
struct TYPE_6__ {scalar_t__ sr_slid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;

kern_return_t
FUNC_5(uint32_t VAR_4)
{
 kern_return_t VAR_5 = VAR_2;
 vm_shared_region_t VAR_6 = FUNC_3(FUNC_0());


 if (VAR_6 == ((void*)0)) {
  return VAR_5;
 }

 if ((VAR_6->sr_slid == VAR_3) && VAR_4) {
         if (VAR_4 != FUNC_4(VAR_6)->slide) {
   FUNC_1("Only one shared region can be slid\n");
   VAR_5 = VAR_0;
  } else {
   VAR_5 = VAR_1;
  }
 }
 FUNC_2(VAR_6);
 return VAR_5;
}
