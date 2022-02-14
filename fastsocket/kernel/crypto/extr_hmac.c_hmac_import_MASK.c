
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int flags; int tfm; } ;
struct hmac_ctx {int hash; } ;


 int VAR_0 ;
 int FUNC_0 (struct shash_desc*,void const*) ;
 struct hmac_ctx* FUNC_1 (int ) ;
 struct shash_desc* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_1, const void *VAR_2)
{
 struct shash_desc *VAR_3 = FUNC_2(VAR_1);
 struct hmac_ctx *VAR_4 = FUNC_1(VAR_1->tfm);

 VAR_3->tfm = VAR_4->hash;
 VAR_3->flags = VAR_1->flags & VAR_0;

 return FUNC_0(VAR_3, VAR_2);
}
