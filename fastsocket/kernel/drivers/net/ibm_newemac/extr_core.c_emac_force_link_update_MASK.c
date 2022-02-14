
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_instance {int link_work; scalar_t__ link_polling; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct emac_instance *VAR_1)
{
 FUNC_1(VAR_1->ndev);
 FUNC_3();
 if (VAR_1->link_polling) {
  FUNC_0(&VAR_1->link_work);
  if (VAR_1->link_polling)
   FUNC_2(&VAR_1->link_work, VAR_0);
 }
}
