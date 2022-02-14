
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ ppnum_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__,void*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (char*,void*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_9(
  vm_offset_t VAR_8,
  vm_size_t VAR_9)
{
 vm_offset_t VAR_10;
 ppnum_t VAR_11;
 uint32_t VAR_12 = 0;


 if (VAR_8 < VAR_2)
  return;

 FUNC_0((VAR_8 & (VAR_1 - 1)) == 0);

 for (VAR_10 = VAR_8;
      VAR_10 < FUNC_5(VAR_8 + VAR_9);
      VAR_10 += VAR_1) {

  VAR_11 = FUNC_4(VAR_5, VAR_10);
  if (VAR_11 != (vm_offset_t) ((void*)0)) {






   if (FUNC_2(VAR_10, VAR_1, VAR_4 | VAR_3) != VAR_0) {
    FUNC_3("Failed ml_static_mfree on %p", (void *) VAR_10);
   }
   FUNC_6(VAR_11, (VAR_11 + 1));
   VAR_12++;
  }
 }
 FUNC_7();
 VAR_6 -= VAR_12;
 VAR_7 -= VAR_12;
 FUNC_8();



}
