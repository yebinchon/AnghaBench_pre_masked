
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct shash_desc {int flags; struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct shash_desc*,int const*,int,int const*) ;
 scalar_t__ FUNC_3 (struct shash_desc*,char*) ;
 int FUNC_4 (struct crypto_shash*) ;
 struct shash_desc* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3, u8 *VAR_4)
{

 struct crypto_shash *VAR_5 = VAR_1->tfm;
 int VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = FUNC_4(VAR_5);
 char *VAR_8 = FUNC_0(VAR_5) + VAR_7;
 struct shash_desc *VAR_9 = FUNC_5(VAR_1);

 VAR_9->flags = VAR_1->flags & VAR_0;

 return FUNC_2(VAR_9, VAR_2, VAR_3, VAR_4) ?:
        FUNC_3(VAR_9, VAR_8) ?:
        FUNC_2(VAR_9, VAR_4, VAR_6, VAR_4);
}
