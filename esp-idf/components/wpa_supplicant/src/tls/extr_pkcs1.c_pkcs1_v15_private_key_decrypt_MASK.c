
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int dummy; } ;


 int FUNC_0 (int const*,size_t,int*,size_t*,struct crypto_rsa_key*,int) ;
 int FUNC_1 (int*,int*,size_t) ;

int FUNC_2(struct crypto_rsa_key *VAR_0,
      const u8 *VAR_1, size_t VAR_2,
      u8 *VAR_3, size_t *VAR_4)
{
 int VAR_5;
 u8 *VAR_6, *VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, 1);
 if (VAR_5)
  return VAR_5;

 if (*VAR_4 < 2 || VAR_3[0] != 0 || VAR_3[1] != 2)
  return -1;


 VAR_6 = VAR_3 + 2;
 VAR_7 = VAR_3 + *VAR_4;
 while (*VAR_6 && VAR_6 < VAR_7)
  VAR_6++;
 if (VAR_6 == VAR_7)
  return -1;
 VAR_6++;

 *VAR_4 -= VAR_6 - VAR_3;


 FUNC_1(VAR_3, VAR_6, *VAR_4);

 return 0;
}
