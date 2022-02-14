
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_desc_ctx {int bytes; int * buffer; } ;
struct ghash_ctx {int gf128; } ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ghash_ctx *VAR_1, struct ghash_desc_ctx *VAR_2)
{
 u8 *VAR_3 = VAR_2->buffer;

 if (VAR_2->bytes) {
  u8 *VAR_4 = VAR_3 + (VAR_0 - VAR_2->bytes);

  while (VAR_2->bytes--)
   *VAR_4++ ^= 0;

  FUNC_0((be128 *)VAR_3, VAR_1->gf128);
 }

 VAR_2->bytes = 0;
}
