
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkcs5_params {scalar_t__ alg; size_t salt_len; unsigned int iter_count; int * salt; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct crypto_cipher* FUNC_0 (int ,int *,int *,int) ;
 scalar_t__ FUNC_1 (int,int const**,size_t*,int *) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int *,int) ;

__attribute__((used)) static struct crypto_cipher * FUNC_4(struct pkcs5_params *VAR_4,
      const char *VAR_5)
{
 unsigned int VAR_6;
 u8 VAR_7[VAR_1];
 const u8 *VAR_8[2];
 size_t VAR_9[2];

 if (VAR_4->alg != VAR_3) {
  return ((void*)0);
 }

 VAR_8[0] = (const u8 *) VAR_5;
 VAR_9[0] = FUNC_2(VAR_5);
 VAR_8[1] = VAR_4->salt;
 VAR_9[1] = VAR_4->salt_len;
 if (FUNC_1(2, VAR_8, VAR_9, VAR_7) < 0)
  return ((void*)0);
 VAR_8[0] = VAR_7;
 VAR_9[0] = VAR_1;
 for (VAR_6 = 1; VAR_6 < VAR_4->iter_count; VAR_6++) {
  if (FUNC_1(1, VAR_8, VAR_9, VAR_7) < 0)
   return ((void*)0);
 }

 FUNC_3(VAR_2, "PKCS #5: DES key", VAR_7, 8);
 FUNC_3(VAR_2, "PKCS #5: DES IV", VAR_7 + 8, 8);

 return FUNC_0(VAR_0, VAR_7 + 8, VAR_7, 8);

}
