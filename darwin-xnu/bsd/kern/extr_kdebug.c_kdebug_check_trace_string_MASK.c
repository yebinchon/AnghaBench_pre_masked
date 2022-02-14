
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static errno_t
FUNC_1(uint32_t VAR_5, uint64_t VAR_6)
{

 if (VAR_5 & ~VAR_2) {
  return VAR_0;
 }

 if (FUNC_0(VAR_5)) {
  return VAR_1;
 }

 if (VAR_6 != 0 && (VAR_6 & VAR_3) != VAR_4) {
  return VAR_0;
 }

 return 0;
}
