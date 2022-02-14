
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ivsize; } ;
struct crypto_alg {int cra_flags; TYPE_1__ cra_aead; int * cra_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct crypto_alg* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct crypto_alg*) ;
 int VAR_2 ;
 struct crypto_alg* FUNC_3 (char const*,int,int) ;
 int FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (struct crypto_alg*,int,int) ;

__attribute__((used)) static struct crypto_alg *FUNC_6(const char *VAR_3, u32 VAR_4,
          u32 VAR_5)
{
 struct crypto_alg *VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (FUNC_2(VAR_6))
  return VAR_6;

 if (VAR_6->cra_type == &VAR_2)
  return VAR_6;

 if (!VAR_6->cra_aead.ivsize)
  return VAR_6;

 FUNC_4(VAR_6);
 VAR_6 = FUNC_3(VAR_3, VAR_4 | VAR_0,
        VAR_5 & ~VAR_0);
 if (FUNC_2(VAR_6))
  return VAR_6;

 if (VAR_6->cra_type == &VAR_2) {
  if ((VAR_6->cra_flags ^ VAR_4 ^ ~VAR_5) & VAR_0) {
   FUNC_4(VAR_6);
   VAR_6 = FUNC_1(-VAR_1);
  }
  return VAR_6;
 }

 FUNC_0(!VAR_6->cra_aead.ivsize);

 return FUNC_1(FUNC_5(VAR_6, VAR_4, VAR_5));
}
