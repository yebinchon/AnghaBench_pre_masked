
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hub {int intfdev; int hdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_hub*,int,int*,int*) ;
 int FUNC_4 (struct usb_hub*,int,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct usb_hub *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 u16 VAR_10, VAR_11;

 if (!FUNC_2(VAR_6->hdev))
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_6->intfdev, "cannot disable port %d (err = %d)\n",
    VAR_7, VAR_8);
  return VAR_8;
 }


 for (VAR_9 = 0; ; VAR_9 += VAR_1) {
  VAR_8 = FUNC_3(VAR_6, VAR_7, &VAR_11, &VAR_10);
  if (VAR_8 < 0)
   return VAR_8;

  if ((VAR_11 & VAR_3) ==
    VAR_5)
   break;
  if (VAR_9 >= VAR_2)
   break;
  FUNC_5(VAR_1);
 }
 if (VAR_9 >= VAR_2)
  FUNC_1(VAR_6->intfdev, "Could not disable port %d after %d ms\n",
    VAR_7, VAR_9);

 return FUNC_4(VAR_6, VAR_7, VAR_4);
}
