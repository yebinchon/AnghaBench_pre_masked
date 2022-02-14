
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct png_ihdr {int dummy; } ;
struct rpng_process {size_t pass_pos; int adam7_pass_initialized; scalar_t__ pass_size; int pass_height; int pass_width; int * data; int total_out; int adam7_restore_buf_size; int inflate_buf; struct png_ihdr const ihdr; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * VAR_4 ;
 int FUNC_2 (int *,struct png_ihdr const*,int *,int ,int ,int *) ;
 int FUNC_3 (struct png_ihdr const*,struct rpng_process*) ;
 int FUNC_4 (int **,struct png_ihdr const*,struct rpng_process*) ;

__attribute__((used)) static int FUNC_5(uint32_t **VAR_5,
      const struct png_ihdr *VAR_6,
      struct rpng_process *VAR_7)
{
   int VAR_8 = 0;
   bool VAR_9 = VAR_7->pass_pos < FUNC_0(VAR_4);
   uint32_t *VAR_10 = *VAR_5;

   if (!VAR_9)
      return VAR_0;

   VAR_8 = FUNC_3(VAR_6, VAR_7);

   if (VAR_8 == 1)
      return VAR_3;
   if (VAR_8 == -1)
      return VAR_2;

   if (FUNC_3(&VAR_7->ihdr, VAR_7) == -1)
      return VAR_1;

   do{
      VAR_8 = FUNC_4(&VAR_7->data,
            &VAR_7->ihdr, VAR_7);
   }while(VAR_8 == VAR_3);

   if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
      return VAR_1;

   VAR_7->inflate_buf += VAR_7->pass_size;
   VAR_7->adam7_restore_buf_size += VAR_7->pass_size;

   VAR_7->total_out -= VAR_7->pass_size;

   FUNC_2(VAR_10,
         VAR_6, VAR_7->data, VAR_7->pass_width, VAR_7->pass_height, &VAR_4[VAR_7->pass_pos]);

   FUNC_1(VAR_7->data);

   VAR_7->data = ((void*)0);
   VAR_7->pass_width = 0;
   VAR_7->pass_height = 0;
   VAR_7->pass_size = 0;
   VAR_7->adam7_pass_initialized = 0;

   return VAR_3;
}
