
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {int count; int * buf; int state; } ;


 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*) ;
 struct sha256_state* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, const u8 *VAR_1,
     unsigned int VAR_2)
{
 struct sha256_state *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4, VAR_5;
 const u8 *VAR_6;

 VAR_4 = VAR_3->count & 0x3f;
 VAR_3->count += VAR_2;
 VAR_5 = 0;
 VAR_6 = VAR_1;

 if ((VAR_4 + VAR_2) > 63) {
  if (VAR_4) {
   VAR_5 = -VAR_4;
   FUNC_0(VAR_3->buf + VAR_4, VAR_1, VAR_5 + 64);
   VAR_6 = VAR_3->buf;
  }

  do {
   FUNC_1(VAR_3->state, VAR_6);
   VAR_5 += 64;
   VAR_6 = VAR_1 + VAR_5;
  } while (VAR_5 + 63 < VAR_2);

  VAR_4 = 0;
 }
 FUNC_0(VAR_3->buf + VAR_4, VAR_6, VAR_2 - VAR_5);

 return 0;
}
