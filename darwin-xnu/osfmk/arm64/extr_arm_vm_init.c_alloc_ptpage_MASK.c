
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

vm_offset_t FUNC_2(boolean_t VAR_6) {
 vm_offset_t VAR_7;


 VAR_6 = VAR_1;


 if (!VAR_3) {
  VAR_3 = (vm_offset_t)&VAR_4;
 }

 if (VAR_6) {
  FUNC_0(VAR_3 < (vm_offset_t)&VAR_5);

  VAR_7 = VAR_3;
  VAR_3 += VAR_0;

  return VAR_7;
 } else {
  VAR_7 = FUNC_1(VAR_2);
  VAR_2 += VAR_0;

  return VAR_7;
 }
}
