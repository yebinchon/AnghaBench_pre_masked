
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
union interp_cast {int as_int; int as_flt; } ;
typedef int uint64_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint64_t FUNC_1(var VAR_0) {
  union interp_cast VAR_1;
  VAR_1.as_flt = FUNC_0(VAR_0);
  return VAR_1.as_int;
}
