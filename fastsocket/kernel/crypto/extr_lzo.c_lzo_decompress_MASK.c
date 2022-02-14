
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,unsigned int,int *,size_t*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_2, const u8 *VAR_3,
         unsigned int VAR_4, u8 *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 size_t VAR_8 = *VAR_6;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_8);

 if (VAR_7 != VAR_1)
  return -VAR_0;

 *VAR_6 = VAR_8;
 return 0;

}
