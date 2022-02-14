
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hub {int intfdev; int hdev; } ;
struct usb_device {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct usb_hub*) ;
 int FUNC_4 (struct usb_hub*,int,struct usb_device*,int ,int) ;
 int FUNC_5 (struct usb_hub*,int,int*,int*) ;
 scalar_t__ FUNC_6 (struct usb_hub*,int) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct usb_hub *VAR_22, int VAR_23,
   struct usb_device *VAR_24, unsigned int VAR_25, bool VAR_26)
{
 int VAR_27, VAR_28;
 u16 VAR_29;
 u16 VAR_30;

 for (VAR_27 = 0;
   VAR_27 < VAR_4;
   VAR_27 += VAR_25) {

  FUNC_7(VAR_25);


  VAR_28 = FUNC_5(VAR_22, VAR_23, &VAR_29, &VAR_30);
  if (VAR_28 < 0)
   return VAR_28;


  if ((VAR_29 & VAR_16))
   goto delay;





  if (!VAR_26) {
   if (FUNC_6(VAR_22, VAR_29)) {
    int VAR_31;

    if ((VAR_30 & VAR_10))
     FUNC_0(VAR_22->hdev, VAR_23,
       VAR_6);
    if (VAR_30 & VAR_11)
     FUNC_0(VAR_22->hdev, VAR_23,
       VAR_7);
    if (VAR_30 & VAR_12)
     FUNC_0(VAR_22->hdev, VAR_23,
       VAR_8);
    FUNC_1(VAR_22->intfdev, "hot reset failed, warm reset port %d\n",
      VAR_23);
    VAR_31 = FUNC_4(VAR_22, VAR_23,
      VAR_24, VAR_2,
      1);
    if ((VAR_30 & VAR_10))
     FUNC_0(VAR_22->hdev, VAR_23,
       VAR_6);
    return VAR_31;
   }

   if (!(VAR_29 & VAR_9))
    return -VAR_1;


   if ((VAR_30 & VAR_10))
    return -VAR_1;

   if ((VAR_29 & VAR_13)) {
    if (FUNC_3(VAR_22))
     VAR_24->speed = VAR_21;
    else if (FUNC_2(VAR_22->hdev))
     VAR_24->speed = VAR_20;
    else if (VAR_29 & VAR_14)
     VAR_24->speed = VAR_18;
    else if (VAR_29 & VAR_15)
     VAR_24->speed = VAR_19;
    else
     VAR_24->speed = VAR_17;
    return 0;
   }
  } else {
   if (!(VAR_29 & VAR_9) ||
     FUNC_6(VAR_22,
      VAR_29))
    return -VAR_1;

   return 0;
  }

delay:

  if (VAR_27 >= 2 * VAR_5)
   VAR_25 = VAR_3;

  FUNC_1 (VAR_22->intfdev,
   "port %d not %sreset yet, waiting %dms\n",
   VAR_23, VAR_26 ? "warm " : "", VAR_25);
 }

 return -VAR_0;
}
