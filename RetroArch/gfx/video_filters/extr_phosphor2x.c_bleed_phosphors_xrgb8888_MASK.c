
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct filter_data {unsigned int phosphor_bleed; unsigned int* phosphor_bloom_8888; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(void *VAR_0,
      uint32_t *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;
   struct filter_data *VAR_4 = (struct filter_data*)VAR_0;


   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 2)
   {
      unsigned VAR_5 = FUNC_3(VAR_1[VAR_3]);
      unsigned VAR_6 = FUNC_1(VAR_5 * VAR_4->phosphor_bleed *
            VAR_4->phosphor_bloom_8888[VAR_5]);
      FUNC_6(VAR_1[VAR_3 + 1], VAR_6);
   }


   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      unsigned VAR_7 = FUNC_2(VAR_1[VAR_3]);
      unsigned VAR_8 = FUNC_1((VAR_7 >> 1) + 0.5 * VAR_7 *
            VAR_4->phosphor_bleed * VAR_4->phosphor_bloom_8888[VAR_7]);
      FUNC_5(VAR_1[VAR_3], VAR_8);
   }


   FUNC_4(VAR_1[0], 0);
   for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3 += 2)
   {
      unsigned VAR_9 = FUNC_0(VAR_1[VAR_3]);
      unsigned VAR_10 = FUNC_1(VAR_9 * VAR_4->phosphor_bleed *
            VAR_4->phosphor_bloom_8888[VAR_9]);
      FUNC_4(VAR_1[VAR_3 + 1], VAR_10);
   }
}
