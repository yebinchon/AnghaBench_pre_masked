
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int analog; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_1)
{
 if (VAR_1->phy.analog == 1)
  FUNC_1(VAR_1, VAR_0, 1,
   (FUNC_0(VAR_1, VAR_0, 1) & ~0x0034) | 0x0008);
 else
  FUNC_1(VAR_1, VAR_0, 1,
   (FUNC_0(VAR_1, VAR_0, 1) & ~0x0078) | 0x0010);
}
