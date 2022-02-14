
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct crypt_s390_des3_192_ctx {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,size_t,int*) ;
 struct crypt_s390_des3_192_ctx* FUNC_1 (struct crypto_tfm*) ;
 scalar_t__ FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_4, const u8 *VAR_5,
      unsigned int VAR_6)
{
 int VAR_7, VAR_8;
 struct crypt_s390_des3_192_ctx *VAR_9 = FUNC_1(VAR_4);
 const u8 *VAR_10 = VAR_5;
 u32 *VAR_11 = &VAR_4->crt_flags;

 if (!(FUNC_2(VAR_5, &VAR_5[VAR_2], VAR_2) &&
     FUNC_2(&VAR_5[VAR_2], &VAR_5[VAR_2 * 2],
     VAR_2)) &&
     (*VAR_11 & VAR_0)) {
  *VAR_11 |= VAR_1;
  return -VAR_3;
 }
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++, VAR_10 += VAR_2) {
  VAR_8 = FUNC_0(VAR_10, VAR_2, VAR_11);
  if (VAR_8 < 0)
   return VAR_8;
 }
 FUNC_3(VAR_9->key, VAR_5, VAR_6);
 return 0;
}
