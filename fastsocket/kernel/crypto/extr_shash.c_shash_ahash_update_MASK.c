
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct crypto_hash_walk {int data; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct crypto_hash_walk*,int) ;
 int FUNC_1 (struct ahash_request*,struct crypto_hash_walk*) ;
 int FUNC_2 (struct shash_desc*,int ,int) ;

int FUNC_3(struct ahash_request *VAR_0, struct shash_desc *VAR_1)
{
 struct crypto_hash_walk VAR_2;
 int VAR_3;

 for (VAR_3 = FUNC_1(VAR_0, &VAR_2); VAR_3 > 0;
      VAR_3 = FUNC_0(&VAR_2, VAR_3))
  VAR_3 = FUNC_2(VAR_1, VAR_2.data, VAR_3);

 return VAR_3;
}
