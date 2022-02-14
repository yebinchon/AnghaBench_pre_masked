
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rpng_process {scalar_t__ adam7_restore_buf_size; int inflate_buf; int * data; int pass_pos; } ;
struct png_ihdr {int dummy; } ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int **,struct png_ihdr const*,struct rpng_process*) ;

__attribute__((used)) static int FUNC_2(uint32_t **VAR_0,
      const struct png_ihdr *VAR_1,
      struct rpng_process *VAR_2)
{
   int VAR_3 = FUNC_1(VAR_0,
         VAR_1, VAR_2);

   switch (VAR_3)
   {
      case 129:
      case 131:
         break;
      case 128:
         VAR_2->pass_pos++;
         return 0;
      case 130:
         if (VAR_2->data)
         {
            FUNC_0(VAR_2->data);
            VAR_2->data = ((void*)0);
         }
         VAR_2->inflate_buf -= VAR_2->adam7_restore_buf_size;
         VAR_2->adam7_restore_buf_size = 0;
         return -1;
   }

   VAR_2->inflate_buf -= VAR_2->adam7_restore_buf_size;
   VAR_2->adam7_restore_buf_size = 0;
   return VAR_3;
}
