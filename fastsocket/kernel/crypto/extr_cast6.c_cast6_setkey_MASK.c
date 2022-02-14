
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct cast6_ctx {int** Kr; int** Km; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ) ;
 struct cast6_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int *,int const*,unsigned int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_2, const u8 *VAR_3,
   unsigned VAR_4)
{
 int VAR_5;
 u32 VAR_6[8];
 __be32 VAR_7[8];
 struct cast6_ctx *VAR_8 = FUNC_2(VAR_2);
 u32 *VAR_9 = &VAR_2->crt_flags;

 if (VAR_4 % 4 != 0) {
  *VAR_9 |= VAR_0;
  return -VAR_1;
 }

 FUNC_4 (VAR_7, 0, 32);
 FUNC_3 (VAR_7, VAR_3, VAR_4);

 VAR_6[0] = FUNC_1(VAR_7[0]);
 VAR_6[1] = FUNC_1(VAR_7[1]);
 VAR_6[2] = FUNC_1(VAR_7[2]);
 VAR_6[3] = FUNC_1(VAR_7[3]);
 VAR_6[4] = FUNC_1(VAR_7[4]);
 VAR_6[5] = FUNC_1(VAR_7[5]);
 VAR_6[6] = FUNC_1(VAR_7[6]);
 VAR_6[7] = FUNC_1(VAR_7[7]);



 for (VAR_5 = 0; VAR_5 < 12; VAR_5++) {
  FUNC_0 (VAR_6, 2 * VAR_5);
  FUNC_0 (VAR_6, 2 * VAR_5 + 1);

  VAR_8->Kr[VAR_5][0] = VAR_6[0] & 0x1f;
  VAR_8->Kr[VAR_5][1] = VAR_6[2] & 0x1f;
  VAR_8->Kr[VAR_5][2] = VAR_6[4] & 0x1f;
  VAR_8->Kr[VAR_5][3] = VAR_6[6] & 0x1f;

  VAR_8->Km[VAR_5][0] = VAR_6[7];
  VAR_8->Km[VAR_5][1] = VAR_6[5];
  VAR_8->Km[VAR_5][2] = VAR_6[3];
  VAR_8->Km[VAR_5][3] = VAR_6[1];
 }

 return 0;
}
