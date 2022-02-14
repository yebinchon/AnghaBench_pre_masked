
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
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct wm97xx*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct wm97xx *VAR_12)
{
 u16 VAR_13 = 0, VAR_14 = VAR_5;





 FUNC_2(VAR_12, VAR_0, 0x8000);
 FUNC_2(VAR_12, VAR_1, 0x8000);


 if (VAR_10 == 2) {
  VAR_14 |= VAR_4;
  FUNC_1(VAR_12->dev,
   "setting pressure measurement current to 400uA.");
 } else if (VAR_10)
  FUNC_1(VAR_12->dev,
   "setting pressure measurement current to 200uA.");
 if (!VAR_10)
  VAR_11 = 0;


 if (VAR_6 != 4) {
  if (VAR_6 < 0 || VAR_6 > 15) {
   FUNC_1(VAR_12->dev, "supplied delay out of range.");
   VAR_6 = 4;
  }
 }
 VAR_13 &= 0xff0f;
 VAR_13 |= FUNC_0(VAR_6);
 FUNC_1(VAR_12->dev, "setting adc sample delay to %d u Secs.",
  VAR_7[VAR_6]);


 VAR_14 |= (VAR_9 & 0x000f);
 FUNC_1(VAR_12->dev, "setting pdd to Vmid/%d", 1 - (VAR_9 & 0x000f));


 VAR_14 |= ((VAR_8 & 0x3) << 4);

 FUNC_2(VAR_12, VAR_2, VAR_13);
 FUNC_2(VAR_12, VAR_3, VAR_14);
}
