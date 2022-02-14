
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct b43_phy {int rev; scalar_t__ gmode; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static u16 FUNC_5(struct b43_wldev *VAR_17,
      u16 VAR_18, u16 VAR_19, u16 VAR_20)
{
 struct b43_phy *VAR_21 = &VAR_17->phy;
 u16 VAR_22;
 u16 VAR_23;

 if (VAR_21->gmode) {
  VAR_18 <<= VAR_12;
  VAR_19 <<= VAR_14;

  FUNC_0(VAR_18 & ~VAR_11);
  FUNC_0(VAR_19 & ~VAR_13);



  VAR_20 &= (VAR_15 | VAR_7);


  VAR_22 = VAR_16;
  VAR_22 |= VAR_19;
  VAR_22 |= VAR_18;
  VAR_22 |= VAR_20;
  if ((VAR_17->dev->bus_sprom->boardflags_lo & VAR_0)
      && VAR_21->rev > 6)
   VAR_22 |= VAR_10;

  FUNC_2(VAR_17, VAR_2, 0xE300);
  FUNC_2(VAR_17, VAR_6, VAR_22);
  FUNC_4(10);
  VAR_22 |= VAR_8;
  FUNC_2(VAR_17, VAR_6, VAR_22);
  FUNC_4(10);
  VAR_22 |= VAR_9;
  FUNC_2(VAR_17, VAR_6, VAR_22);
  FUNC_4(10);
  FUNC_2(VAR_17, VAR_2, 0xF300);
 } else {
  VAR_19 |= VAR_5;
  FUNC_2(VAR_17, VAR_2, VAR_19);
  FUNC_4(10);
  VAR_19 |= VAR_3;
  FUNC_2(VAR_17, VAR_2, VAR_19);
  FUNC_4(10);
  VAR_19 |= VAR_4;
  FUNC_2(VAR_17, VAR_2, VAR_19);
 }
 FUNC_4(21);
 VAR_23 = FUNC_1(VAR_17, VAR_1);




 FUNC_3();

 return VAR_23;
}
