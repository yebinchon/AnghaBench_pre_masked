
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rng {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (struct crypto_rng*) ;
 struct crypto_rng* FUNC_2 (char*,int ,int ) ;
 struct crypto_rng* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct crypto_rng*) ;
 int FUNC_4 (struct crypto_rng*,int *,int ) ;
 int FUNC_5 (struct crypto_rng*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(void)
{
 struct crypto_rng *VAR_3;
 int VAR_4;

 FUNC_6(&VAR_1);
 if (!VAR_0) {
  VAR_3 = FUNC_2("stdrng", 0, 0);
  VAR_4 = FUNC_1(VAR_3);
  if (FUNC_0(VAR_3))
   goto unlock;

  VAR_4 = FUNC_4(VAR_3, ((void*)0), FUNC_5(VAR_3));
  if (VAR_4) {
   FUNC_3(VAR_3);
   goto unlock;
  }

  VAR_0 = VAR_3;
 }

 VAR_2++;
 VAR_4 = 0;

unlock:
 FUNC_7(&VAR_1);

 return VAR_4;
}
