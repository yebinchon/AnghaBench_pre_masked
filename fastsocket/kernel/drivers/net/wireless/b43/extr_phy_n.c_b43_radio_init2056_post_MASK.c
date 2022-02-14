
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* n; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {scalar_t__ init_por; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_5)
{
 FUNC_2(VAR_5, VAR_0, 0xB);
 FUNC_2(VAR_5, VAR_1, 0x2);
 FUNC_2(VAR_5, VAR_2, 0x2);
 FUNC_3(1);
 FUNC_1(VAR_5, VAR_2, ~0x2);
 FUNC_1(VAR_5, VAR_3, ~0xFC);
 FUNC_1(VAR_5, VAR_4, ~0x1);
 if (VAR_5->phy.n->init_por)
  FUNC_0(VAR_5);
}
