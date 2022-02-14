
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_dmaring {int tx; int nr_slots; int current_slot; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_dmaring*,int*) ;
 int FUNC_2 (struct b43legacy_dmaring*,int) ;
 int FUNC_3 (struct b43legacy_dmaring*) ;
 int FUNC_4 (struct b43legacy_dmaring*,int) ;
 int FUNC_5 (struct b43legacy_dmaring*,int) ;

void FUNC_6(struct b43legacy_dmaring *VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3 = 0;

 FUNC_0(VAR_0->tx);
 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(!(VAR_2 >= 0 && VAR_2 <
      VAR_0->nr_slots));

 VAR_1 = VAR_0->current_slot;
 for (; VAR_1 != VAR_2; VAR_1 = FUNC_2(VAR_0, VAR_1)) {
  FUNC_1(VAR_0, &VAR_1);
  FUNC_5(VAR_0, ++VAR_3);
 }
 FUNC_4(VAR_0, VAR_1);
 VAR_0->current_slot = VAR_1;
}
