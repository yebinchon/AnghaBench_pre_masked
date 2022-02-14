
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct crypto_hash_walk {int data; } ;
struct ahash_request {int result; } ;


 int FUNC_0 (struct crypto_hash_walk*,int) ;
 int FUNC_1 (struct ahash_request*,struct crypto_hash_walk*) ;
 scalar_t__ FUNC_2 (struct crypto_hash_walk*) ;
 int FUNC_3 (struct shash_desc*,int ) ;
 int FUNC_4 (struct shash_desc*,int ,int,int ) ;
 int FUNC_5 (struct shash_desc*,int ,int) ;

int FUNC_6(struct ahash_request *VAR_0, struct shash_desc *VAR_1)
{
 struct crypto_hash_walk VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (!VAR_3)
  return FUNC_3(VAR_1, VAR_0->result);

 do {
  VAR_3 = FUNC_2(&VAR_2) ?
    FUNC_4(VAR_1, VAR_2.data, VAR_3,
         VAR_0->result) :
    FUNC_5(VAR_1, VAR_2.data, VAR_3);
  VAR_3 = FUNC_0(&VAR_2, VAR_3);
 } while (VAR_3 > 0);

 return VAR_3;
}
