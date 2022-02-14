
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct usb_hub {int intfdev; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,char*,int,int,int,unsigned int) ;
 int FUNC_2 (struct usb_hub*,int,unsigned int*,unsigned int*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct usb_hub *VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11 = 0;
 u16 VAR_12, VAR_13;
 unsigned VAR_14 = 0xffff;

 for (VAR_10 = 0; ; VAR_10 += VAR_2) {
  VAR_9 = FUNC_2(VAR_7, VAR_8, &VAR_13, &VAR_12);
  if (VAR_9 < 0)
   return VAR_9;

  if (!(VAR_12 & VAR_6) &&
       (VAR_13 & VAR_5) == VAR_14) {
   VAR_11 += VAR_2;
   if (VAR_11 >= VAR_1)
    break;
  } else {
   VAR_11 = 0;
   VAR_14 = VAR_13 & VAR_5;
  }

  if (VAR_12 & VAR_6) {
   FUNC_0(VAR_7->hdev, VAR_8,
     VAR_4);
  }

  if (VAR_10 >= VAR_3)
   break;
  FUNC_3(VAR_2);
 }

 FUNC_1 (VAR_7->intfdev,
  "debounce: port %d: total %dms stable %dms status 0x%x\n",
  VAR_8, VAR_10, VAR_11, VAR_13);

 if (VAR_11 < VAR_1)
  return -VAR_0;
 return VAR_13;
}
