
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct aead_alg {int (* setkey ) (struct crypto_aead*,int *,unsigned int) ;} ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 struct aead_alg* FUNC_1 (struct crypto_aead*) ;
 unsigned long FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (struct crypto_aead*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct crypto_aead *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct aead_alg *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6 = FUNC_2(VAR_2);
 int VAR_7;
 u8 *VAR_8, *VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_4 + VAR_6;
 VAR_8 = FUNC_4(VAR_10, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = (u8 *)FUNC_0((unsigned long)VAR_8, VAR_6 + 1);
 FUNC_5(VAR_9, VAR_3, VAR_4);
 VAR_7 = VAR_5->setkey(VAR_2, VAR_9, VAR_4);
 FUNC_6(VAR_9, 0, VAR_4);
 FUNC_3(VAR_8);
 return VAR_7;
}
