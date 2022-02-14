
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



inline uint32 FUNC_0(float VAR_0) {
 union {
  uint32 a;
  float b;
 } VAR_1;
 VAR_1.b = VAR_0;
 return VAR_1.a;
}
