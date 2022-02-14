
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; int * cra_type; } ;
struct shash_alg {int digestsize; int descsize; int statesize; scalar_t__ setkey; int import; scalar_t__ export; scalar_t__ digest; scalar_t__ finup; struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_0(struct shash_alg *VAR_10)
{
 struct crypto_alg *VAR_11 = &VAR_10->base;

 if (VAR_10->digestsize > VAR_3 / 8 ||
     VAR_10->descsize > VAR_3 / 8 ||
     VAR_10->statesize > VAR_3 / 8)
  return -VAR_2;

 VAR_11->cra_type = &VAR_4;
 VAR_11->cra_flags &= ~VAR_0;
 VAR_11->cra_flags |= VAR_1;

 if (!VAR_10->finup)
  VAR_10->finup = VAR_8;
 if (!VAR_10->digest)
  VAR_10->digest = VAR_7;
 if (!VAR_10->export) {
  VAR_10->export = VAR_5;
  VAR_10->import = VAR_6;
  VAR_10->statesize = VAR_10->descsize;
 }
 if (!VAR_10->setkey)
  VAR_10->setkey = VAR_9;

 return 0;
}
