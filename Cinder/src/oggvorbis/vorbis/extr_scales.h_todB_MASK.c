
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_uint32_t ;



__attribute__((used)) static inline float FUNC_0(const float *VAR_0){
  union {
    ogg_uint32_t i;
    float f;
  } VAR_1;
  VAR_1.f = *VAR_0;
  VAR_1.i = VAR_1.i&0x7fffffff;
  return (float)(VAR_1.i * 7.17711438e-7f -764.6161886f);
}
