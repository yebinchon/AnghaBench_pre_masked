
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {int ivlen; int iv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

void
FUNC_4(
      struct secasvar *VAR_1)
{
 FUNC_1(VAR_0);
 if (!VAR_1->iv)
  FUNC_3("key_sa_stir_iv called with sav == NULL");
 FUNC_0(VAR_1->iv, VAR_1->ivlen);
 FUNC_2(VAR_0);
}
