
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b2056_inittabs_pts {struct b2056_inittab_entry* syn; } ;
struct b2056_inittab_entry {int ghz2; int ghz5; } ;


 size_t FUNC_0 (struct b2056_inittabs_pts*) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 struct b2056_inittabs_pts* VAR_1 ;
 int FUNC_2 (struct b43_wldev*,size_t,int ) ;

void FUNC_3(struct b43_wldev *VAR_2, bool VAR_3)
{
 const struct b2056_inittabs_pts *VAR_4;
 const struct b2056_inittab_entry *VAR_5;

 if (VAR_2->phy.rev >= FUNC_0(VAR_1)) {
  FUNC_1(1);
  return;
 }
 VAR_4 = &VAR_1[VAR_2->phy.rev];
 VAR_5 = &VAR_4->syn[VAR_0];

 FUNC_2(VAR_2, VAR_0, VAR_3 ? VAR_5->ghz5 : VAR_5->ghz2);
}
