
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct ghash_desc_ctx {int * buffer; } ;
struct ghash_ctx {int gf128; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ghash_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct ghash_ctx*,struct ghash_desc_ctx*) ;
 int FUNC_2 (int *,int *,int ) ;
 struct ghash_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_2, u8 *VAR_3)
{
 struct ghash_desc_ctx *VAR_4 = FUNC_3(VAR_2);
 struct ghash_ctx *VAR_5 = FUNC_0(VAR_2->tfm);
 u8 *VAR_6 = VAR_4->buffer;

 if (!VAR_5->gf128)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_4);
 FUNC_2(VAR_3, VAR_6, VAR_1);

 return 0;
}
