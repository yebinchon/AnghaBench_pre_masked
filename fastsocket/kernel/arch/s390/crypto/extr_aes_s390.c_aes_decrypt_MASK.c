
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cip; } ;
struct s390_aes_ctx {int key_len; int key; TYPE_1__ fallback; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,int const*,int ) ;
 int FUNC_1 (int ,int *,int const*) ;
 struct s390_aes_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_4, u8 *VAR_5, const u8 *VAR_6)
{
 const struct s390_aes_ctx *VAR_7 = FUNC_2(VAR_4);

 if (FUNC_4(FUNC_3(VAR_7->key_len))) {
  FUNC_1(VAR_7->fallback.cip, VAR_5, VAR_6);
  return;
 }

 switch (VAR_7->key_len) {
 case 16:
  FUNC_0(VAR_1, &VAR_7->key, VAR_5, VAR_6,
         VAR_0);
  break;
 case 24:
  FUNC_0(VAR_2, &VAR_7->key, VAR_5, VAR_6,
         VAR_0);
  break;
 case 32:
  FUNC_0(VAR_3, &VAR_7->key, VAR_5, VAR_6,
         VAR_0);
  break;
 }
}
