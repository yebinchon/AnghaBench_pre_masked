
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des_ctx {int expkey; } ;
struct crypto_tfm {int crt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct des_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int*,int const*) ;
 int FUNC_2 (int ,int*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_4, const u8 *VAR_5,
        unsigned int VAR_6)
{
 struct des_ctx *VAR_7 = FUNC_0(VAR_4);
 u32 *VAR_8 = &VAR_4->crt_flags;
 u32 VAR_9[VAR_2];
 int VAR_10;


 VAR_10 = FUNC_1(VAR_9, VAR_5);

 if (FUNC_3(VAR_10 == 0) && (*VAR_8 & VAR_0)) {
  *VAR_8 |= VAR_1;
  return -VAR_3;
 }


 FUNC_2(VAR_7->expkey, VAR_9, sizeof(VAR_7->expkey));

 return 0;
}
