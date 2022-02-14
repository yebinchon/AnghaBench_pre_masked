
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int** S; } ;
typedef TYPE_1__ mbedtls_blowfish_context ;



__attribute__((used)) static uint32_t FUNC_0( mbedtls_blowfish_context *VAR_0, uint32_t VAR_1 )
{
   unsigned short VAR_2, VAR_3, VAR_4, VAR_5;
   uint32_t VAR_6;

   VAR_5 = (unsigned short)(VAR_1 & 0xFF);
   VAR_1 >>= 8;
   VAR_4 = (unsigned short)(VAR_1 & 0xFF);
   VAR_1 >>= 8;
   VAR_3 = (unsigned short)(VAR_1 & 0xFF);
   VAR_1 >>= 8;
   VAR_2 = (unsigned short)(VAR_1 & 0xFF);
   VAR_6 = VAR_0->S[0][VAR_2] + VAR_0->S[1][VAR_3];
   VAR_6 = VAR_6 ^ VAR_0->S[2][VAR_4];
   VAR_6 = VAR_6 + VAR_0->S[3][VAR_5];

   return( VAR_6 );
}
