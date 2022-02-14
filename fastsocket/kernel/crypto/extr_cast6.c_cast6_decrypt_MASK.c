
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct cast6_ctx {int ** Kr; int ** Km; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ) ;
 struct cast6_ctx* FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2) {
 struct cast6_ctx * VAR_3 = FUNC_4(VAR_0);
 const __be32 *VAR_4 = (const __be32 *)VAR_2;
 __be32 *VAR_5 = (__be32 *)VAR_1;
 u32 VAR_6[4];
 u32 * VAR_7;
 u8 * VAR_8;

 VAR_6[0] = FUNC_2(VAR_4[0]);
 VAR_6[1] = FUNC_2(VAR_4[1]);
 VAR_6[2] = FUNC_2(VAR_4[2]);
 VAR_6[3] = FUNC_2(VAR_4[3]);

 VAR_7 = VAR_3->Km[11]; VAR_8 = VAR_3->Kr[11]; FUNC_0 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[10]; VAR_8 = VAR_3->Kr[10]; FUNC_0 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[9]; VAR_8 = VAR_3->Kr[9]; FUNC_0 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[8]; VAR_8 = VAR_3->Kr[8]; FUNC_0 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[7]; VAR_8 = VAR_3->Kr[7]; FUNC_0 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[6]; VAR_8 = VAR_3->Kr[6]; FUNC_0 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[5]; VAR_8 = VAR_3->Kr[5]; FUNC_1 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[4]; VAR_8 = VAR_3->Kr[4]; FUNC_1 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[3]; VAR_8 = VAR_3->Kr[3]; FUNC_1 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[2]; VAR_8 = VAR_3->Kr[2]; FUNC_1 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[1]; VAR_8 = VAR_3->Kr[1]; FUNC_1 (VAR_6, VAR_8, VAR_7);
 VAR_7 = VAR_3->Km[0]; VAR_8 = VAR_3->Kr[0]; FUNC_1 (VAR_6, VAR_8, VAR_7);

 VAR_5[0] = FUNC_3(VAR_6[0]);
 VAR_5[1] = FUNC_3(VAR_6[1]);
 VAR_5[2] = FUNC_3(VAR_6[2]);
 VAR_5[3] = FUNC_3(VAR_6[3]);
}
