
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct Pass {int dummy; } ;
typedef int rglgen_proc_address_t ;
struct TYPE_6__ {unsigned int steps; unsigned int depth; int size; int block_size; unsigned int passes_size; int sliding_size; int * sliding; struct Pass* passes; } ;
typedef TYPE_1__ fft_t ;
typedef int GLshort ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(fft_t *VAR_0, unsigned VAR_1,
      rglgen_proc_address_t VAR_2, unsigned VAR_3)
{
   FUNC_5(VAR_2);

   VAR_0->steps = VAR_1;
   VAR_0->depth = VAR_3;
   VAR_0->size = 1 << VAR_1;
   VAR_0->block_size = VAR_0->size / 4 + 1;

   VAR_0->passes_size = VAR_1;
   VAR_0->passes = (struct Pass*)FUNC_1(VAR_0->passes_size, sizeof(struct Pass));

   if (!VAR_0->passes)
      return 0;

   VAR_0->sliding_size = 2 * VAR_0->size;
   VAR_0->sliding = (GLshort*)FUNC_1(VAR_0->sliding_size, sizeof(GLshort));

   if (!VAR_0->sliding)
      return 0;

   FUNC_0();
   FUNC_4(VAR_0);
   FUNC_0();
   FUNC_2(VAR_0);
   FUNC_0();
   FUNC_3(VAR_0);
   FUNC_0();

   return 1;
}
