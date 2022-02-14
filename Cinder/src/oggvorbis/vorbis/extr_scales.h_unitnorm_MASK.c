
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_uint32_t ;



__attribute__((used)) static inline float FUNC_0(float VAR_0){
  union {
    ogg_uint32_t i;
    float f;
  } VAR_1;
  VAR_1.f = VAR_0;
  VAR_1.i = (VAR_1.i & 0x80000000U) | (0x3f800000U);
  return VAR_1.f;
}
