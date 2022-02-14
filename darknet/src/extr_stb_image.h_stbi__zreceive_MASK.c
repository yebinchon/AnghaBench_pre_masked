
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_bits; int code_buffer; } ;
typedef TYPE_1__ stbi__zbuf ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static unsigned int FUNC_1(stbi__zbuf *VAR_0, int VAR_1)
{
   unsigned int VAR_2;
   if (VAR_0->num_bits < VAR_1) FUNC_0(VAR_0);
   VAR_2 = VAR_0->code_buffer & ((1 << VAR_1) - 1);
   VAR_0->code_buffer >>= VAR_1;
   VAR_0->num_bits -= VAR_1;
   return VAR_2;
}
