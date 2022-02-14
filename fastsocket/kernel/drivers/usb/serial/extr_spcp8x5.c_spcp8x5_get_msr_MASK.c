
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dev; } ;
typedef enum spcp8x5_type { ____Placeholder_spcp8x5_type } spcp8x5_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int ,int ,int ,int *,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_8, u8 *VAR_9,
      enum spcp8x5_type VAR_10)
{
 u8 *VAR_11;
 int VAR_12;



 if (VAR_10 == VAR_7)
  return -VAR_2;
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_2(1, VAR_6);
 if (!VAR_11)
  return -VAR_1;
 VAR_11[0] = VAR_9[0];

 VAR_12 = FUNC_3(VAR_8, FUNC_4(VAR_8, 0),
         VAR_3, VAR_5,
         0, VAR_4, VAR_11, 1, 100);
 if (VAR_12 < 0)
  FUNC_0(&VAR_8->dev, "Get MSR = 0x%p failed (error = %d)",
   *VAR_11, VAR_12);

 FUNC_0(&VAR_8->dev, "0xc0:0x22:0:6  %d - 0x%p ", VAR_12, *VAR_11);
 VAR_9[0] = VAR_11[0];
 FUNC_1(VAR_11);

 return VAR_12;
}
