
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;



inline uint64 FUNC_0(double VAR_0) {
 union {
  uint64 a;
  double b;
 } VAR_1;
 VAR_1.b = VAR_0;
 return VAR_1.a;
}
