
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct label {int dummy; } ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int mach_vm_address_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int * kcdata_descriptor_t ;
struct TYPE_6__ {int * corpse_info; struct label* crash_label; int * bsd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (void*,int ) ;
 struct label* FUNC_6 () ;
 int FUNC_7 (struct label*) ;
 int FUNC_8 (TYPE_1__*,struct label*) ;
 int * FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

kern_return_t
FUNC_13(
 task_t VAR_7,



 int VAR_8)
{
 kern_return_t VAR_9 = VAR_6;

 kcdata_descriptor_t VAR_10 = ((void*)0);
 kcdata_descriptor_t VAR_11 = ((void*)0);
 mach_msg_type_number_t VAR_12 = VAR_0;
 mach_vm_offset_t VAR_13 = 0;
 void *VAR_14 = ((void*)0);
 void *VAR_15 = ((void*)0);




 if (!FUNC_2()) {
  return VAR_4;
 }





 FUNC_11(VAR_7);

 FUNC_0(VAR_8 || VAR_7->bsd_info != ((void*)0));
 if (VAR_7->corpse_info == ((void*)0) && (VAR_8 || VAR_7->bsd_info != ((void*)0))) {






  FUNC_12(VAR_7);

  VAR_14 = (void *) FUNC_3(VAR_0);
  if (VAR_14 == ((void*)0)) {
   VAR_9 = VAR_5;
   goto out_no_lock;
  }
  FUNC_1(VAR_14, VAR_0);
  VAR_13 = (mach_vm_offset_t) VAR_14;


  VAR_10 = FUNC_9((mach_vm_address_t)VAR_13, VAR_12,
    VAR_8 ? 0 : VAR_1,
    VAR_2);
  if (VAR_10) {
   FUNC_11(VAR_7);
   VAR_11 = VAR_7->corpse_info;
   VAR_15 = FUNC_4(VAR_11);
   VAR_7->corpse_info = VAR_10;

   FUNC_12(VAR_7);
   VAR_9 = VAR_6;
  } else {
   FUNC_5(VAR_14, VAR_0);
   VAR_9 = VAR_3;
  }

  if (VAR_11 != ((void*)0)) {
   FUNC_10(VAR_11);
  }
  if (VAR_15 != ((void*)0)) {
   FUNC_5(VAR_15, VAR_0);
  }
 } else {
  FUNC_12(VAR_7);
 }

out_no_lock:





 return VAR_9;
}
