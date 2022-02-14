
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_wldev {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {scalar_t__ country_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,unsigned int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (unsigned int) ;

void FUNC_6(struct b43_wldev *VAR_4,
        unsigned int VAR_5,
        bool VAR_6)
{
 if (VAR_6)
  FUNC_3(VAR_4, VAR_5);

 FUNC_4(VAR_4, VAR_1, FUNC_5(VAR_5));

 if (VAR_5 == 14) {
  if (VAR_4->dev->bus_sprom->country_code ==
      VAR_3)
   FUNC_1(VAR_4,
         FUNC_0(VAR_4) & ~VAR_0);
  else
   FUNC_1(VAR_4,
         FUNC_0(VAR_4) | VAR_0);
  FUNC_4(VAR_4, VAR_2,
       FUNC_2(VAR_4, VAR_2)
       | (1 << 11));
 } else {
  FUNC_4(VAR_4, VAR_2,
       FUNC_2(VAR_4, VAR_2)
       & 0xF7BF);
 }
}
