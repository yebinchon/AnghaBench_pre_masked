
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code_bits; int nomore; unsigned char marker; unsigned int code_buffer; int s; } ;
typedef TYPE_1__ stbi__jpeg ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(stbi__jpeg *VAR_0)
{
   do {
      unsigned int VAR_1 = VAR_0->nomore ? 0 : FUNC_0(VAR_0->s);
      if (VAR_1 == 0xff) {
         int VAR_2 = FUNC_0(VAR_0->s);
         while (VAR_2 == 0xff) VAR_2 = FUNC_0(VAR_0->s);
         if (VAR_2 != 0) {
            VAR_0->marker = (unsigned char) VAR_2;
            VAR_0->nomore = 1;
            return;
         }
      }
      VAR_0->code_buffer |= VAR_1 << (24 - VAR_0->code_bits);
      VAR_0->code_bits += 8;
   } while (VAR_0->code_bits <= 24);
}
