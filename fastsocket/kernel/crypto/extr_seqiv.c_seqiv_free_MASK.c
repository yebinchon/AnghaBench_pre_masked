
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_flags; } ;
struct crypto_instance {TYPE_1__ alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct crypto_instance*) ;

__attribute__((used)) static void FUNC_3(struct crypto_instance *VAR_2)
{
 if ((VAR_2->alg.cra_flags ^ VAR_0) & VAR_1)
  FUNC_2(VAR_2);
 else
  FUNC_0(VAR_2);
 FUNC_1();
}
