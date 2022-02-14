
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct cast5_ctx {int* Km; int rr; int * Kr; } ;
typedef int __be32 ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;
 struct cast5_ctx* FUNC_5 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_6(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct cast5_ctx *VAR_3 = FUNC_5(VAR_0);
 const __be32 *VAR_4 = (const __be32 *)VAR_2;
 __be32 *VAR_5 = (__be32 *)VAR_1;
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 u32 *VAR_10;
 u8 *VAR_11;

 VAR_10 = VAR_3->Km;
 VAR_11 = VAR_3->Kr;




 VAR_6 = FUNC_3(VAR_4[0]);
 VAR_7 = FUNC_3(VAR_4[1]);
 if (!(VAR_3->rr)) {
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[0], VAR_11[0]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[1], VAR_11[1]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[2], VAR_11[2]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[3], VAR_11[3]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[4], VAR_11[4]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[5], VAR_11[5]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[6], VAR_11[6]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[7], VAR_11[7]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[8], VAR_11[8]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[9], VAR_11[9]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[10], VAR_11[10]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[11], VAR_11[11]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[12], VAR_11[12]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[13], VAR_11[13]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[14], VAR_11[14]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[15], VAR_11[15]);
 } else {
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[0], VAR_11[0]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[1], VAR_11[1]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[2], VAR_11[2]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[3], VAR_11[3]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[4], VAR_11[4]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[5], VAR_11[5]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[6], VAR_11[6]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[7], VAR_11[7]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[8], VAR_11[8]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_0(VAR_7, VAR_10[9], VAR_11[9]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_1(VAR_7, VAR_10[10], VAR_11[10]);
  VAR_8 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_8 ^ FUNC_2(VAR_7, VAR_10[11], VAR_11[11]);
 }



 VAR_5[0] = FUNC_4(VAR_7);
 VAR_5[1] = FUNC_4(VAR_6);
}
