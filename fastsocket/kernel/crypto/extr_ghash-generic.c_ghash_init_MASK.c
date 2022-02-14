
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct ghash_desc_ctx {int dummy; } ;


 int FUNC_0 (struct ghash_desc_ctx*,int ,int) ;
 struct ghash_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0)
{
 struct ghash_desc_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 return 0;
}
