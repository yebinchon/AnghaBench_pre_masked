
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(void) {
 uint32_t VAR_2 = 0;

 if (VAR_1 <= 8*VAR_0) {
  VAR_2 = (uint32_t)(VAR_1 / (2 * VAR_0));
 } else if (VAR_1 <= 32*VAR_0) {
  VAR_2 = 4 + (uint32_t)((VAR_1 - (8 * VAR_0))/ (4 * VAR_0));
 } else {
  VAR_2 = 10 + (uint32_t)FUNC_0(4, ((VAR_1 - (32 * VAR_0))/ (8 * VAR_0)));
 }
 return VAR_2;
}
