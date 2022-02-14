
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_uint32_t ;



__attribute__((used)) static ogg_uint32_t FUNC_0(ogg_uint32_t VAR_0){
  VAR_0= ((VAR_0>>16)&0x0000ffffUL) | ((VAR_0<<16)&0xffff0000UL);
  VAR_0= ((VAR_0>> 8)&0x00ff00ffUL) | ((VAR_0<< 8)&0xff00ff00UL);
  VAR_0= ((VAR_0>> 4)&0x0f0f0f0fUL) | ((VAR_0<< 4)&0xf0f0f0f0UL);
  VAR_0= ((VAR_0>> 2)&0x33333333UL) | ((VAR_0<< 2)&0xccccccccUL);
  return((VAR_0>> 1)&0x55555555UL) | ((VAR_0<< 1)&0xaaaaaaaaUL);
}
