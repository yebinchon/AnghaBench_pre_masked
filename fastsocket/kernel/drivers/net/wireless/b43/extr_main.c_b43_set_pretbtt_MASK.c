
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_5)
{
 u16 VAR_6;


 if (FUNC_0(VAR_5->wl, VAR_4)) {
  VAR_6 = 2;
 } else {
  if (VAR_5->phy.type == VAR_1)
   VAR_6 = 120;
  else
   VAR_6 = 250;
 }
 FUNC_1(VAR_5, VAR_2, VAR_3, VAR_6);
 FUNC_2(VAR_5, VAR_0, VAR_6);
}
