
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct crypto_alg* FUNC_0 (int ) ;
 struct crypto_alg* FUNC_1 (char const*,int,int) ;
 scalar_t__ FUNC_2 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_3 (char const*,int,int) ;
 struct crypto_alg* FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (char*,char const*) ;

struct crypto_alg *FUNC_6(const char *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct crypto_alg *VAR_7;

 if (!VAR_4)
  return FUNC_0(-VAR_3);

 VAR_6 &= ~(VAR_1 | VAR_0);
 VAR_5 &= VAR_6;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_5("%s", VAR_4);

  if (!((VAR_5 ^ VAR_2) & VAR_6 &
        VAR_2))
   FUNC_5("%s-all", VAR_4);

  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 }

 if (VAR_7)
  return FUNC_2(VAR_7) ? FUNC_4(VAR_7) : VAR_7;

 return FUNC_3(VAR_4, VAR_5, VAR_6);
}
