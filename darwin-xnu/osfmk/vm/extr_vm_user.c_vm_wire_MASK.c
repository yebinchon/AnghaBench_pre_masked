
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_map_t ;
typedef int kern_return_t ;
typedef int * host_priv_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int,int ,int ) ;

kern_return_t
FUNC_6(
 host_priv_t VAR_11,
 vm_map_t VAR_12,
 vm_offset_t VAR_13,
 vm_size_t VAR_14,
 vm_prot_t VAR_15)
{
 kern_return_t VAR_16;

 if (VAR_11 == VAR_0)
  return VAR_2;

 FUNC_1(VAR_11 == &VAR_10);

 if (VAR_12 == VAR_7)
  return VAR_3;

 if ((VAR_15 & ~VAR_8) || (VAR_13 + VAR_14 < VAR_13))
  return VAR_1;

 if (VAR_14 == 0) {
  VAR_16 = VAR_4;
 } else if (VAR_15 != VAR_9) {
  VAR_16 = FUNC_5(VAR_12,
     FUNC_3(VAR_13,
         FUNC_0(VAR_12)),
     FUNC_2(VAR_13+VAR_14,
         FUNC_0(VAR_12)),
     VAR_15, VAR_6,
     VAR_5);
 } else {
  VAR_16 = FUNC_4(VAR_12,
       FUNC_3(VAR_13,
           FUNC_0(VAR_12)),
       FUNC_2(VAR_13+VAR_14,
           FUNC_0(VAR_12)),
       VAR_5);
 }
 return VAR_16;
}
