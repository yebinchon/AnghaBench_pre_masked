
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_page_t ;
typedef scalar_t__ vm_offset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;

void
FUNC_9(
 vm_page_t VAR_3,
 vm_offset_t VAR_4,
 vm_size_t VAR_5)
{
 vm_page_t VAR_6;
 while (1) {
         VAR_6 = FUNC_5();
  if (VAR_6 == VAR_2) {
   FUNC_7(VAR_1);
   continue;
  }
  break;
 }
 FUNC_8(VAR_6);
 if(VAR_4 != 0) {
  FUNC_6(VAR_3, 0, VAR_6, 0, VAR_4);
 }
 if((VAR_4 + VAR_5) < VAR_0) {
  FUNC_6(VAR_3, VAR_4 + VAR_5, VAR_6,
    VAR_4 + VAR_5, VAR_0 - (VAR_4 + VAR_5));
 }
 FUNC_4(VAR_6,VAR_3);
 FUNC_1(VAR_6);


}
