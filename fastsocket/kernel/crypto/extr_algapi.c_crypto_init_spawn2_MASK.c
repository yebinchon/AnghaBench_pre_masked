
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_type {int type; int maskset; } ;
struct crypto_spawn {struct crypto_type const* frontend; } ;
struct crypto_instance {int dummy; } ;
struct crypto_alg {int cra_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_spawn*,struct crypto_alg*,struct crypto_instance*,int) ;

int FUNC_1(struct crypto_spawn *VAR_1, struct crypto_alg *VAR_2,
         struct crypto_instance *VAR_3,
         const struct crypto_type *VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_4 && (VAR_2->cra_flags ^ VAR_4->type) & VAR_4->maskset)
  goto out;

 VAR_1->frontend = VAR_4;
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4->maskset);

out:
 return VAR_5;
}
