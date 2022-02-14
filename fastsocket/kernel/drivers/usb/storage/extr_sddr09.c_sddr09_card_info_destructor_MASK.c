
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sddr09_card_info {int pba_to_lba; int lba_to_pba; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0) {
 struct sddr09_card_info *VAR_1 = (struct sddr09_card_info *)VAR_0;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->lba_to_pba);
 FUNC_0(VAR_1->pba_to_lba);
}
