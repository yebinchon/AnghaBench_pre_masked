
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto4xx_device {int scatter_buffer_size; scalar_t__ scatter_buffer_va; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct crypto4xx_device *VAR_1,
       dma_addr_t *VAR_2, u32 *VAR_3,
       u32 *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 u32 VAR_7;

 if (*VAR_3 > VAR_1->scatter_buffer_size) {
  FUNC_0(FUNC_1(*VAR_2),
   VAR_1->scatter_buffer_va +
   *VAR_4 * VAR_1->scatter_buffer_size + *VAR_5,
   VAR_1->scatter_buffer_size);
  *VAR_5 = 0;
  *VAR_3 -= VAR_1->scatter_buffer_size;
  *VAR_6 -= VAR_1->scatter_buffer_size;
  if (*VAR_4 == VAR_0)
   *VAR_4 = 0;
  else
   (*VAR_4)++;
  *VAR_2 = *VAR_2 + VAR_1->scatter_buffer_size;
  return 1;
 } else if (*VAR_3 < VAR_1->scatter_buffer_size) {
  FUNC_0(FUNC_1(*VAR_2),
   VAR_1->scatter_buffer_va +
   *VAR_4 * VAR_1->scatter_buffer_size + *VAR_5, *VAR_3);
  if ((*VAR_5 + *VAR_3) == VAR_1->scatter_buffer_size) {
   if (*VAR_4 == VAR_0)
    *VAR_4 = 0;
   else
    (*VAR_4)++;
   *VAR_6 -= *VAR_3;
   *VAR_5 = 0;
  } else {
   *VAR_6 -= *VAR_3;
   *VAR_5 += *VAR_3;
  }

  return 0;
 } else {
  VAR_7 = (*VAR_6 <= VAR_1->scatter_buffer_size) ?
    (*VAR_6) : VAR_1->scatter_buffer_size;
  FUNC_0(FUNC_1(*VAR_2),
   VAR_1->scatter_buffer_va +
   *VAR_4 * VAR_1->scatter_buffer_size + *VAR_5,
   VAR_7);
  *VAR_5 = 0;
  *VAR_6 -= VAR_7;

  if (*VAR_4 == VAR_0)
   *VAR_4 = 0;
  else
   (*VAR_4)++;

  return 0;
    }
}
