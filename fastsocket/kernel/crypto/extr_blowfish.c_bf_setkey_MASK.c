
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct bf_ctx {int* p; int* s; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 struct bf_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct bf_ctx*,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3, unsigned int VAR_4)
{
 struct bf_ctx *VAR_5 = FUNC_0(VAR_2);
 u32 *VAR_6 = VAR_5->p;
 u32 *VAR_7 = VAR_5->s;
 short VAR_8, VAR_9, VAR_10;
 u32 VAR_11[2], VAR_12;


 for (VAR_8 = 0, VAR_10 = 0; VAR_8 < 256; VAR_8++)
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++, VAR_10++)
   VAR_7[VAR_10] = VAR_1[VAR_10];


 for (VAR_8 = 0; VAR_8 < 16 + 2; VAR_8++)
  VAR_6[VAR_8] = VAR_0[VAR_8];


 for (VAR_9 = 0, VAR_8 = 0; VAR_8 < 16 + 2; VAR_8++) {
  VAR_12 = (((u32 )VAR_3[VAR_9] << 24) |
   ((u32 )VAR_3[(VAR_9 + 1) % VAR_4] << 16) |
   ((u32 )VAR_3[(VAR_9 + 2) % VAR_4] << 8) |
   ((u32 )VAR_3[(VAR_9 + 3) % VAR_4]));

  VAR_6[VAR_8] = VAR_6[VAR_8] ^ VAR_12;
  VAR_9 = (VAR_9 + 4) % VAR_4;
 }

 VAR_11[0] = 0x00000000;
 VAR_11[1] = 0x00000000;

 for (VAR_8 = 0; VAR_8 < 16 + 2; VAR_8 += 2) {
  FUNC_1((struct bf_ctx *)VAR_5, VAR_11, VAR_11);

  VAR_6[VAR_8] = VAR_11[0];
  VAR_6[VAR_8 + 1] = VAR_11[1];
 }

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  for (VAR_9 = 0, VAR_10 = VAR_8 * 256; VAR_9 < 256; VAR_9 += 2, VAR_10 += 2) {
   FUNC_1((struct bf_ctx *)VAR_5, VAR_11, VAR_11);

   VAR_7[VAR_10] = VAR_11[0];
   VAR_7[VAR_10 + 1] = VAR_11[1];
  }
 }


 return 0;
}
