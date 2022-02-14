
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct michael_mic_desc_ctx {int* pending; int pending_len; int l; int r; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 struct michael_mic_desc_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct michael_mic_desc_ctx *VAR_2 = FUNC_2(VAR_0);
 u8 *VAR_3 = VAR_2->pending;
 __le32 *VAR_4 = (__le32 *)VAR_1;


 switch (VAR_2->pending_len) {
 case 0:
  VAR_2->l ^= 0x5a;
  break;
 case 1:
  VAR_2->l ^= VAR_3[0] | 0x5a00;
  break;
 case 2:
  VAR_2->l ^= VAR_3[0] | (VAR_3[1] << 8) | 0x5a0000;
  break;
 case 3:
  VAR_2->l ^= VAR_3[0] | (VAR_3[1] << 8) | (VAR_3[2] << 16) |
   0x5a000000;
  break;
 }
 FUNC_1(VAR_2->l, VAR_2->r);

 FUNC_1(VAR_2->l, VAR_2->r);

 VAR_4[0] = FUNC_0(VAR_2->l);
 VAR_4[1] = FUNC_0(VAR_2->r);

 return 0;
}
