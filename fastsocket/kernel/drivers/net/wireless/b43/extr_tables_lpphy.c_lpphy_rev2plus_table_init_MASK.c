
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rev; } ;
struct b43_wldev {TYPE_2__* dev; TYPE_1__ phy; } ;
struct TYPE_4__ {int chip_id; scalar_t__ chip_rev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int ,int ) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void FUNC_7(struct b43_wldev *VAR_18)
{
 int VAR_19;

 FUNC_4(VAR_18->phy.rev < 2);

 for (VAR_19 = 0; VAR_19 < 704; VAR_19++)
  FUNC_5(VAR_18, FUNC_2(7, VAR_19), 0);

 FUNC_6(VAR_18, FUNC_3(2, 0),
  FUNC_0(VAR_10), VAR_10);
 FUNC_6(VAR_18, FUNC_1(1, 0),
  FUNC_0(VAR_15), VAR_15);
 FUNC_6(VAR_18, FUNC_2(11, 0),
  FUNC_0(VAR_14), VAR_14);
 FUNC_6(VAR_18, FUNC_2(12, 0),
  FUNC_0(VAR_16), VAR_16);
 FUNC_6(VAR_18, FUNC_2(13, 0),
  FUNC_0(VAR_5), VAR_5);
 FUNC_6(VAR_18, FUNC_1(14, 0),
  FUNC_0(VAR_4), VAR_4);
 FUNC_6(VAR_18, FUNC_1(15, 0),
  FUNC_0(VAR_17), VAR_17);
 FUNC_6(VAR_18, FUNC_3(16, 0),
  FUNC_0(VAR_8), VAR_8);
 FUNC_6(VAR_18, FUNC_2(17, 0),
  FUNC_0(VAR_7), VAR_7);
 FUNC_6(VAR_18, FUNC_1(18, 0),
  FUNC_0(VAR_6), VAR_6);
 FUNC_6(VAR_18, FUNC_3(6, 0),
  FUNC_0(VAR_13), VAR_13);
 FUNC_6(VAR_18, FUNC_1(0, 0),
  FUNC_0(VAR_9), VAR_9);
 FUNC_6(VAR_18, FUNC_2(9, 0),
  FUNC_0(VAR_11), VAR_11);
 FUNC_6(VAR_18, FUNC_2(10, 0),
  FUNC_0(VAR_12), VAR_12);

 if ((VAR_18->dev->chip_id == 0x4325) && (VAR_18->dev->chip_rev == 0)) {
  FUNC_6(VAR_18, FUNC_2(13, 0),
   FUNC_0(VAR_1), VAR_1);
  FUNC_6(VAR_18, FUNC_1(14, 0),
   FUNC_0(VAR_0), VAR_0);
  FUNC_6(VAR_18, FUNC_2(17, 0),
   FUNC_0(VAR_3), VAR_3);
  FUNC_6(VAR_18, FUNC_1(18, 0),
   FUNC_0(VAR_2), VAR_2);
 }
}
