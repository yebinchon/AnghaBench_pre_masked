
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int crystalfreq; } ;
struct TYPE_8__ {TYPE_3__ pmu; } ;
struct ssb_bus {TYPE_4__ chipco; } ;
struct b43_wldev {TYPE_2__* dev; } ;
struct TYPE_6__ {TYPE_1__* sdev; } ;
struct TYPE_5__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_10)
{
 struct ssb_bus *VAR_11 = VAR_10->dev->sdev->bus;
 u32 VAR_12 = VAR_11->chipco.pmu.crystalfreq * 1000;
 u8 VAR_13 = FUNC_1(VAR_10, VAR_8) & 0xFF;
 int VAR_14;

 FUNC_2(VAR_10, VAR_8, 0x0);
 FUNC_2(VAR_10, VAR_2, 0x7E);
 FUNC_0(VAR_10, VAR_1, 0xF7);
 FUNC_2(VAR_10, VAR_2, 0x7C);
 FUNC_2(VAR_10, VAR_3, 0x15);
 FUNC_2(VAR_10, VAR_4, 0x70);
 FUNC_2(VAR_10, VAR_5, 0x52);
 FUNC_2(VAR_10, VAR_6, 0x1);
 FUNC_2(VAR_10, VAR_2, 0x7D);

 for (VAR_14 = 0; VAR_14 < 10000; VAR_14++) {
  if (FUNC_1(VAR_10, VAR_7) & 0x2)
   break;
  FUNC_3(1);
 }

 if (!(FUNC_1(VAR_10, VAR_7) & 0x2))
  FUNC_2(VAR_10, VAR_8, VAR_13);

 VAR_13 = FUNC_1(VAR_10, VAR_9) & 0xFF;

 FUNC_2(VAR_10, VAR_9, 0x0);
 FUNC_2(VAR_10, VAR_2, 0x7E);
 FUNC_2(VAR_10, VAR_2, 0x7C);
 FUNC_2(VAR_10, VAR_3, 0x55);
 FUNC_2(VAR_10, VAR_4, 0x76);

 if (VAR_12 == 24000000) {
  FUNC_2(VAR_10, VAR_5, 0xFC);
  FUNC_2(VAR_10, VAR_6, 0x0);
 } else {
  FUNC_2(VAR_10, VAR_5, 0x13);
  FUNC_2(VAR_10, VAR_6, 0x1);
 }

 FUNC_2(VAR_10, VAR_0, 0x7D);

 for (VAR_14 = 0; VAR_14 < 10000; VAR_14++) {
  if (FUNC_1(VAR_10, VAR_7) & 0x2)
   break;
  FUNC_3(1);
 }

 if (!(FUNC_1(VAR_10, VAR_7) & 0x2))
  FUNC_2(VAR_10, VAR_9, VAR_13);

 FUNC_2(VAR_10, VAR_2, 0x7E);
}
