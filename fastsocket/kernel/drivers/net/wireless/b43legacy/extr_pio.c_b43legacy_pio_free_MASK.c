
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_pio {int * queue0; int * queue1; int * queue2; int * queue3; } ;
struct b43legacy_wldev {struct b43legacy_pio pio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct b43legacy_wldev*) ;

void FUNC_2(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_pio *VAR_1;

 if (!FUNC_1(VAR_0))
  return;
 VAR_1 = &VAR_0->pio;

 FUNC_0(VAR_1->queue3);
 VAR_1->queue3 = ((void*)0);
 FUNC_0(VAR_1->queue2);
 VAR_1->queue2 = ((void*)0);
 FUNC_0(VAR_1->queue1);
 VAR_1->queue1 = ((void*)0);
 FUNC_0(VAR_1->queue0);
 VAR_1->queue0 = ((void*)0);
}
