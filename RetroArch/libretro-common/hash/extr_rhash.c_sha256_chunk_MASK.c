
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ u8; } ;
struct sha256_ctx {int inlen; TYPE_1__ in; int len; } ;


 int FUNC_0 (scalar_t__,int const*,unsigned int) ;
 int FUNC_1 (struct sha256_ctx*) ;

__attribute__((used)) static void FUNC_2(struct sha256_ctx *VAR_0,
      const uint8_t *VAR_1, unsigned VAR_2)
{
   VAR_0->len += VAR_2;

   while (VAR_2)
   {
      unsigned VAR_3 = 64 - VAR_0->inlen;

      if (VAR_2 < VAR_3)
         VAR_3 = VAR_2;

      FUNC_0(VAR_0->in.u8 + VAR_0->inlen, VAR_1, VAR_3);

      VAR_1 += VAR_3;
      VAR_0->inlen += VAR_3;
      VAR_2 -= VAR_3;

      if (VAR_0->inlen == 64)
         FUNC_1(VAR_0);
   }
}
