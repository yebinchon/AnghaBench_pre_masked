
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_desc {scalar_t__ flags; int tfm; } ;
struct dst_crypto_engine {int hash; struct hash_desc* data; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct hash_desc*,void*) ;
 int FUNC_1 (struct hash_desc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bio*,struct dst_crypto_engine*,int ) ;

__attribute__((used)) static int FUNC_3(struct dst_crypto_engine *VAR_1, struct bio *VAR_2, void *VAR_3)
{
 struct hash_desc *VAR_4 = VAR_1->data;
 int VAR_5;

 VAR_4->tfm = VAR_1->hash;
 VAR_4->flags = 0;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;

 return 0;
}
