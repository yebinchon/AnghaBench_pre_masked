
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kcdata_descriptor {int dummy; } ;
typedef int mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (struct kcdata_descriptor*,int ,int,int,int) ;
 int FUNC_4 (int,void*,int,int,struct kcdata_descriptor*,int ) ;
 unsigned int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int * VAR_14 ;
 scalar_t__ FUNC_8 () ;

kern_return_t
FUNC_9(int VAR_15, void *VAR_16, uint32_t VAR_17, uint32_t VAR_18, uint64_t VAR_19, unsigned *VAR_20)
{
 kern_return_t VAR_21 = VAR_8;
 boolean_t VAR_22;







 if ((VAR_16 == ((void*)0)) || (VAR_17 <= 0) || (VAR_20 == ((void*)0))) {
  return VAR_5;
 }


 if (VAR_17 > VAR_13) {
  VAR_17 = VAR_13;
 }


 if (VAR_18 & VAR_11) {
  if (!FUNC_1()) {
   return VAR_6;
  }
 } else {
  FUNC_0();
 }

 struct kcdata_descriptor VAR_23;
 uint32_t VAR_24 = (VAR_18 & VAR_10) ?
  VAR_1 : VAR_2;

 VAR_21 = FUNC_3(&VAR_23, (mach_vm_address_t)VAR_16, VAR_24, VAR_17,
           VAR_4 | VAR_3);
 if (VAR_21) {
  goto out;
 }

 VAR_22 = FUNC_7(VAR_0);


 FUNC_4(VAR_15, VAR_16, VAR_17, VAR_18, &VAR_23, VAR_19);





 VAR_21 = FUNC_8();

 FUNC_7(VAR_22);

 *VAR_20 = FUNC_5();

out:
 VAR_14 = ((void*)0);
 FUNC_2();
 return VAR_21;
}
