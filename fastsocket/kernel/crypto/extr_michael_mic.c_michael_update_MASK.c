
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct michael_mic_desc_ctx {int pending_len; int * pending; int r; int l; } ;
typedef int __le32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 struct michael_mic_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_0, const u8 *VAR_1,
      unsigned int VAR_2)
{
 struct michael_mic_desc_ctx *VAR_3 = FUNC_3(VAR_0);
 const __le32 *VAR_4;

 if (VAR_3->pending_len) {
  int VAR_5 = 4 - VAR_3->pending_len;
  if (VAR_5 > VAR_2)
   VAR_5 = VAR_2;
  FUNC_1(&VAR_3->pending[VAR_3->pending_len], VAR_1, VAR_5);
  VAR_3->pending_len += VAR_5;
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;

  if (VAR_3->pending_len < 4)
   return 0;

  VAR_4 = (const __le32 *)VAR_3->pending;
  VAR_3->l ^= FUNC_0(VAR_4);
  FUNC_2(VAR_3->l, VAR_3->r);
  VAR_3->pending_len = 0;
 }

 VAR_4 = (const __le32 *)VAR_1;

 while (VAR_2 >= 4) {
  VAR_3->l ^= FUNC_0(VAR_4++);
  FUNC_2(VAR_3->l, VAR_3->r);
  VAR_2 -= 4;
 }

 if (VAR_2 > 0) {
  VAR_3->pending_len = VAR_2;
  FUNC_1(VAR_3->pending, VAR_4, VAR_2);
 }

 return 0;
}
