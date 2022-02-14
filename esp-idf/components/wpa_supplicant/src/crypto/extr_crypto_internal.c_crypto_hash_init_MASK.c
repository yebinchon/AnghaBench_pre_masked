
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sha256; int sha1; int md5; } ;
struct crypto_hash {int alg; int* key; size_t key_len; TYPE_1__ u; } ;
typedef int k_pad ;
typedef enum crypto_hash_alg { ____Placeholder_crypto_hash_alg } crypto_hash_alg ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (struct crypto_hash*) ;
 int FUNC_12 (int*,int const*,size_t) ;
 int FUNC_13 (int*,int ,int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,int*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int const*,int) ;

struct crypto_hash * FUNC_18(enum crypto_hash_alg VAR_0, const u8 *VAR_1,
          size_t VAR_2)
{
 struct crypto_hash *VAR_3;
 u8 VAR_4[64];
 u8 VAR_5[32];
 size_t VAR_6;

 VAR_3 = (struct crypto_hash *)FUNC_14(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->alg = VAR_0;

 switch (VAR_0) {
 case 130:
  FUNC_1(&VAR_3->u.md5);
  break;
 case 129:
  FUNC_4(&VAR_3->u.sha1);
  break;
 case 133:
  if (VAR_2 > sizeof(VAR_4)) {
   FUNC_1(&VAR_3->u.md5);
   FUNC_2(&VAR_3->u.md5, VAR_1, VAR_2);
   FUNC_0(VAR_5, &VAR_3->u.md5);
   VAR_1 = VAR_5;
   VAR_2 = 16;
  }
  FUNC_12(VAR_3->key, VAR_1, VAR_2);
  VAR_3->key_len = VAR_2;

  FUNC_12(VAR_4, VAR_1, VAR_2);
  if (VAR_2 < sizeof(VAR_4))
   FUNC_13(VAR_4 + VAR_2, 0, sizeof(VAR_4) - VAR_2);
  for (VAR_6 = 0; VAR_6 < sizeof(VAR_4); VAR_6++)
   VAR_4[VAR_6] ^= 0x36;
  FUNC_1(&VAR_3->u.md5);
  FUNC_2(&VAR_3->u.md5, VAR_4, sizeof(VAR_4));
  break;
 case 132:
  if (VAR_2 > sizeof(VAR_4)) {
   FUNC_4(&VAR_3->u.sha1);
   FUNC_5(&VAR_3->u.sha1, VAR_1, VAR_2);
   FUNC_3(VAR_5, &VAR_3->u.sha1);
   VAR_1 = VAR_5;
   VAR_2 = 20;
  }
  FUNC_12(VAR_3->key, VAR_1, VAR_2);
  VAR_3->key_len = VAR_2;

  FUNC_12(VAR_4, VAR_1, VAR_2);
  if (VAR_2 < sizeof(VAR_4))
   FUNC_13(VAR_4 + VAR_2, 0, sizeof(VAR_4) - VAR_2);
  for (VAR_6 = 0; VAR_6 < sizeof(VAR_4); VAR_6++)
   VAR_4[VAR_6] ^= 0x36;
  FUNC_4(&VAR_3->u.sha1);
  FUNC_5(&VAR_3->u.sha1, VAR_4, sizeof(VAR_4));
  break;
 default:
  FUNC_11(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
