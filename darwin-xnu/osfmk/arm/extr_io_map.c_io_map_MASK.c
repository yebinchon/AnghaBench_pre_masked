
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__,int*,int,int ) ;
 int FUNC_3 (int,int,int,int,unsigned int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int ) ;
 int FUNC_6 (int) ;
 int VAR_9 ;

vm_offset_t
FUNC_7(vm_map_offset_t VAR_10, vm_size_t VAR_11, unsigned int VAR_12)
{
 vm_offset_t VAR_13, VAR_14;

 VAR_14 = VAR_10 & VAR_0;
 VAR_11 += VAR_14;
 VAR_10 -= VAR_14;

 if (VAR_8 == VAR_3) {



  VAR_13 = VAR_9;
  VAR_9 += FUNC_6(VAR_11);

  FUNC_0(VAR_12 == VAR_7 || VAR_12 == VAR_6);

  if (VAR_12 == VAR_7) {
   (void) FUNC_5(VAR_13, VAR_10, VAR_10 + FUNC_6(VAR_11),
       VAR_4 | VAR_5, VAR_1);
  } else {
   (void) FUNC_4(VAR_13, VAR_10, VAR_10 + FUNC_6(VAR_11),
       VAR_4 | VAR_5);
  }
 } else {
  (void) FUNC_2(VAR_8, &VAR_13, FUNC_6(VAR_11), VAR_2);
  (void) FUNC_3(VAR_13, VAR_10, VAR_10 + FUNC_6(VAR_11),
    VAR_4 | VAR_5, VAR_12);
 }



 return (VAR_13 + VAR_14);
}
