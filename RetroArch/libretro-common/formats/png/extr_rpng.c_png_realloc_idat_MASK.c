
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct png_chunk {scalar_t__ size; } ;
struct idat_buffer {int * data; scalar_t__ size; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;

bool FUNC_1(const struct png_chunk *VAR_0, struct idat_buffer *VAR_1)
{
   uint8_t *VAR_2 = (uint8_t*)FUNC_0(VAR_1->data, VAR_1->size + VAR_0->size);

   if (!VAR_2)
      return 0;

   VAR_1->data = VAR_2;
   return 1;
}
