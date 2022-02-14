
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sisusb_usb_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sisusb_usb_data*,int ,int,int*) ;
 int FUNC_1 (struct sisusb_usb_data*,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct sisusb_usb_data *VAR_1, int VAR_2, u8 VAR_3,
       u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 VAR_6 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);
 VAR_6 |= FUNC_0(VAR_1, VAR_0, VAR_2 + 1, &VAR_7);
 VAR_7 &= ~(VAR_5);
 VAR_7 |= (VAR_4 & VAR_5);
 VAR_6 |= FUNC_1(VAR_1, VAR_0, VAR_2 + 1, VAR_7);
 return VAR_6;
}
