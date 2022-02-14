
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_test_param {int type; int driver; int alg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct crypto_test_param*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct crypto_test_param *VAR_2 = VAR_1;
 u32 VAR_3 = VAR_2->type;
 int VAR_4 = 0;

 if (VAR_3 & VAR_0)
  goto skiptest;

 VAR_4 = FUNC_0(VAR_2->driver, VAR_2->alg, VAR_3, VAR_0);

skiptest:
 FUNC_1(VAR_2->driver, VAR_4);

 FUNC_2(VAR_2);
 FUNC_3(0);
}
