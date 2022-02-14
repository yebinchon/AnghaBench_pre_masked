
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int list; struct b43_wl* wl; } ;
struct b43_wl {int nr_devs; } ;
struct b43_bus_dev {int dummy; } ;


 struct b43_wldev* FUNC_0 (struct b43_bus_dev*) ;
 int FUNC_1 (struct b43_bus_dev*,int *) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct b43_bus_dev *VAR_0)
{
 struct b43_wldev *VAR_1;
 struct b43_wl *VAR_2;




 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = VAR_1->wl;
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(&VAR_1->list);
 VAR_2->nr_devs--;
 FUNC_1(VAR_0, ((void*)0));
 FUNC_4(VAR_1);
}
