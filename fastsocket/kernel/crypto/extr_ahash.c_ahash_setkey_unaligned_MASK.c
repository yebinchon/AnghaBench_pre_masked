
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int (* setkey ) (struct crypto_ahash*,int *,unsigned int) ;} ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct crypto_ahash*) ;
 int * FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,unsigned int) ;
 int FUNC_5 (struct crypto_ahash*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_ahash *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 u8 *VAR_7, *VAR_8;
 unsigned long VAR_9;

 VAR_9 = VAR_4 + VAR_5;
 VAR_7 = FUNC_2(VAR_9, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = (u8 *)FUNC_0((unsigned long)VAR_7, VAR_5 + 1);
 FUNC_4(VAR_8, VAR_3, VAR_4);
 VAR_6 = VAR_2->setkey(VAR_2, VAR_8, VAR_4);
 FUNC_3(VAR_7);
 return VAR_6;
}
