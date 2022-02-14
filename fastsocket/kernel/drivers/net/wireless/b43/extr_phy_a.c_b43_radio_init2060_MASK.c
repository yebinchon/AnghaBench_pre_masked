
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* get_default_chan ) (struct b43_wldev*) ;} ;


 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_0)
{
 FUNC_5(VAR_0, 0x0004, 0x00C0);
 FUNC_5(VAR_0, 0x0005, 0x0008);
 FUNC_5(VAR_0, 0x0009, 0x0040);
 FUNC_5(VAR_0, 0x0005, 0x00AA);
 FUNC_5(VAR_0, 0x0032, 0x008F);
 FUNC_5(VAR_0, 0x0006, 0x008F);
 FUNC_5(VAR_0, 0x0034, 0x008F);
 FUNC_5(VAR_0, 0x002C, 0x0007);
 FUNC_5(VAR_0, 0x0082, 0x0080);
 FUNC_5(VAR_0, 0x0080, 0x0000);
 FUNC_5(VAR_0, 0x003F, 0x00DA);
 FUNC_2(VAR_0, 0x0005, ~0x0008);
 FUNC_2(VAR_0, 0x0081, ~0x0010);
 FUNC_2(VAR_0, 0x0081, ~0x0020);
 FUNC_2(VAR_0, 0x0081, ~0x0020);
 FUNC_6(1);

 FUNC_3(VAR_0, 0x0081, ~0x0020, 0x0010);
 FUNC_6(1);

 FUNC_3(VAR_0, 0x0005, ~0x0008, 0x0008);
 FUNC_2(VAR_0, 0x0085, ~0x0010);
 FUNC_2(VAR_0, 0x0005, ~0x0008);
 FUNC_2(VAR_0, 0x0081, ~0x0040);
 FUNC_3(VAR_0, 0x0081, ~0x0040, 0x0040);
 FUNC_5(VAR_0, 0x0005,
     (FUNC_4(VAR_0, 0x0081) & ~0x0008) | 0x0008);
 FUNC_1(VAR_0, 0x0063, 0xDDC6);
 FUNC_1(VAR_0, 0x0069, 0x07BE);
 FUNC_1(VAR_0, 0x006A, 0x0000);

 FUNC_0(VAR_0, VAR_0->phy.ops->get_default_chan(VAR_0));

 FUNC_6(1);
}
