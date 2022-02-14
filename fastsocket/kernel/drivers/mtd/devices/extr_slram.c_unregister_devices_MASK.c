
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int start; } ;
typedef TYPE_1__ slram_priv_t ;
struct TYPE_7__ {struct TYPE_7__* mtdinfo; struct TYPE_7__* priv; struct TYPE_7__* next; } ;
typedef TYPE_2__ slram_mtd_list_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
 slram_mtd_list_t *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->mtdinfo);
  FUNC_1(((slram_priv_t *)VAR_0->mtdinfo->priv)->start);
  FUNC_2(VAR_0->mtdinfo->priv);
  FUNC_2(VAR_0->mtdinfo);
  FUNC_2(VAR_0);
  VAR_0 = VAR_1;
 }
}
