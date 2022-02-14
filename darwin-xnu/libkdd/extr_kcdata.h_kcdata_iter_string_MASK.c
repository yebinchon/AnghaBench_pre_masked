
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int kcdata_iter_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static inline
char *FUNC_3(kcdata_iter_t VAR_0, uint32_t VAR_1) {
 if (VAR_1 > FUNC_1(VAR_0)) {
  return ((void*)0);
 }
 uint32_t VAR_2 = FUNC_1(VAR_0) - VAR_1;
 char *VAR_3 = ((char*)FUNC_0(VAR_0)) + VAR_1;
 if (FUNC_2(VAR_3, VAR_2) < VAR_2) {
  return VAR_3;
 } else {
  return ((void*)0);
 }
}
