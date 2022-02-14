
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct scatterlist {int dummy; } ;
struct hash_desc {int tfm; } ;
struct crypto_hash_walk {int data; } ;


 struct shash_desc** FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_hash_walk*,int) ;
 int FUNC_2 (struct hash_desc*,struct crypto_hash_walk*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct shash_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hash_desc *VAR_0, struct scatterlist *VAR_1,
          unsigned int VAR_2)
{
 struct shash_desc **VAR_3 = FUNC_0(VAR_0->tfm);
 struct shash_desc *VAR_4 = *VAR_3;
 struct crypto_hash_walk VAR_5;
 int VAR_6;

 for (VAR_6 = FUNC_2(VAR_0, &VAR_5, VAR_1, VAR_2);
      VAR_6 > 0; VAR_6 = FUNC_1(&VAR_5, VAR_6))
  VAR_6 = FUNC_3(VAR_4, VAR_5.data, VAR_6);

 return VAR_6;
}
