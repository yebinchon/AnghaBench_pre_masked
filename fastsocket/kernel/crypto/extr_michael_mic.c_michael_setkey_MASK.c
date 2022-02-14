
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct michael_mic_ctx {void* r; void* l; } ;
struct crypto_shash {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct michael_mic_ctx* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*,int ) ;
 void* FUNC_2 (int const) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4)
{
 struct michael_mic_ctx *VAR_5 = FUNC_0(VAR_2);

 const __le32 *VAR_6 = (const __le32 *)VAR_3;

 if (VAR_4 != 8) {
  FUNC_1(VAR_2, VAR_0);
  return -VAR_1;
 }

 VAR_5->l = FUNC_2(VAR_6[0]);
 VAR_5->r = FUNC_2(VAR_6[1]);
 return 0;
}
