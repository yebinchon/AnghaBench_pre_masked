
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int kern_return_t ;
typedef int * host_priv_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int,int ,int ) ;

kern_return_t
FUNC_6(
 host_priv_t VAR_9,
 vm_map_t VAR_10,
 mach_vm_offset_t VAR_11,
 mach_vm_size_t VAR_12,
 vm_prot_t VAR_13,
 vm_tag_t VAR_14)
{
 kern_return_t VAR_15;

 if (VAR_9 == VAR_0)
  return VAR_2;

 FUNC_1(VAR_9 == &VAR_8);

 if (VAR_10 == VAR_5)
  return VAR_3;

 if (VAR_13 & ~VAR_6 || (VAR_11 + VAR_12 < VAR_11))
  return VAR_1;

 if (VAR_13 != VAR_7) {
  VAR_15 = FUNC_5(VAR_10,
     FUNC_3(VAR_11,
         FUNC_0(VAR_10)),
     FUNC_2(VAR_11+VAR_12,
         FUNC_0(VAR_10)),
     VAR_13, VAR_14,
     VAR_4);
 } else {
  VAR_15 = FUNC_4(VAR_10,
       FUNC_3(VAR_11,
           FUNC_0(VAR_10)),
       FUNC_2(VAR_11+VAR_12,
           FUNC_0(VAR_10)),
       VAR_4);
 }
 return VAR_15;
}
