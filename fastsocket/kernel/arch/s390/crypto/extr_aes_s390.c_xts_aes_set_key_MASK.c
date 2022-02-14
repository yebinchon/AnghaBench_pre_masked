
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int key; } ;
struct s390_xts_ctx {unsigned int key_len; TYPE_1__ pcc; int key; int dec; int enc; } ;
struct crypto_tfm {int crt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct s390_xts_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_6, const u8 *VAR_7,
      unsigned int VAR_8)
{
 struct s390_xts_ctx *VAR_9 = FUNC_0(VAR_6);
 u32 *VAR_10 = &VAR_6->crt_flags;

 switch (VAR_8) {
 case 32:
  VAR_9->enc = VAR_3;
  VAR_9->dec = VAR_2;
  FUNC_1(VAR_9->key + 16, VAR_7, 16);
  FUNC_1(VAR_9->pcc.key + 16, VAR_7 + 16, 16);
  break;
 case 48:
  VAR_9->enc = 0;
  VAR_9->dec = 0;
  FUNC_2(VAR_6, VAR_7, VAR_8);
  break;
 case 64:
  VAR_9->enc = VAR_5;
  VAR_9->dec = VAR_4;
  FUNC_1(VAR_9->key, VAR_7, 32);
  FUNC_1(VAR_9->pcc.key, VAR_7 + 32, 32);
  break;
 default:
  *VAR_10 |= VAR_0;
  return -VAR_1;
 }
 VAR_9->key_len = VAR_8;
 return 0;
}
