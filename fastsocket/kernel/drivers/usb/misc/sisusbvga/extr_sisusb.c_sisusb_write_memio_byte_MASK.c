
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sisusb_usb_data {int dummy; } ;
struct sisusb_packet {int header; int address; int data; } ;


 int FUNC_0 (struct sisusb_usb_data*,int,struct sisusb_packet*) ;

__attribute__((used)) static int FUNC_1(struct sisusb_usb_data *VAR_0, int VAR_1,
       u32 VAR_2, u8 VAR_3)
{
 struct sisusb_packet VAR_4;
 int VAR_5;

 VAR_4.header = (1 << (VAR_2 & 3)) | (VAR_1 << 6);
 VAR_4.address = VAR_2 & ~3;
 VAR_4.data = VAR_3 << ((VAR_2 & 3) << 3);
 VAR_5 = FUNC_0(VAR_0, 10, &VAR_4);
 return VAR_5;
}
