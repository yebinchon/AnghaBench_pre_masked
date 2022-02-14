
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ivsize; } ;
struct TYPE_3__ {int ivsize; } ;
struct crypto_alg {int cra_flags; TYPE_2__ cra_ablkcipher; TYPE_1__ cra_blkcipher; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_alg* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_3 (char const*,int,int) ;
 int FUNC_4 (struct crypto_alg*,int,int) ;
 int FUNC_5 (struct crypto_alg*) ;

__attribute__((used)) static struct crypto_alg *FUNC_6(const char *VAR_5, u32 VAR_6,
       u32 VAR_7)
{
 struct crypto_alg *VAR_8;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (FUNC_2(VAR_8))
  return VAR_8;

 if ((VAR_8->cra_flags & VAR_3) ==
     VAR_2)
  return VAR_8;

 if (!((VAR_8->cra_flags & VAR_3) ==
       VAR_1 ? VAR_8->cra_blkcipher.ivsize :
       VAR_8->cra_ablkcipher.ivsize))
  return VAR_8;

 FUNC_5(VAR_8);
 VAR_8 = FUNC_3(VAR_5, VAR_6 | VAR_0,
        VAR_7 & ~VAR_0);
 if (FUNC_2(VAR_8))
  return VAR_8;

 if ((VAR_8->cra_flags & VAR_3) ==
     VAR_2) {
  if ((VAR_8->cra_flags ^ VAR_6 ^ ~VAR_7) & VAR_0) {
   FUNC_5(VAR_8);
   VAR_8 = FUNC_1(-VAR_4);
  }
  return VAR_8;
 }

 FUNC_0(!((VAR_8->cra_flags & VAR_3) ==
   VAR_1 ? VAR_8->cra_blkcipher.ivsize :
          VAR_8->cra_ablkcipher.ivsize));

 return FUNC_1(FUNC_4(VAR_8, VAR_6, VAR_7));
}
