
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct ahash_request {scalar_t__ result; } ;


 int FUNC_0 (struct ahash_request*,int (*) (struct ahash_request*)) ;
 unsigned long FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0,
      int (*VAR_1)(struct ahash_request *))
{
 struct crypto_ahash *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3 = FUNC_1(VAR_2);

 if ((unsigned long)VAR_0->result & VAR_3)
  return FUNC_0(VAR_0, VAR_1);

 return VAR_1(VAR_0);
}
