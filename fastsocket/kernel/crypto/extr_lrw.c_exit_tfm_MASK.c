
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int child; int table; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 struct priv* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->table);
 FUNC_0(VAR_1->child);
}
