
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_larval {int alg; struct crypto_alg* adult; int completion; } ;
struct crypto_alg {int cra_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct crypto_alg* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct crypto_larval*) ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *,int) ;

__attribute__((used)) static struct crypto_alg *FUNC_5(struct crypto_alg *VAR_6)
{
 struct crypto_larval *VAR_7 = (void *)VAR_6;
 long VAR_8;

 VAR_8 = FUNC_4(
  &VAR_7->completion, 60 * VAR_5);

 VAR_6 = VAR_7->adult;
 if (VAR_8 < 0)
  VAR_6 = FUNC_0(-VAR_2);
 else if (!VAR_8)
  VAR_6 = FUNC_0(-VAR_4);
 else if (!VAR_6)
  VAR_6 = FUNC_0(-VAR_3);
 else if (FUNC_1(VAR_7) &&
   !(VAR_6->cra_flags & VAR_0))
  VAR_6 = FUNC_0(-VAR_1);
 else if (!FUNC_2(VAR_6))
  VAR_6 = FUNC_0(-VAR_1);
 FUNC_3(&VAR_7->alg);

 return VAR_6;
}
