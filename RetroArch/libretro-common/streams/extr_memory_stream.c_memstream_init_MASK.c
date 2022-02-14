
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {unsigned int writing; scalar_t__ max_ptr; scalar_t__ ptr; int size; int * buf; } ;
typedef TYPE_1__ memstream_t ;



__attribute__((used)) static void FUNC_0(memstream_t *VAR_0,
      uint8_t *VAR_1, uint64_t VAR_2, unsigned VAR_3)
{
   if (!VAR_0)
      return;

   VAR_0->buf = VAR_1;
   VAR_0->size = VAR_2;
   VAR_0->ptr = 0;
   VAR_0->max_ptr = 0;
   VAR_0->writing = VAR_3;
}
