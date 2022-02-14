
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_driver_name; } ;
struct crypto_larval {TYPE_1__ alg; int completion; int adult; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct crypto_larval *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_3->adult);
 if (VAR_4 != VAR_2) {
  if (FUNC_0(VAR_4 != VAR_1))
   goto out;
  FUNC_1(VAR_3->alg.cra_driver_name, 0);
 }

 VAR_4 = FUNC_4(&VAR_3->completion);
 FUNC_0(VAR_4);

out:
 FUNC_2(&VAR_3->alg);
}
