
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_pioqueue {scalar_t__ mmio_base; TYPE_1__* dev; } ;
struct TYPE_2__ {int wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_pioqueue*,int ) ;
 int FUNC_2 (struct b43legacy_pioqueue*,int ,int ) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_pioqueue *VAR_4,
    int VAR_5,
    const char *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_4->dev->wl, "PIO RX error: %s\n", VAR_6);
 FUNC_2(VAR_4, VAR_1,
       VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_4->mmio_base != VAR_0);
  for (VAR_7 = 0; VAR_7 < 15; VAR_7++) {

   FUNC_1(VAR_4, VAR_3);
  }
 }
}
