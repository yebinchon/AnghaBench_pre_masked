
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int core_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 scalar_t__ FUNC_2 (struct b43_wldev*,int ,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int ) ;
 int FUNC_4 (int) ;

void FUNC_5(struct b43_wldev *VAR_10, unsigned int VAR_11)
{
 u32 VAR_12;
 u16 VAR_13;
 bool VAR_14;
 bool VAR_15;
 int VAR_16;

 FUNC_0((VAR_11 & VAR_6) &&
      (VAR_11 & VAR_5));
 FUNC_0((VAR_11 & VAR_4) && (VAR_11 & VAR_3));

 if (VAR_11 & VAR_6) {
  VAR_14 = 1;
 } else if (VAR_11 & VAR_5) {
  VAR_14 = 0;
 } else {


 }
 if (VAR_11 & VAR_4) {
  VAR_15 = 1;
 } else if (VAR_11 & VAR_3) {
  VAR_15 = 0;
 } else {



 }


 VAR_14 = 0;
 VAR_15 = 1;

 VAR_12 = FUNC_1(VAR_10, VAR_2);
 if (VAR_14)
  VAR_12 |= VAR_1;
 else
  VAR_12 &= ~VAR_1;
 if (VAR_15)
  VAR_12 |= VAR_0;
 else
  VAR_12 &= ~VAR_0;
 FUNC_3(VAR_10, VAR_2, VAR_12);

 FUNC_1(VAR_10, VAR_2);
 if (VAR_15 && VAR_10->dev->core_rev >= 5) {

  for (VAR_16 = 0; VAR_16 < 100; VAR_16++) {
   VAR_13 = FUNC_2(VAR_10, VAR_7,
      VAR_8);
   if (VAR_13 != VAR_9)
    break;
   FUNC_4(10);
  }
 }
}
