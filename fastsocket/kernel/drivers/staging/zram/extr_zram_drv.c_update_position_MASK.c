
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bio_vec {int bv_len; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_1, int *VAR_2, struct bio_vec *VAR_3)
{
 if (*VAR_2 + VAR_3->bv_len >= VAR_0)
  (*VAR_1)++;
 *VAR_2 = (*VAR_2 + VAR_3->bv_len) % VAR_0;
}
