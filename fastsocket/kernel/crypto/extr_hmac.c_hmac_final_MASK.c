
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int flags; struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 scalar_t__ FUNC_2 (struct shash_desc*,int *) ;
 int FUNC_3 (struct shash_desc*,int *,int,int *) ;
 scalar_t__ FUNC_4 (struct shash_desc*,char*) ;
 int FUNC_5 (struct crypto_shash*) ;
 struct shash_desc* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_1, u8 *VAR_2)
{
 struct crypto_shash *VAR_3 = VAR_1->tfm;
 int VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = FUNC_5(VAR_3);
 char *VAR_6 = FUNC_0(VAR_3) + VAR_5;
 struct shash_desc *VAR_7 = FUNC_6(VAR_1);

 VAR_7->flags = VAR_1->flags & VAR_0;

 return FUNC_2(VAR_7, VAR_2) ?:
        FUNC_4(VAR_7, VAR_6) ?:
        FUNC_3(VAR_7, VAR_2, VAR_4, VAR_2);
}
