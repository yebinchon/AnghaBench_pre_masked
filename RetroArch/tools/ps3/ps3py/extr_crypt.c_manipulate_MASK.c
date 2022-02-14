
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0)
{
   uint64_t VAR_1 = VAR_0[0x38] << 56|
      VAR_0[0x39] << 48|
      VAR_0[0x3a] << 40|
      VAR_0[0x3b] << 32|
      VAR_0[0x3c] << 24|
      VAR_0[0x3d] << 16|
      VAR_0[0x3e] << 8|
      VAR_0[0x3f];
   VAR_1++;
   VAR_0[0x38] = (VAR_1 >> 56) & 0xff;
   VAR_0[0x39] = (VAR_1 >> 48) & 0xff;
   VAR_0[0x3a] = (VAR_1 >> 40) & 0xff;
   VAR_0[0x3b] = (VAR_1 >> 32) & 0xff;
   VAR_0[0x3c] = (VAR_1 >> 24) & 0xff;
   VAR_0[0x3d] = (VAR_1 >> 16) & 0xff;
   VAR_0[0x3e] = (VAR_1 >> 8) & 0xff;
   VAR_0[0x3f] = (VAR_1 >> 0) & 0xff;
}
