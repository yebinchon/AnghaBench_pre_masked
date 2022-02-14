
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ sc_out_buffer_addr; scalar_t__ sc_out_size_addr; int sc_pid; int sc_flags; scalar_t__ sc_delta_timestamp; int sc_size; } ;
typedef TYPE_1__ stackshot_config_t ;
typedef int mach_vm_address_t ;
typedef int kern_return_t ;
typedef int * kcdata_descriptor_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void**,int*) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,void*,int,int,int *,scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int FUNC_11 (int ,int *,int,int ) ;
 int FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 () ;
 int VAR_29 ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int VAR_30 ;
 scalar_t__* VAR_31 ;
 int * VAR_32 ;
 int FUNC_15 (void*,int,scalar_t__,scalar_t__) ;
 int FUNC_16 () ;

kern_return_t
FUNC_17(int VAR_33, void *VAR_34, size_t VAR_35, boolean_t VAR_36)
{
 int VAR_37 = 0;
 boolean_t VAR_38;
 uint32_t VAR_39 = 0;
 uint32_t VAR_40 = 0;
 void * VAR_41 = ((void*)0);
 kcdata_descriptor_t VAR_42 = ((void*)0);

 void * VAR_43 = ((void*)0);
 int VAR_44 = 0;


 uint64_t VAR_45;
 uint64_t VAR_46;
 int VAR_47 = -1;
 uint32_t VAR_48;
 uint64_t VAR_49;
 uint32_t VAR_50 = 0;

 if(VAR_34 == ((void*)0)) {
  return VAR_7;
 }
 switch (VAR_33) {
  case 128:
   if (VAR_35 != sizeof(stackshot_config_t)) {
    return VAR_7;
   }
   stackshot_config_t *VAR_51 = (stackshot_config_t *) VAR_34;
   VAR_45 = VAR_51->sc_out_buffer_addr;
   VAR_46 = VAR_51->sc_out_size_addr;
   VAR_47 = VAR_51->sc_pid;
   VAR_48 = VAR_51->sc_flags;
   VAR_49 = VAR_51->sc_delta_timestamp;
   if (VAR_51->sc_size <= VAR_29) {
    VAR_50 = VAR_51->sc_size;
   }
   break;
  default:
   return VAR_10;
     }





     if (VAR_36) {
      if (VAR_48 & (VAR_23 | VAR_22 | VAR_17)) {
       return VAR_11;
      }
     } else {
  if (!(VAR_48 & VAR_22)) {
   return VAR_10;
  }
 }

 if (!((VAR_48 & VAR_20) || (VAR_48 & VAR_21))) {
  return VAR_10;
 }




 if ((!VAR_45 || !VAR_46) && !(VAR_48 & VAR_22)) {
  return VAR_7;
 }

 if (VAR_49 != 0 && ((VAR_48 & VAR_16) == 0)) {
  return VAR_7;
 }






 VAR_48 &= ~VAR_19;


 FUNC_0();

 if (VAR_48 & VAR_22) {



  if (VAR_27 != ((void*)0)) {
   VAR_37 = VAR_8;
   goto error_exit;
  }
 } else if (VAR_48 & VAR_21) {
  if ((VAR_27 == ((void*)0)) || (VAR_28 <= 0)) {
   VAR_37 = VAR_9;
   goto error_exit;
  }
  VAR_37 = FUNC_15(VAR_27, VAR_28,
      VAR_45, VAR_46);





  if (VAR_37 == VAR_13) {
   VAR_43 = VAR_27;
   VAR_44 = (int) FUNC_2(VAR_28, VAR_15);
   VAR_27 = ((void*)0);
   VAR_28 = 0;
  }

  goto error_exit;
 }

 if (VAR_48 & VAR_18) {
  void *VAR_52 = ((void*)0);
  uint32_t VAR_53 = 0;



  if (!VAR_52 || !VAR_53) {
   VAR_37 = VAR_9;
   goto error_exit;
  }
  VAR_37 = FUNC_15(VAR_52, VAR_53, VAR_45, VAR_46);
  goto error_exit;
 }

 VAR_40 = FUNC_5(VAR_50);

 for (; VAR_40 <= VAR_29; VAR_40 <<= 1) {
  if (FUNC_11(VAR_26, (vm_offset_t *)&VAR_41, VAR_40, VAR_25) != VAR_13) {
   VAR_37 = VAR_12;
   goto error_exit;
  }


  uint32_t VAR_54 = (VAR_48 & VAR_16) ? VAR_1 : VAR_2;
  VAR_42 = FUNC_6((mach_vm_address_t)VAR_41, VAR_54, VAR_40,
                                       VAR_4 | VAR_3);

  VAR_31 = ((void*)0);
  uint64_t VAR_55 = FUNC_13();




  VAR_38 = FUNC_14(VAR_0);




  FUNC_8(VAR_47, VAR_41, VAR_40, VAR_48, VAR_42, VAR_49);

  VAR_37 = FUNC_16();

  FUNC_14(VAR_38);



  uint64_t VAR_56 = FUNC_13();
  if (VAR_31) {
   *VAR_31 = VAR_56 - VAR_55;
  }

  if (VAR_37 != VAR_13) {
   if (VAR_42 != ((void*)0)) {
    FUNC_7(VAR_42);
    VAR_42 = ((void*)0);
    VAR_32 = ((void*)0);
   }
   FUNC_12(VAR_26, (vm_offset_t)VAR_41, VAR_40);
   VAR_41 = ((void*)0);
   if (VAR_37 == VAR_6) {



    continue;
   } else {
    goto error_exit;
   }
  }

  VAR_39 = FUNC_9();

  if (VAR_39 <= 0) {
   VAR_37 = VAR_5;
   goto error_exit;
  }

  FUNC_3(VAR_39 <= VAR_40);
  if (!(VAR_48 & VAR_22)) {
   VAR_37 = FUNC_15(VAR_41, VAR_39, VAR_45, VAR_46);
   goto error_exit;
  }




  VAR_27 = VAR_41;
  VAR_28 = VAR_39;





  VAR_44 = VAR_40 - (int) FUNC_2(VAR_39, VAR_15);

  FUNC_3(VAR_44 >= 0);

  if (VAR_44 != 0) {
   VAR_43 = (void *)((uint64_t)VAR_41 + VAR_40 - VAR_44);
  }

  VAR_41 = ((void*)0);
  VAR_40 = 0;
  goto error_exit;
 }

 if (VAR_40 > VAR_29) {
  VAR_37 = VAR_12;
 }

error_exit:
 if (VAR_42 != ((void*)0)) {
  FUNC_7(VAR_42);
  VAR_42 = ((void*)0);
  VAR_32 = ((void*)0);
 }

 if (VAR_41 != ((void*)0)) {
  FUNC_12(VAR_26, (vm_offset_t)VAR_41, VAR_40);
 }
 if (VAR_43 != ((void*)0)) {
  FUNC_12(VAR_26, (vm_offset_t)VAR_43, VAR_44);
 }
 FUNC_1();
 return VAR_37;
}
