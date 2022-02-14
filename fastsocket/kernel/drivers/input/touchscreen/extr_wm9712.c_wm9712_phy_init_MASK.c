
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm97xx {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct wm97xx*,int ) ;
 int FUNC_5 (struct wm97xx*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct wm97xx *VAR_17)
{
 u16 VAR_18 = 0;
 u16 VAR_19 = VAR_8 | FUNC_0(1);


 if (VAR_16) {
  VAR_19 &= 0xffc0;
  VAR_19 |= FUNC_0(VAR_16);
  FUNC_2(VAR_17->dev, "setting pen detect pull-up to %d Ohms",
   64000 / VAR_16);
 }


 if (VAR_12) {
  VAR_19 |= VAR_4;
  FUNC_2(VAR_17->dev, "setting 5-wire touchscreen mode.");

  if (VAR_14) {
   FUNC_3(VAR_17->dev, "pressure measurement is not "
     "supported in 5-wire mode\n");
   VAR_14 = 0;
  }
 }


 if (VAR_14 == 2) {
  VAR_19 |= VAR_5;
  FUNC_2(VAR_17->dev,
   "setting pressure measurement current to 400uA.");
 } else if (VAR_14)
  FUNC_2(VAR_17->dev,
   "setting pressure measurement current to 200uA.");
 if (!VAR_14)
  VAR_15 = 0;


 if (VAR_10 < 0 || VAR_10 > 15) {
  FUNC_2(VAR_17->dev, "supplied delay out of range.");
  VAR_10 = 4;
 }
 VAR_18 &= 0xff0f;
 VAR_18 |= FUNC_1(VAR_10);
 FUNC_2(VAR_17->dev, "setting adc sample delay to %d u Secs.",
  VAR_11[VAR_10]);


 VAR_19 |= ((VAR_13 & 0x3) << 6);
 if (VAR_13) {
  u16 VAR_20;

  VAR_20 = FUNC_4(VAR_17, VAR_1);
  FUNC_5(VAR_17, VAR_1, VAR_20 | VAR_7);
  VAR_20 = FUNC_4(VAR_17, VAR_0);
  FUNC_5(VAR_17, VAR_0, VAR_20 | VAR_7);
 }


 if (VAR_9)
  VAR_19 |= VAR_6;

 FUNC_5(VAR_17, VAR_2, VAR_18);
 FUNC_5(VAR_17, VAR_3, VAR_19);
}
