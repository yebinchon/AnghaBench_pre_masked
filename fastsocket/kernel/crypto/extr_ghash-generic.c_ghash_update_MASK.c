
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct ghash_desc_ctx {int bytes; int * buffer; } ;
struct ghash_ctx {int gf128; } ;
typedef int be128 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ghash_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int,int) ;
 struct ghash_desc_ctx* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_2,
    const u8 *VAR_3, unsigned int VAR_4)
{
 struct ghash_desc_ctx *VAR_5 = FUNC_4(VAR_2);
 struct ghash_ctx *VAR_6 = FUNC_0(VAR_2->tfm);
 u8 *VAR_7 = VAR_5->buffer;

 if (!VAR_6->gf128)
  return -VAR_0;

 if (VAR_5->bytes) {
  int VAR_8 = FUNC_3(VAR_4, VAR_5->bytes);
  u8 *VAR_9 = VAR_7 + (VAR_1 - VAR_5->bytes);

  VAR_5->bytes -= VAR_8;
  VAR_4 -= VAR_8;

  while (VAR_8--)
   *VAR_9++ ^= *VAR_3++;

  if (!VAR_5->bytes)
   FUNC_2((be128 *)VAR_7, VAR_6->gf128);
 }

 while (VAR_4 >= VAR_1) {
  FUNC_1(VAR_7, VAR_3, VAR_1);
  FUNC_2((be128 *)VAR_7, VAR_6->gf128);
  VAR_3 += VAR_1;
  VAR_4 -= VAR_1;
 }

 if (VAR_4) {
  VAR_5->bytes = VAR_1 - VAR_4;
  while (VAR_4--)
   *VAR_7++ ^= *VAR_3++;
 }

 return 0;
}
